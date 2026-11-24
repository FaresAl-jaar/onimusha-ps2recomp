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

// Function: sub_00151680
// Address: 0x151680 - 0x15189c
void sub_00151680_0x151680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151680_0x151680");
#endif

    switch (ctx->pc) {
        case 0x1516acu: goto label_1516ac;
        case 0x1516c0u: goto label_1516c0;
        case 0x1516d4u: goto label_1516d4;
        case 0x1516e8u: goto label_1516e8;
        case 0x1516fcu: goto label_1516fc;
        case 0x151710u: goto label_151710;
        case 0x151724u: goto label_151724;
        case 0x151738u: goto label_151738;
        case 0x15174cu: goto label_15174c;
        case 0x151760u: goto label_151760;
        case 0x151774u: goto label_151774;
        case 0x151780u: goto label_151780;
        case 0x15178cu: goto label_15178c;
        case 0x151798u: goto label_151798;
        case 0x1517a4u: goto label_1517a4;
        case 0x1517b0u: goto label_1517b0;
        case 0x1517bcu: goto label_1517bc;
        case 0x1517c8u: goto label_1517c8;
        case 0x1517d4u: goto label_1517d4;
        case 0x1517e0u: goto label_1517e0;
        case 0x1517ecu: goto label_1517ec;
        case 0x1517f8u: goto label_1517f8;
        case 0x151804u: goto label_151804;
        case 0x151810u: goto label_151810;
        case 0x15181cu: goto label_15181c;
        case 0x151828u: goto label_151828;
        case 0x151834u: goto label_151834;
        case 0x151840u: goto label_151840;
        case 0x15184cu: goto label_15184c;
        case 0x151858u: goto label_151858;
        case 0x151878u: goto label_151878;
        case 0x151880u: goto label_151880;
        default: break;
    }

    ctx->pc = 0x151680u;

    // 0x151680: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x151680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x151684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15168c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151694: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x151694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151698: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x151698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15169c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15169cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1516a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1516a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1516a4: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x1516A4u;
    SET_GPR_U32(ctx, 31, 0x1516ACu);
    ctx->pc = 0x1516A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516A4u;
    // 0x1516a8: 0x24a54be0  addiu       $a1, $a1, 0x4BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x1516A4u, 0x1516ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516ACu;
label_1516ac:
    // 0x1516ac: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1516b0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1516b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1516b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1516b8: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x1516B8u;
    SET_GPR_U32(ctx, 31, 0x1516C0u);
    ctx->pc = 0x1516BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516B8u;
    // 0x1516bc: 0x24a54be0  addiu       $a1, $a1, 0x4BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x1516B8u, 0x1516C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516C0u;
label_1516c0:
    // 0x1516c0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1516c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1516c4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1516c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1516c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1516c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1516cc: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x1516CCu;
    SET_GPR_U32(ctx, 31, 0x1516D4u);
    ctx->pc = 0x1516D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516CCu;
    // 0x1516d0: 0x24a54be0  addiu       $a1, $a1, 0x4BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x1516CCu, 0x1516D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516D4u;
label_1516d4:
    // 0x1516d4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1516d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1516d8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1516d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1516dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1516e0: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x1516E0u;
    SET_GPR_U32(ctx, 31, 0x1516E8u);
    ctx->pc = 0x1516E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516E0u;
    // 0x1516e4: 0x24a54be8  addiu       $a1, $a1, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x1516E0u, 0x1516E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516E8u;
label_1516e8:
    // 0x1516e8: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x1516e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1516ec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1516f0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1516f4: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x1516F4u;
    SET_GPR_U32(ctx, 31, 0x1516FCu);
    ctx->pc = 0x1516F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516F4u;
    // 0x1516f8: 0x24a54be8  addiu       $a1, $a1, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x1516F4u, 0x1516FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516FCu;
label_1516fc:
    // 0x1516fc: 0x96060012  lhu         $a2, 0x12($s0)
    ctx->pc = 0x1516fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x151700: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x151700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x151704: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x151704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x151708: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x151708u;
    SET_GPR_U32(ctx, 31, 0x151710u);
    ctx->pc = 0x15170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151708u;
    // 0x15170c: 0x24a54be8  addiu       $a1, $a1, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x151708u, 0x151710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151710u;
label_151710:
    // 0x151710: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x151710u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x151714: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x151714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x151718: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15171c: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x15171Cu;
    SET_GPR_U32(ctx, 31, 0x151724u);
    ctx->pc = 0x151720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15171Cu;
    // 0x151720: 0x24a54be8  addiu       $a1, $a1, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x15171Cu, 0x151724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151724u;
label_151724:
    // 0x151724: 0x96060016  lhu         $a2, 0x16($s0)
    ctx->pc = 0x151724u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x151728: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x151728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x15172c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151730: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x151730u;
    SET_GPR_U32(ctx, 31, 0x151738u);
    ctx->pc = 0x151734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151730u;
    // 0x151734: 0x24a54be8  addiu       $a1, $a1, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x151730u, 0x151738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151738u;
label_151738:
    // 0x151738: 0x96060018  lhu         $a2, 0x18($s0)
    ctx->pc = 0x151738u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15173c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x15173cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x151740: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x151740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151744: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x151744u;
    SET_GPR_U32(ctx, 31, 0x15174Cu);
    ctx->pc = 0x151748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151744u;
    // 0x151748: 0x24a54be8  addiu       $a1, $a1, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x151744u, 0x15174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15174Cu;
label_15174c:
    // 0x15174c: 0x9606001a  lhu         $a2, 0x1A($s0)
    ctx->pc = 0x15174cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x151750: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x151754: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x151754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151758: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x151758u;
    SET_GPR_U32(ctx, 31, 0x151760u);
    ctx->pc = 0x15175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151758u;
    // 0x15175c: 0x24a54be8  addiu       $a1, $a1, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x151758u, 0x151760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151760u;
label_151760:
    // 0x151760: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x151760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x151764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151768: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x151768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15176c: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x15176Cu;
    SET_GPR_U32(ctx, 31, 0x151774u);
    ctx->pc = 0x151770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15176Cu;
    // 0x151770: 0xa7828598  sh          $v0, -0x7A68($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935960), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x15176Cu, 0x151774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151774u;
label_151774:
    // 0x151774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151778: 0xc049e1c  jal         func_127870
    ctx->pc = 0x151778u;
    SET_GPR_U32(ctx, 31, 0x151780u);
    ctx->pc = 0x15177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151778u;
    // 0x15177c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x151778u, 0x151780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151780u;
label_151780:
    // 0x151780: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x151780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151784: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x151784u;
    SET_GPR_U32(ctx, 31, 0x15178Cu);
    ctx->pc = 0x151788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151784u;
    // 0x151788: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x151784u, 0x15178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15178Cu;
label_15178c:
    // 0x15178c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151790: 0xc049e1c  jal         func_127870
    ctx->pc = 0x151790u;
    SET_GPR_U32(ctx, 31, 0x151798u);
    ctx->pc = 0x151794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151790u;
    // 0x151794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x151790u, 0x151798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151798u;
label_151798:
    // 0x151798: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x151798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15179c: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x15179Cu;
    SET_GPR_U32(ctx, 31, 0x1517A4u);
    ctx->pc = 0x1517A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15179Cu;
    // 0x1517a0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x15179Cu, 0x1517A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517A4u;
label_1517a4:
    // 0x1517a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1517a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517a8: 0xc049e1c  jal         func_127870
    ctx->pc = 0x1517A8u;
    SET_GPR_U32(ctx, 31, 0x1517B0u);
    ctx->pc = 0x1517ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517A8u;
    // 0x1517ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x1517A8u, 0x1517B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517B0u;
label_1517b0:
    // 0x1517b0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517b4: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x1517B4u;
    SET_GPR_U32(ctx, 31, 0x1517BCu);
    ctx->pc = 0x1517B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517B4u;
    // 0x1517b8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x1517B4u, 0x1517BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517BCu;
label_1517bc:
    // 0x1517bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1517bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517c0: 0xc049e1c  jal         func_127870
    ctx->pc = 0x1517C0u;
    SET_GPR_U32(ctx, 31, 0x1517C8u);
    ctx->pc = 0x1517C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517C0u;
    // 0x1517c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x1517C0u, 0x1517C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517C8u;
label_1517c8:
    // 0x1517c8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1517c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517cc: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x1517CCu;
    SET_GPR_U32(ctx, 31, 0x1517D4u);
    ctx->pc = 0x1517D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517CCu;
    // 0x1517d0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x1517CCu, 0x1517D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517D4u;
label_1517d4:
    // 0x1517d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1517d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517d8: 0xc049e1c  jal         func_127870
    ctx->pc = 0x1517D8u;
    SET_GPR_U32(ctx, 31, 0x1517E0u);
    ctx->pc = 0x1517DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517D8u;
    // 0x1517dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x1517D8u, 0x1517E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517E0u;
label_1517e0:
    // 0x1517e0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517e4: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x1517E4u;
    SET_GPR_U32(ctx, 31, 0x1517ECu);
    ctx->pc = 0x1517E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517E4u;
    // 0x1517e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x1517E4u, 0x1517ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517ECu;
label_1517ec:
    // 0x1517ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1517ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517f0: 0xc049e1c  jal         func_127870
    ctx->pc = 0x1517F0u;
    SET_GPR_U32(ctx, 31, 0x1517F8u);
    ctx->pc = 0x1517F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517F0u;
    // 0x1517f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x1517F0u, 0x1517F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517F8u;
label_1517f8:
    // 0x1517f8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1517f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517fc: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x1517FCu;
    SET_GPR_U32(ctx, 31, 0x151804u);
    ctx->pc = 0x151800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517FCu;
    // 0x151800: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x1517FCu, 0x151804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151804u;
label_151804:
    // 0x151804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151808: 0xc049e1c  jal         func_127870
    ctx->pc = 0x151808u;
    SET_GPR_U32(ctx, 31, 0x151810u);
    ctx->pc = 0x15180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151808u;
    // 0x15180c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x151808u, 0x151810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151810u;
label_151810:
    // 0x151810: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151814: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x151814u;
    SET_GPR_U32(ctx, 31, 0x15181Cu);
    ctx->pc = 0x151818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151814u;
    // 0x151818: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x151814u, 0x15181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15181Cu;
label_15181c:
    // 0x15181c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151820: 0xc049e1c  jal         func_127870
    ctx->pc = 0x151820u;
    SET_GPR_U32(ctx, 31, 0x151828u);
    ctx->pc = 0x151824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151820u;
    // 0x151824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x151820u, 0x151828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151828u;
label_151828:
    // 0x151828: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x151828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15182c: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x15182Cu;
    SET_GPR_U32(ctx, 31, 0x151834u);
    ctx->pc = 0x151830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15182Cu;
    // 0x151830: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x15182Cu, 0x151834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151834u;
label_151834:
    // 0x151834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151838: 0xc049e1c  jal         func_127870
    ctx->pc = 0x151838u;
    SET_GPR_U32(ctx, 31, 0x151840u);
    ctx->pc = 0x15183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151838u;
    // 0x15183c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x151838u, 0x151840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151840u;
label_151840:
    // 0x151840: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151844: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x151844u;
    SET_GPR_U32(ctx, 31, 0x15184Cu);
    ctx->pc = 0x151848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151844u;
    // 0x151848: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x151844u, 0x15184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15184Cu;
label_15184c:
    // 0x15184c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151850: 0xc049e1c  jal         func_127870
    ctx->pc = 0x151850u;
    SET_GPR_U32(ctx, 31, 0x151858u);
    ctx->pc = 0x151854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151850u;
    // 0x151854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127870u, 0x151850u, 0x151858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151858u;
label_151858:
    // 0x151858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15185c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x15185cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x151860: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x151860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151864: 0x286200fb  slti        $v0, $v1, 0xFB
    ctx->pc = 0x151864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x151868: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151868u;
    {
        const bool branch_taken_0x151868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151868u;
        // 0x15186c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151868) {
            ctx->pc = 0x151880u;
            goto label_151880;
        }
    }
    ctx->pc = 0x151870u;
    // 0x151870: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151870u;
    SET_GPR_U32(ctx, 31, 0x151878u);
    ctx->pc = 0x151874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151870u;
    // 0x151874: 0x24844bf0  addiu       $a0, $a0, 0x4BF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151870u, 0x151878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151878u;
label_151878:
    // 0x151878: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x151878u;
    {
        const bool branch_taken_0x151878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151878u;
        // 0x15187c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151878) {
            ctx->pc = 0x151880u;
            goto label_151880;
        }
    }
    ctx->pc = 0x151880u;
label_151880:
    // 0x151880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151888: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x151888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15188c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15188cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151890: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x151890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x151894: 0x3e00008  jr          $ra
    ctx->pc = 0x151894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151894u;
        // 0x151898: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15189Cu;
}
