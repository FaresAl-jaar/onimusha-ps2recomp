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

// Function: sub_00273F90
// Address: 0x273f90 - 0x274040
void sub_00273F90_0x273f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273F90_0x273f90");
#endif

    ctx->pc = 0x273f90u;

    // 0x273f90: 0x838588a4  lb          $a1, -0x775C($gp)
    ctx->pc = 0x273f90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x273f94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x273f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273f98: 0x14a30027  bne         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x273F98u;
    {
        const bool branch_taken_0x273f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x273f98) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x273FA0u;
    // 0x273fa0: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x273fa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x273fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273fa8: 0x14a30023  bne         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x273FA8u;
    {
        const bool branch_taken_0x273fa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x273fa8) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x273FB0u;
    // 0x273fb0: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x273fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x273fb4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x273fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273fb8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x273FB8u;
    {
        const bool branch_taken_0x273fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273fb8) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x273FC0u;
    // 0x273fc0: 0x838488a0  lb          $a0, -0x7760($gp)
    ctx->pc = 0x273fc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273fc4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x273fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x273fc8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x273FC8u;
    {
        const bool branch_taken_0x273fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x273FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FC8u;
        // 0x273fcc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fc8) {
            ctx->pc = 0x274010u;
            goto label_274010;
        }
    }
    ctx->pc = 0x273FD0u;
    // 0x273fd0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273FD0u;
    {
        const bool branch_taken_0x273fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x273fd0) {
            ctx->pc = 0x273FE0u;
            goto label_273fe0;
        }
    }
    ctx->pc = 0x273FD8u;
    // 0x273fd8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x273FD8u;
    {
        const bool branch_taken_0x273fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273fd8) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x273FE0u;
label_273fe0:
    // 0x273fe0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x273fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x273fe4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x273fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x273fe8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273FE8u;
    {
        const bool branch_taken_0x273fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x273FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FE8u;
        // 0x273fec: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fe8) {
            ctx->pc = 0x273FF8u;
            goto label_273ff8;
        }
    }
    ctx->pc = 0x273FF0u;
    // 0x273ff0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x273FF0u;
    {
        const bool branch_taken_0x273ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273ff0) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x273FF8u;
label_273ff8:
    // 0x273ff8: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x273ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273ffc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x273FFCu;
    {
        const bool branch_taken_0x273ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ffc) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x274004u;
    // 0x274004: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x274004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x274008: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274008u;
    {
        const bool branch_taken_0x274008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274008u;
        // 0x27400c: 0xa78388bc  sh          $v1, -0x7744($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274008) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x274010u;
label_274010:
    // 0x274010: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x274010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x274014: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x274014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x274018: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x274018u;
    {
        const bool branch_taken_0x274018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x274018) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x274020u;
    // 0x274020: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x274020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x274024: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274024u;
    {
        const bool branch_taken_0x274024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274024) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x27402Cu;
    // 0x27402c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x274030: 0xa78388bc  sh          $v1, -0x7744($gp)
    ctx->pc = 0x274030u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
    // 0x274034: 0x0  nop
    ctx->pc = 0x274034u;
    // NOP
label_274038:
    // 0x274038: 0x3e00008  jr          $ra
    ctx->pc = 0x274038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274040u;
}
