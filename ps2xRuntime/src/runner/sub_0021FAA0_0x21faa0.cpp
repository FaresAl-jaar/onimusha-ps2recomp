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

// Function: sub_0021FAA0
// Address: 0x21faa0 - 0x21fb3c
void sub_0021FAA0_0x21faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FAA0_0x21faa0");
#endif

    switch (ctx->pc) {
        case 0x21fae8u: goto label_21fae8;
        case 0x21fb1cu: goto label_21fb1c;
        default: break;
    }

    ctx->pc = 0x21faa0u;

    // 0x21faa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21faa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21faa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21faa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21faac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fab0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21fab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21fab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21fab8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21fab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fabc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21fabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21fac0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FAC0u;
    {
        const bool branch_taken_0x21fac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC0u;
        // 0x21fac4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac0) {
            ctx->pc = 0x21FAE0u;
            goto label_21fae0;
        }
    }
    ctx->pc = 0x21FAC8u;
    // 0x21fac8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x21fac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x21facc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x21faccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x21fad0: 0x8c229fc8  lw          $v0, -0x6038($at)
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942664)));
    // 0x21fad4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21FAD4u;
    {
        const bool branch_taken_0x21fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD4u;
        // 0x21fad8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fad4) {
            ctx->pc = 0x21FB20u;
            goto label_21fb20;
        }
    }
    ctx->pc = 0x21FADCu;
    // 0x21fadc: 0x0  nop
    ctx->pc = 0x21fadcu;
    // NOP
label_21fae0:
    // 0x21fae0: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21FAE0u;
    SET_GPR_U32(ctx, 31, 0x21FAE8u);
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21FAE0u, 0x21FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAE8u;
label_21fae8:
    // 0x21fae8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21faec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FAECu;
    {
        const bool branch_taken_0x21faec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAECu;
        // 0x21faf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faec) {
            ctx->pc = 0x21FB10u;
            goto label_21fb10;
        }
    }
    ctx->pc = 0x21FAF4u;
    // 0x21faf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21faf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21faf8: 0x34a50113  ori         $a1, $a1, 0x113
    ctx->pc = 0x21faf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)275);
    // 0x21fafc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fafcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fb00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fb00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fb04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21fb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fb08: 0x80848e0  j           func_212380
    ctx->pc = 0x21FB08u;
    ctx->pc = 0x21FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB08u;
    // 0x21fb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21FB10u;
label_21fb10:
    // 0x21fb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb14: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21FB14u;
    SET_GPR_U32(ctx, 31, 0x21FB1Cu);
    ctx->pc = 0x21FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB14u;
    // 0x21fb18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21FB14u, 0x21FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB1Cu;
label_21fb1c:
    // 0x21fb1c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_21fb20:
    // 0x21fb20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fb24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fb2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fb2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fb30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21fb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fb34: 0x3e00008  jr          $ra
    ctx->pc = 0x21FB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB34u;
        // 0x21fb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FB3Cu;
}
