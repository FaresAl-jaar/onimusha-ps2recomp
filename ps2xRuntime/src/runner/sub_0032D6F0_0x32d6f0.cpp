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

// Function: sub_0032D6F0
// Address: 0x32d6f0 - 0x32d7a4
void sub_0032D6F0_0x32d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D6F0_0x32d6f0");
#endif

    switch (ctx->pc) {
        case 0x32d798u: goto label_32d798;
        default: break;
    }

    ctx->pc = 0x32d6f0u;

    // 0x32d6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32d6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32d6f8: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x32d6f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x32d6fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32D6FCu;
    {
        const bool branch_taken_0x32d6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6FCu;
        // 0x32d700: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d6fc) {
            ctx->pc = 0x32D720u;
            goto label_32d720;
        }
    }
    ctx->pc = 0x32D704u;
    // 0x32d704: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x32d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x32d708: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x32d708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d70c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x32d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32d710: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x32d710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32D714u;
    {
        const bool branch_taken_0x32d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D714u;
        // 0x32d718: 0xa082000f  sb          $v0, 0xF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d714) {
            ctx->pc = 0x32D738u;
            goto label_32d738;
        }
    }
    ctx->pc = 0x32D71Cu;
    // 0x32d71c: 0x0  nop
    ctx->pc = 0x32d71cu;
    // NOP
label_32d720:
    // 0x32d720: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32d724: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x32d724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d728: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x32d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32d72c: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x32d72cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d734: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x32d734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
label_32d738:
    // 0x32d738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d73c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x32d73cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d740: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32d740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32d744: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32d748: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x32d748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d74c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32d750: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32d754: 0x8083000b  lb          $v1, 0xB($a0)
    ctx->pc = 0x32d754u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x32d758: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32d758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32d75c: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x32d75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32d760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d764: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32d764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d768: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32d768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32d76c: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32d76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32d770: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32d770u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32d774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32d778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32d77c: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x32d77cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32d780: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d784: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32d788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d78c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32d790: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32D790u;
    SET_GPR_U32(ctx, 31, 0x32D798u);
    ctx->pc = 0x32D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D790u;
    // 0x32d794: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32D790u, 0x32D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D798u;
label_32d798:
    // 0x32d798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d79c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D79Cu;
        // 0x32d7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D7A4u;
}
