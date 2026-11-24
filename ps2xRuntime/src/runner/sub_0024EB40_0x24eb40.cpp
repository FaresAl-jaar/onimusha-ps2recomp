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

// Function: sub_0024EB40
// Address: 0x24eb40 - 0x24ebfc
void sub_0024EB40_0x24eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EB40_0x24eb40");
#endif

    switch (ctx->pc) {
        case 0x24eba0u: goto label_24eba0;
        case 0x24ebb4u: goto label_24ebb4;
        case 0x24ebc0u: goto label_24ebc0;
        case 0x24ebc8u: goto label_24ebc8;
        case 0x24ebd0u: goto label_24ebd0;
        case 0x24ebd8u: goto label_24ebd8;
        case 0x24ebe0u: goto label_24ebe0;
        case 0x24ebe8u: goto label_24ebe8;
        default: break;
    }

    ctx->pc = 0x24eb40u;

    // 0x24eb40: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24eb44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24eb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24eb48: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24eb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eb50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24eb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24eb58: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB58u;
    {
        const bool branch_taken_0x24eb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB58u;
        // 0x24eb5c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb58) {
            ctx->pc = 0x24EB70u;
            goto label_24eb70;
        }
    }
    ctx->pc = 0x24EB60u;
    // 0x24eb60: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24eb64: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24eb68: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x24EB68u;
    {
        const bool branch_taken_0x24eb68 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB68u;
        // 0x24eb6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb68) {
            ctx->pc = 0x24EBECu;
            goto label_24ebec;
        }
    }
    ctx->pc = 0x24EB70u;
label_24eb70:
    // 0x24eb70: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24eb74: 0x2463751c  addiu       $v1, $v1, 0x751C
    ctx->pc = 0x24eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29980));
    // 0x24eb78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D751Cu));
    // 0x24eb7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24eb80: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24EB80u;
    {
        const bool branch_taken_0x24eb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB80u;
        // 0x24eb84: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb80) {
            ctx->pc = 0x24EBE8u;
            goto label_24ebe8;
        }
    }
    ctx->pc = 0x24EB88u;
    // 0x24eb88: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24eb88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x24eb8c: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x24eb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x24eb90: 0x261074ec  addiu       $s0, $s0, 0x74EC
    ctx->pc = 0x24eb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29932));
    // 0x24eb94: 0x26319f70  addiu       $s1, $s1, -0x6090
    ctx->pc = 0x24eb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942576));
    // 0x24eb98: 0xc045920  jal         func_116480
    ctx->pc = 0x24EB98u;
    SET_GPR_U32(ctx, 31, 0x24EBA0u);
    ctx->pc = 0x24EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB98u;
    // 0x24eb9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116480u, 0x24EB98u, 0x24EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBA0u;
label_24eba0:
    // 0x24eba0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x24eba4: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24eba4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x24eba8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24ebac: 0xc091e0e  jal         func_247838
    ctx->pc = 0x24EBACu;
    SET_GPR_U32(ctx, 31, 0x24EBB4u);
    ctx->pc = 0x24EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBACu;
    // 0x24ebb0: 0x26107524  addiu       $s0, $s0, 0x7524 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247838u, 0x24EBACu, 0x24EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBB4u;
label_24ebb4:
    // 0x24ebb4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x24ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x24ebb8: 0xc045920  jal         func_116480
    ctx->pc = 0x24EBB8u;
    SET_GPR_U32(ctx, 31, 0x24EBC0u);
    ctx->pc = 0x24EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBB8u;
    // 0x24ebbc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116480u, 0x24EBB8u, 0x24EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBC0u;
label_24ebc0:
    // 0x24ebc0: 0xc0937b2  jal         func_24DEC8
    ctx->pc = 0x24EBC0u;
    SET_GPR_U32(ctx, 31, 0x24EBC8u);
    ctx->pc = 0x24EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBC0u;
    // 0x24ebc4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEC8u, 0x24EBC0u, 0x24EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBC8u;
label_24ebc8:
    // 0x24ebc8: 0xc0939e8  jal         func_24E7A0
    ctx->pc = 0x24EBC8u;
    SET_GPR_U32(ctx, 31, 0x24EBD0u);
    ctx->pc = 0x24E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E7A0u, 0x24EBC8u, 0x24EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBD0u;
label_24ebd0:
    // 0x24ebd0: 0xc091ec8  jal         func_247B20
    ctx->pc = 0x24EBD0u;
    SET_GPR_U32(ctx, 31, 0x24EBD8u);
    ctx->pc = 0x247B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B20u, 0x24EBD0u, 0x24EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBD8u;
label_24ebd8:
    // 0x24ebd8: 0xc094afa  jal         func_252BE8
    ctx->pc = 0x24EBD8u;
    SET_GPR_U32(ctx, 31, 0x24EBE0u);
    ctx->pc = 0x252BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252BE8u, 0x24EBD8u, 0x24EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBE0u;
label_24ebe0:
    // 0x24ebe0: 0xc094a12  jal         func_252848
    ctx->pc = 0x24EBE0u;
    SET_GPR_U32(ctx, 31, 0x24EBE8u);
    ctx->pc = 0x252848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252848u, 0x24EBE0u, 0x24EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBE8u;
label_24ebe8:
    // 0x24ebe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ebe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ebec:
    // 0x24ebec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ebecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ebf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24ebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ebf4: 0x3e00008  jr          $ra
    ctx->pc = 0x24EBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBF4u;
        // 0x24ebf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EBFCu;
}
