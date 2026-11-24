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

// Function: sub_001C6650
// Address: 0x1c6650 - 0x1c695c
void sub_001C6650_0x1c6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6650_0x1c6650");
#endif

    switch (ctx->pc) {
        case 0x1c66c0u: goto label_1c66c0;
        case 0x1c66d4u: goto label_1c66d4;
        case 0x1c66e8u: goto label_1c66e8;
        case 0x1c6708u: goto label_1c6708;
        case 0x1c6714u: goto label_1c6714;
        case 0x1c6738u: goto label_1c6738;
        case 0x1c674cu: goto label_1c674c;
        case 0x1c6760u: goto label_1c6760;
        case 0x1c678cu: goto label_1c678c;
        case 0x1c67a0u: goto label_1c67a0;
        case 0x1c67b4u: goto label_1c67b4;
        case 0x1c67c4u: goto label_1c67c4;
        case 0x1c67e8u: goto label_1c67e8;
        case 0x1c67fcu: goto label_1c67fc;
        case 0x1c6808u: goto label_1c6808;
        case 0x1c681cu: goto label_1c681c;
        case 0x1c682cu: goto label_1c682c;
        case 0x1c6854u: goto label_1c6854;
        case 0x1c6868u: goto label_1c6868;
        case 0x1c687cu: goto label_1c687c;
        case 0x1c68acu: goto label_1c68ac;
        case 0x1c68c0u: goto label_1c68c0;
        case 0x1c68d4u: goto label_1c68d4;
        case 0x1c68e8u: goto label_1c68e8;
        case 0x1c6900u: goto label_1c6900;
        case 0x1c6914u: goto label_1c6914;
        case 0x1c692cu: goto label_1c692c;
        case 0x1c6940u: goto label_1c6940;
        default: break;
    }

    ctx->pc = 0x1c6650u;

    // 0x1c6650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c6650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c6654: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c6654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c6658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c6658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c665c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1c665cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1c6660: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c6660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c6664: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x1c6664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
    // 0x1c6668: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c6668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c666c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c666cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c6674: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c6674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6678: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c667c: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1c667cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c6680: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1c6680u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40F6C0u));
    // 0x1c6684: 0x24a5f6d0  addiu       $a1, $a1, -0x930
    ctx->pc = 0x1c6684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964944));
    // 0x1c6688: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1c6688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c668c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c6690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6694: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1c6694u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1c6698: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c6698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c669c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1c669cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40F6D0u));
    // 0x1c66a0: 0x2442f6e0  addiu       $v0, $v0, -0x920
    ctx->pc = 0x1c66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964960));
    // 0x1c66a4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1c66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1c66a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c66a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F6E0u));
    // 0x1c66ac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c66acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c66b0: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x1c66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1c66b4: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1c66b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1c66b8: 0xc041442  jal         func_105108
    ctx->pc = 0x1C66B8u;
    SET_GPR_U32(ctx, 31, 0x1C66C0u);
    ctx->pc = 0x1C66BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66B8u;
    // 0x1c66bc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C66B8u, 0x1C66C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66C0u;
label_1c66c0:
    // 0x1c66c0: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c66c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c66c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c66c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66cc: 0xc041442  jal         func_105108
    ctx->pc = 0x1C66CCu;
    SET_GPR_U32(ctx, 31, 0x1C66D4u);
    ctx->pc = 0x1C66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66CCu;
    // 0x1c66d0: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C66CCu, 0x1C66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66D4u;
label_1c66d4:
    // 0x1c66d4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c66d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c66dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c66dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66e0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C66E0u;
    SET_GPR_U32(ctx, 31, 0x1C66E8u);
    ctx->pc = 0x1C66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66E0u;
    // 0x1c66e4: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C66E0u, 0x1C66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66E8u;
label_1c66e8:
    // 0x1c66e8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c66ec: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c66f0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c66f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c66f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c66f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c66fc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c66fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6700: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6700u;
    SET_GPR_U32(ctx, 31, 0x1C6708u);
    ctx->pc = 0x1C6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6700u;
    // 0x1c6704: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6700u, 0x1C6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6708u;
label_1c6708:
    // 0x1c6708: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c670c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C670Cu;
    SET_GPR_U32(ctx, 31, 0x1C6714u);
    ctx->pc = 0x1C6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C670Cu;
    // 0x1c6710: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C670Cu, 0x1C6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6714u;
label_1c6714:
    // 0x1c6714: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x1c6714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
    // 0x1c6718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c671c: 0x0  nop
    ctx->pc = 0x1c671cu;
    // NOP
    // 0x1c6720: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6724: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6724u;
    {
        const bool branch_taken_0x1c6724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6724u;
        // 0x1c6728: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6724) {
            ctx->pc = 0x1C6768u;
            goto label_1c6768;
        }
    }
    ctx->pc = 0x1C672Cu;
    // 0x1c672c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6730: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6730u;
    SET_GPR_U32(ctx, 31, 0x1C6738u);
    ctx->pc = 0x1C6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6730u;
    // 0x1c6734: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6730u, 0x1C6738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6738u;
label_1c6738:
    // 0x1c6738: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c673c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c673cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6740: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6744: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6744u;
    SET_GPR_U32(ctx, 31, 0x1C674Cu);
    ctx->pc = 0x1C6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6744u;
    // 0x1c6748: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6744u, 0x1C674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C674Cu;
label_1c674c:
    // 0x1c674c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c6750: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c6750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6754: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6758: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6758u;
    SET_GPR_U32(ctx, 31, 0x1C6760u);
    ctx->pc = 0x1C675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6758u;
    // 0x1c675c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6758u, 0x1C6760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6760u;
label_1c6760:
    // 0x1c6760: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6760u;
    {
        const bool branch_taken_0x1c6760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6760) {
            ctx->pc = 0x1C67B8u;
            goto label_1c67b8;
        }
    }
    ctx->pc = 0x1C6768u;
label_1c6768:
    // 0x1c6768: 0x3c02c0d0  lui         $v0, 0xC0D0
    ctx->pc = 0x1c6768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49360 << 16));
    // 0x1c676c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c676cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6770: 0x0  nop
    ctx->pc = 0x1c6770u;
    // NOP
    // 0x1c6774: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6778: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1C6778u;
    {
        const bool branch_taken_0x1c6778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6778u;
        // 0x1c677c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6778) {
            ctx->pc = 0x1C67B8u;
            goto label_1c67b8;
        }
    }
    ctx->pc = 0x1C6780u;
    // 0x1c6780: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c6780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6784: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6784u;
    SET_GPR_U32(ctx, 31, 0x1C678Cu);
    ctx->pc = 0x1C6788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6784u;
    // 0x1c6788: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6784u, 0x1C678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C678Cu;
label_1c678c:
    // 0x1c678c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6790: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c6790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6794: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6798: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6798u;
    SET_GPR_U32(ctx, 31, 0x1C67A0u);
    ctx->pc = 0x1C679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6798u;
    // 0x1c679c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6798u, 0x1C67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67A0u;
label_1c67a0:
    // 0x1c67a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c67a4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c67a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c67a8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c67ac: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C67ACu;
    SET_GPR_U32(ctx, 31, 0x1C67B4u);
    ctx->pc = 0x1C67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67ACu;
    // 0x1c67b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C67ACu, 0x1C67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67B4u;
label_1c67b4:
    // 0x1c67b4: 0x0  nop
    ctx->pc = 0x1c67b4u;
    // NOP
label_1c67b8:
    // 0x1c67b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c67bc: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C67BCu;
    SET_GPR_U32(ctx, 31, 0x1C67C4u);
    ctx->pc = 0x1C67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67BCu;
    // 0x1c67c0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C67BCu, 0x1C67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67C4u;
label_1c67c4:
    // 0x1c67c4: 0x3c02c148  lui         $v0, 0xC148
    ctx->pc = 0x1c67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49480 << 16));
    // 0x1c67c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c67c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c67cc: 0x0  nop
    ctx->pc = 0x1c67ccu;
    // NOP
    // 0x1c67d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c67d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c67d4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1C67D4u;
    {
        const bool branch_taken_0x1c67d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67D4u;
        // 0x1c67d8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67d4) {
            ctx->pc = 0x1C6820u;
            goto label_1c6820;
        }
    }
    ctx->pc = 0x1C67DCu;
    // 0x1c67dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c67e0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C67E0u;
    SET_GPR_U32(ctx, 31, 0x1C67E8u);
    ctx->pc = 0x1C67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67E0u;
    // 0x1c67e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C67E0u, 0x1C67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67E8u;
label_1c67e8:
    // 0x1c67e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c67ec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c67ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c67f0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c67f4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C67F4u;
    SET_GPR_U32(ctx, 31, 0x1C67FCu);
    ctx->pc = 0x1C67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C67F4u;
    // 0x1c67f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C67F4u, 0x1C67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67FCu;
label_1c67fc:
    // 0x1c67fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c67fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c6800: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6800u;
    SET_GPR_U32(ctx, 31, 0x1C6808u);
    ctx->pc = 0x1C6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6800u;
    // 0x1c6804: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6800u, 0x1C6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6808u;
label_1c6808:
    // 0x1c6808: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c6808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c680c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c680cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6810: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6814: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6814u;
    SET_GPR_U32(ctx, 31, 0x1C681Cu);
    ctx->pc = 0x1C6818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6814u;
    // 0x1c6818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6814u, 0x1C681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C681Cu;
label_1c681c:
    // 0x1c681c: 0x0  nop
    ctx->pc = 0x1c681cu;
    // NOP
label_1c6820:
    // 0x1c6820: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c6820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c6824: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6824u;
    SET_GPR_U32(ctx, 31, 0x1C682Cu);
    ctx->pc = 0x1C6828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6824u;
    // 0x1c6828: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6824u, 0x1C682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C682Cu;
label_1c682c:
    // 0x1c682c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c682cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c6830: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c6830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c6834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6838: 0x0  nop
    ctx->pc = 0x1c6838u;
    // NOP
    // 0x1c683c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1c683cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6840: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6840u;
    {
        const bool branch_taken_0x1c6840 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6840u;
        // 0x1c6844: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6840) {
            ctx->pc = 0x1C6888u;
            goto label_1c6888;
        }
    }
    ctx->pc = 0x1C6848u;
    // 0x1c6848: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c6848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c684c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C684Cu;
    SET_GPR_U32(ctx, 31, 0x1C6854u);
    ctx->pc = 0x1C6850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C684Cu;
    // 0x1c6850: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C684Cu, 0x1C6854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6854u;
label_1c6854:
    // 0x1c6854: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6858: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c6858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c685c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c685cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6860: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6860u;
    SET_GPR_U32(ctx, 31, 0x1C6868u);
    ctx->pc = 0x1C6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6860u;
    // 0x1c6864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6860u, 0x1C6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6868u;
label_1c6868:
    // 0x1c6868: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c6868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c686c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6870: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6874: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6874u;
    SET_GPR_U32(ctx, 31, 0x1C687Cu);
    ctx->pc = 0x1C6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6874u;
    // 0x1c6878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6874u, 0x1C687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C687Cu;
label_1c687c:
    // 0x1c687c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C687Cu;
    {
        const bool branch_taken_0x1c687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c687c) {
            ctx->pc = 0x1C68D8u;
            goto label_1c68d8;
        }
    }
    ctx->pc = 0x1C6884u;
    // 0x1c6884: 0x0  nop
    ctx->pc = 0x1c6884u;
    // NOP
label_1c6888:
    // 0x1c6888: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1c6888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
    // 0x1c688c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6890: 0x0  nop
    ctx->pc = 0x1c6890u;
    // NOP
    // 0x1c6894: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c6894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6898: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1C6898u;
    {
        const bool branch_taken_0x1c6898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6898u;
        // 0x1c689c: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6898) {
            ctx->pc = 0x1C68D8u;
            goto label_1c68d8;
        }
    }
    ctx->pc = 0x1C68A0u;
    // 0x1c68a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c68a4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C68A4u;
    SET_GPR_U32(ctx, 31, 0x1C68ACu);
    ctx->pc = 0x1C68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68A4u;
    // 0x1c68a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C68A4u, 0x1C68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68ACu;
label_1c68ac:
    // 0x1c68ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c68b0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c68b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c68b4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c68b8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C68B8u;
    SET_GPR_U32(ctx, 31, 0x1C68C0u);
    ctx->pc = 0x1C68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68B8u;
    // 0x1c68bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C68B8u, 0x1C68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68C0u;
label_1c68c0:
    // 0x1c68c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c68c4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c68c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c68c8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c68cc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C68CCu;
    SET_GPR_U32(ctx, 31, 0x1C68D4u);
    ctx->pc = 0x1C68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68CCu;
    // 0x1c68d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C68CCu, 0x1C68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68D4u;
label_1c68d4:
    // 0x1c68d4: 0x0  nop
    ctx->pc = 0x1c68d4u;
    // NOP
label_1c68d8:
    // 0x1c68d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c68dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c68dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c68e0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C68E0u;
    SET_GPR_U32(ctx, 31, 0x1C68E8u);
    ctx->pc = 0x1C68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68E0u;
    // 0x1c68e4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C68E0u, 0x1C68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68E8u;
label_1c68e8:
    // 0x1c68e8: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x1c68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x1c68ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c68f0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c68f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1c68f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c68f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c68f8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C68F8u;
    SET_GPR_U32(ctx, 31, 0x1C6900u);
    ctx->pc = 0x1C68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68F8u;
    // 0x1c68fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C68F8u, 0x1C6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6900u;
label_1c6900:
    // 0x1c6900: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c6904: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c6904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6908: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c690c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C690Cu;
    SET_GPR_U32(ctx, 31, 0x1C6914u);
    ctx->pc = 0x1C6910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C690Cu;
    // 0x1c6910: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C690Cu, 0x1C6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6914u;
label_1c6914:
    // 0x1c6914: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c6914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c6918: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c6918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c691c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c6920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c6920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6924: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6924u;
    SET_GPR_U32(ctx, 31, 0x1C692Cu);
    ctx->pc = 0x1C6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6924u;
    // 0x1c6928: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6924u, 0x1C692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C692Cu;
label_1c692c:
    // 0x1c692c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c6930: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c6930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c6934: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6938: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6938u;
    SET_GPR_U32(ctx, 31, 0x1C6940u);
    ctx->pc = 0x1C693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6938u;
    // 0x1c693c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6938u, 0x1C6940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6940u;
label_1c6940:
    // 0x1c6940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c6940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6944: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6948: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c6948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c694c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c694cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6950: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6954u;
        // 0x1c6958: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C695Cu;
}
