/* SPDX-License-Identifier: GPL-2.0 */
BPF_SCHED_HOOK(int, 0, cfs_check_preempt_tick, struct sched_entity *curr, unsigned long delta_exec)
BPF_SCHED_HOOK(int, 0, cfs_check_preempt_wakeup, struct task_struct *curr, struct task_struct *p)
BPF_SCHED_HOOK(int, 0, cfs_wakeup_preempt_entity, struct sched_entity *curr, struct sched_entity *se)
BPF_SCHED_HOOK(int, 0, cfs__schedule, struct task_struct *prev, unsigned long delta_exec, int check_pred)
BPF_SCHED_HOOK(int, 0, cfs_entity_before, int apred, int bpred, u64 avmtime, u64 bvmtime)
