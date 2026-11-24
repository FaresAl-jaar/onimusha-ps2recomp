#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010E6E0
// Address: 0x10e6e0 - 0x10e78c
void sub_0010E6E0_0x10e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E6E0_0x10e6e0");
#endif

    switch (ctx->pc) {
        case 0x10e708u: goto label_10e708;
        case 0x10e738u: goto label_10e738;
        case 0x10e74cu: goto label_10e74c;
        default: break;
    }

    ctx->pc = 0x10e6e0u;

    // 0x10e6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e6e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e6e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e6ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e6f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e6f4: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x10e6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x10e6f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10e6fc: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10e6fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10e700: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10E700u;
    {
        const bool branch_taken_0x10e700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E700u;
        // 0x10e704: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e700) {
            ctx->pc = 0x10E72Cu;
            goto label_10e72c;
        }
    }
    ctx->pc = 0x10E708u;
label_10e708:
    // 0x10e708: 0x42000039  di
    ctx->pc = 0x10e708u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10e70c: 0x40f  sync.p
    ctx->pc = 0x10e70cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10e710: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10e714: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10e714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10e718: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10e71c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10E71Cu;
    {
        const bool branch_taken_0x10e71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e71c) {
            ctx->pc = 0x10E708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e708;
        }
    }
    ctx->pc = 0x10E724u;
    // 0x10e724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E724u;
    {
        const bool branch_taken_0x10e724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E724u;
        // 0x10e728: 0x8e422a94  lw          $v0, 0x2A94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e724) {
            ctx->pc = 0x10E730u;
            goto label_10e730;
        }
    }
    ctx->pc = 0x10E72Cu;
label_10e72c:
    // 0x10e72c: 0x8e422a94  lw          $v0, 0x2A94($s2)
    ctx->pc = 0x10e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10900)));
label_10e730:
    // 0x10e730: 0xc0437f0  jal         func_10DFC0
    ctx->pc = 0x10E730u;
    SET_GPR_U32(ctx, 31, 0x10E738u);
    ctx->pc = 0x10E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E730u;
    // 0x10e734: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFC0u, 0x10E730u, 0x10E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E738u;
label_10e738:
    // 0x10e738: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x10e738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10e73c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10E73Cu;
    {
        const bool branch_taken_0x10e73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E73Cu;
        // 0x10e740: 0x8e422a94  lw          $v0, 0x2A94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e73c) {
            ctx->pc = 0x10E768u;
            goto label_10e768;
        }
    }
    ctx->pc = 0x10E744u;
    // 0x10e744: 0xc048e32  jal         func_1238C8
    ctx->pc = 0x10E744u;
    SET_GPR_U32(ctx, 31, 0x10E74Cu);
    ctx->pc = 0x1238C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238C8u, 0x10E744u, 0x10E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E74Cu;
label_10e74c:
    // 0x10e74c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10e750: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E750u;
    {
        const bool branch_taken_0x10e750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E750u;
        // 0x10e754: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e750) {
            ctx->pc = 0x10E75Cu;
            goto label_10e75c;
        }
    }
    ctx->pc = 0x10E758u;
    // 0x10e758: 0x42000038  ei
    ctx->pc = 0x10e758u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10e75c:
    // 0x10e75c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10e760: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10E760u;
    {
        const bool branch_taken_0x10e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E760u;
        // 0x10e764: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e760) {
            ctx->pc = 0x10E774u;
            goto label_10e774;
        }
    }
    ctx->pc = 0x10E768u;
label_10e768:
    // 0x10e768: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E768u;
    {
        const bool branch_taken_0x10e768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E768u;
        // 0x10e76c: 0xae502a94  sw          $s0, 0x2A94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10900), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e768) {
            ctx->pc = 0x10E774u;
            goto label_10e774;
        }
    }
    ctx->pc = 0x10E770u;
    // 0x10e770: 0x42000038  ei
    ctx->pc = 0x10e770u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10e774:
    // 0x10e774: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e778: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e77c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e784: 0x3e00008  jr          $ra
    ctx->pc = 0x10E784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E784u;
        // 0x10e788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E78Cu;
}
