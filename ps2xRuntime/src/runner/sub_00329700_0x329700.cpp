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

// Function: sub_00329700
// Address: 0x329700 - 0x3297c0
void sub_00329700_0x329700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329700_0x329700");
#endif

    switch (ctx->pc) {
        case 0x329728u: goto label_329728;
        default: break;
    }

    ctx->pc = 0x329700u;

    // 0x329700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329704: 0x240300c5  addiu       $v1, $zero, 0xC5
    ctx->pc = 0x329704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x329708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32970c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329710: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x329710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329718: 0xa040009f  sb          $zero, 0x9F($v0)
    ctx->pc = 0x329718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 159), (uint8_t)GPR_U32(ctx, 0));
    // 0x32971c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x32971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329720: 0xc095018  jal         func_254060
    ctx->pc = 0x329720u;
    SET_GPR_U32(ctx, 31, 0x329728u);
    ctx->pc = 0x329724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329720u;
    // 0x329724: 0xa443001a  sh          $v1, 0x1A($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x329720u, 0x329728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329728u;
label_329728:
    // 0x329728: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x329728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32972c: 0x24470149  addiu       $a3, $v0, 0x149
    ctx->pc = 0x32972cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 329));
    // 0x329730: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x329730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x329734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329738: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x329738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x32973c: 0xa487001c  sh          $a3, 0x1C($a0)
    ctx->pc = 0x32973cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 7));
    // 0x329740: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x329740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x329744: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x329744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x329748: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x329748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32974c: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x32974cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x329750: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x329750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x329754: 0xa4850022  sh          $a1, 0x22($a0)
    ctx->pc = 0x329754u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 5));
    // 0x329758: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x329758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32975c: 0x84c5001a  lh          $a1, 0x1A($a2)
    ctx->pc = 0x32975cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x329760: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x329760u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x329764: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329764u;
    {
        const bool branch_taken_0x329764 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x329768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329764u;
        // 0x329768: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329764) {
            ctx->pc = 0x329774u;
            goto label_329774;
        }
    }
    ctx->pc = 0x32976Cu;
    // 0x32976c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x32976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329770: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x329770u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_329774:
    // 0x329774: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x329774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x329778: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x329778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32977c: 0xa4c40040  sh          $a0, 0x40($a2)
    ctx->pc = 0x32977cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x329780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329784: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x329784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x329788: 0xa08000a0  sb          $zero, 0xA0($a0)
    ctx->pc = 0x329788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x32978c: 0x9024fc8d  lbu         $a0, -0x373($at)
    ctx->pc = 0x32978cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x329790: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329790u;
    {
        const bool branch_taken_0x329790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329790) {
            ctx->pc = 0x3297B0u;
            goto label_3297b0;
        }
    }
    ctx->pc = 0x329798u;
    // 0x329798: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x329798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32979c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x32979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3297a0: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x3297a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x3297a4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3297a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3297a8: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x3297a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x3297ac: 0x0  nop
    ctx->pc = 0x3297acu;
    // NOP
label_3297b0:
    // 0x3297b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3297b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3297b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3297b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3297b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3297B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3297BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297B8u;
        // 0x3297bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3297B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3297C0u;
}
