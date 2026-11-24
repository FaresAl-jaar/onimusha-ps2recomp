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

// Function: sub_0039A3F0
// Address: 0x39a3f0 - 0x39a48c
void sub_0039A3F0_0x39a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A3F0_0x39a3f0");
#endif

    switch (ctx->pc) {
        case 0x39a418u: goto label_39a418;
        default: break;
    }

    ctx->pc = 0x39a3f0u;

    // 0x39a3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39a3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39a3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39a3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a404: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39a404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a408: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39a408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39a40c: 0x8e252b28  lw          $a1, 0x2B28($s1)
    ctx->pc = 0x39a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11048)));
    // 0x39a410: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39A410u;
    SET_GPR_U32(ctx, 31, 0x39A418u);
    ctx->pc = 0x39A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A410u;
    // 0x39a414: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39A410u, 0x39A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A418u;
label_39a418:
    // 0x39a418: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x39A418u;
    {
        const bool branch_taken_0x39a418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a418) {
            ctx->pc = 0x39A478u;
            goto label_39a478;
        }
    }
    ctx->pc = 0x39A420u;
    // 0x39a420: 0x82262b22  lb          $a2, 0x2B22($s1)
    ctx->pc = 0x39a420u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11042)));
    // 0x39a424: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x39a424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39a428: 0x14c40005  bne         $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A428u;
    {
        const bool branch_taken_0x39a428 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x39a428) {
            ctx->pc = 0x39A440u;
            goto label_39a440;
        }
    }
    ctx->pc = 0x39A430u;
    // 0x39a430: 0x82232b23  lb          $v1, 0x2B23($s1)
    ctx->pc = 0x39a430u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11043)));
    // 0x39a434: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39A434u;
    {
        const bool branch_taken_0x39a434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x39a434) {
            ctx->pc = 0x39A478u;
            goto label_39a478;
        }
    }
    ctx->pc = 0x39A43Cu;
    // 0x39a43c: 0x0  nop
    ctx->pc = 0x39a43cu;
    // NOP
label_39a440:
    // 0x39a440: 0x82232b23  lb          $v1, 0x2B23($s1)
    ctx->pc = 0x39a440u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11043)));
    // 0x39a444: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x39a444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39a448: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x39a448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x39a44c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x39a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x39a450: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x39a450u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x39a454: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39a454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39a458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39a45c: 0x24652b2c  addiu       $a1, $v1, 0x2B2C
    ctx->pc = 0x39a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11052));
    // 0x39a460: 0x90632b2c  lbu         $v1, 0x2B2C($v1)
    ctx->pc = 0x39a460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11052)));
    // 0x39a464: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x39a464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39a468: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A468u;
    {
        const bool branch_taken_0x39a468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a468) {
            ctx->pc = 0x39A478u;
            goto label_39a478;
        }
    }
    ctx->pc = 0x39A470u;
    // 0x39a470: 0xa0b00000  sb          $s0, 0x0($a1)
    ctx->pc = 0x39a470u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x39a474: 0x0  nop
    ctx->pc = 0x39a474u;
    // NOP
label_39a478:
    // 0x39a478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a47c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a484: 0x3e00008  jr          $ra
    ctx->pc = 0x39A484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A484u;
        // 0x39a488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A48Cu;
}
