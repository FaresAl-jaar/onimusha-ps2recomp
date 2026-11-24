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

// Function: sub_002DD2B0
// Address: 0x2dd2b0 - 0x2dd3e8
void sub_002DD2B0_0x2dd2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD2B0_0x2dd2b0");
#endif

    switch (ctx->pc) {
        case 0x2dd300u: goto label_2dd300;
        case 0x2dd314u: goto label_2dd314;
        case 0x2dd334u: goto label_2dd334;
        case 0x2dd348u: goto label_2dd348;
        case 0x2dd36cu: goto label_2dd36c;
        case 0x2dd380u: goto label_2dd380;
        case 0x2dd398u: goto label_2dd398;
        case 0x2dd3d0u: goto label_2dd3d0;
        default: break;
    }

    ctx->pc = 0x2dd2b0u;

    // 0x2dd2b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dd2b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dd2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dd2b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd2bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd2c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dd2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd2c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dd2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2cc: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x2dd2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2dd2d0: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x2dd2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2dd2d4: 0x90c60006  lbu         $a2, 0x6($a2)
    ctx->pc = 0x2dd2d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2dd2d8: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2dd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2dd2dc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2dd2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2dd2e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2dd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2dd2e4: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x2dd2e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2dd2e8: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x2dd2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x2dd2ec: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x2dd2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2dd2f0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DD2F0u;
    {
        const bool branch_taken_0x2dd2f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2F0u;
        // 0x2dd2f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd2f0) {
            ctx->pc = 0x2DD318u;
            goto label_2dd318;
        }
    }
    ctx->pc = 0x2DD2F8u;
    // 0x2dd2f8: 0xc0b6d00  jal         func_2DB400
    ctx->pc = 0x2DD2F8u;
    SET_GPR_U32(ctx, 31, 0x2DD300u);
    ctx->pc = 0x2DD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2F8u;
    // 0x2dd2fc: 0x8e460090  lw          $a2, 0x90($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB400u, 0x2DD2F8u, 0x2DD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD300u;
label_2dd300:
    // 0x2dd300: 0x8e460090  lw          $a2, 0x90($s2)
    ctx->pc = 0x2dd300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2dd304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd308: 0x8e470084  lw          $a3, 0x84($s2)
    ctx->pc = 0x2dd308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x2dd30c: 0xc0b6d30  jal         func_2DB4C0
    ctx->pc = 0x2DD30Cu;
    SET_GPR_U32(ctx, 31, 0x2DD314u);
    ctx->pc = 0x2DD310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD30Cu;
    // 0x2dd310: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB4C0u, 0x2DD30Cu, 0x2DD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD314u;
label_2dd314:
    // 0x2dd314: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dd314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2dd318:
    // 0x2dd318: 0x8e470088  lw          $a3, 0x88($s2)
    ctx->pc = 0x2dd318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2dd31c: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2DD31Cu;
    {
        const bool branch_taken_0x2dd31c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd31c) {
            ctx->pc = 0x2DD350u;
            goto label_2dd350;
        }
    }
    ctx->pc = 0x2DD324u;
    // 0x2dd324: 0x8e460094  lw          $a2, 0x94($s2)
    ctx->pc = 0x2dd324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2dd328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd32c: 0xc0b6d00  jal         func_2DB400
    ctx->pc = 0x2DD32Cu;
    SET_GPR_U32(ctx, 31, 0x2DD334u);
    ctx->pc = 0x2DD330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD32Cu;
    // 0x2dd330: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB400u, 0x2DD32Cu, 0x2DD334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD334u;
label_2dd334:
    // 0x2dd334: 0x8e460094  lw          $a2, 0x94($s2)
    ctx->pc = 0x2dd334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2dd338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd33c: 0x8e470088  lw          $a3, 0x88($s2)
    ctx->pc = 0x2dd33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2dd340: 0xc0b6d30  jal         func_2DB4C0
    ctx->pc = 0x2DD340u;
    SET_GPR_U32(ctx, 31, 0x2DD348u);
    ctx->pc = 0x2DD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD340u;
    // 0x2dd344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB4C0u, 0x2DD340u, 0x2DD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD348u;
label_2dd348:
    // 0x2dd348: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dd348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dd34c: 0x0  nop
    ctx->pc = 0x2dd34cu;
    // NOP
label_2dd350:
    // 0x2dd350: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x2dd350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2dd354: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2DD354u;
    {
        const bool branch_taken_0x2dd354 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd354) {
            ctx->pc = 0x2DD388u;
            goto label_2dd388;
        }
    }
    ctx->pc = 0x2DD35Cu;
    // 0x2dd35c: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x2dd35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2dd360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd364: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x2DD364u;
    SET_GPR_U32(ctx, 31, 0x2DD36Cu);
    ctx->pc = 0x2DD368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD364u;
    // 0x2dd368: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x2DD364u, 0x2DD36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD36Cu;
label_2dd36c:
    // 0x2dd36c: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x2dd36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2dd370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd374: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x2dd374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2dd378: 0xc0b6f20  jal         func_2DBC80
    ctx->pc = 0x2DD378u;
    SET_GPR_U32(ctx, 31, 0x2DD380u);
    ctx->pc = 0x2DD37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD378u;
    // 0x2dd37c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBC80u, 0x2DD378u, 0x2DD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD380u;
label_2dd380:
    // 0x2dd380: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dd380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dd384: 0x0  nop
    ctx->pc = 0x2dd384u;
    // NOP
label_2dd388:
    // 0x2dd388: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD388u;
    {
        const bool branch_taken_0x2dd388 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD388u;
        // 0x2dd38c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd388) {
            ctx->pc = 0x2DD398u;
            goto label_2dd398;
        }
    }
    ctx->pc = 0x2DD390u;
    // 0x2dd390: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2DD390u;
    SET_GPR_U32(ctx, 31, 0x2DD398u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2DD390u, 0x2DD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD398u;
label_2dd398:
    // 0x2dd398: 0x86430054  lh          $v1, 0x54($s2)
    ctx->pc = 0x2dd398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2dd39c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dd3a0: 0xa6430054  sh          $v1, 0x54($s2)
    ctx->pc = 0x2dd3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd3a4: 0x86430054  lh          $v1, 0x54($s2)
    ctx->pc = 0x2dd3a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2dd3a8: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x2dd3a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x2dd3ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD3ACu;
    {
        const bool branch_taken_0x2dd3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3ACu;
        // 0x2dd3b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3ac) {
            ctx->pc = 0x2DD3B8u;
            goto label_2dd3b8;
        }
    }
    ctx->pc = 0x2DD3B4u;
    // 0x2dd3b4: 0xa6430054  sh          $v1, 0x54($s2)
    ctx->pc = 0x2dd3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 3));
label_2dd3b8:
    // 0x2dd3b8: 0x92430050  lbu         $v1, 0x50($s2)
    ctx->pc = 0x2dd3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2dd3bc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2dd3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2dd3c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD3C0u;
    {
        const bool branch_taken_0x2dd3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3C0u;
        // 0x2dd3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3c0) {
            ctx->pc = 0x2DD3D0u;
            goto label_2dd3d0;
        }
    }
    ctx->pc = 0x2DD3C8u;
    // 0x2dd3c8: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2DD3C8u;
    SET_GPR_U32(ctx, 31, 0x2DD3D0u);
    ctx->pc = 0x2DD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3C8u;
    // 0x2dd3cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2DD3C8u, 0x2DD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3D0u;
label_2dd3d0:
    // 0x2dd3d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dd3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd3d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd3d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd3d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd3dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3E0u;
        // 0x2dd3e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD3E8u;
}
