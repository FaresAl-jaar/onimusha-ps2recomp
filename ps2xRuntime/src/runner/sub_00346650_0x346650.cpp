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

// Function: sub_00346650
// Address: 0x346650 - 0x346744
void sub_00346650_0x346650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346650_0x346650");
#endif

    switch (ctx->pc) {
        case 0x346650u: goto label_346650;
        case 0x346654u: goto label_346654;
        case 0x346658u: goto label_346658;
        case 0x34665cu: goto label_34665c;
        case 0x346660u: goto label_346660;
        case 0x346664u: goto label_346664;
        case 0x346668u: goto label_346668;
        case 0x34666cu: goto label_34666c;
        case 0x346670u: goto label_346670;
        case 0x346674u: goto label_346674;
        case 0x346678u: goto label_346678;
        case 0x34667cu: goto label_34667c;
        case 0x346680u: goto label_346680;
        case 0x346684u: goto label_346684;
        case 0x346688u: goto label_346688;
        case 0x34668cu: goto label_34668c;
        case 0x346690u: goto label_346690;
        case 0x346694u: goto label_346694;
        case 0x346698u: goto label_346698;
        case 0x34669cu: goto label_34669c;
        case 0x3466a0u: goto label_3466a0;
        case 0x3466a4u: goto label_3466a4;
        case 0x3466a8u: goto label_3466a8;
        case 0x3466acu: goto label_3466ac;
        case 0x3466b0u: goto label_3466b0;
        case 0x3466b4u: goto label_3466b4;
        case 0x3466b8u: goto label_3466b8;
        case 0x3466bcu: goto label_3466bc;
        case 0x3466c0u: goto label_3466c0;
        case 0x3466c4u: goto label_3466c4;
        case 0x3466c8u: goto label_3466c8;
        case 0x3466ccu: goto label_3466cc;
        case 0x3466d0u: goto label_3466d0;
        case 0x3466d4u: goto label_3466d4;
        case 0x3466d8u: goto label_3466d8;
        case 0x3466dcu: goto label_3466dc;
        case 0x3466e0u: goto label_3466e0;
        case 0x3466e4u: goto label_3466e4;
        case 0x3466e8u: goto label_3466e8;
        case 0x3466ecu: goto label_3466ec;
        case 0x3466f0u: goto label_3466f0;
        case 0x3466f4u: goto label_3466f4;
        case 0x3466f8u: goto label_3466f8;
        case 0x3466fcu: goto label_3466fc;
        case 0x346700u: goto label_346700;
        case 0x346704u: goto label_346704;
        case 0x346708u: goto label_346708;
        case 0x34670cu: goto label_34670c;
        case 0x346710u: goto label_346710;
        case 0x346714u: goto label_346714;
        case 0x346718u: goto label_346718;
        case 0x34671cu: goto label_34671c;
        case 0x346720u: goto label_346720;
        case 0x346724u: goto label_346724;
        case 0x346728u: goto label_346728;
        case 0x34672cu: goto label_34672c;
        case 0x346730u: goto label_346730;
        case 0x346734u: goto label_346734;
        case 0x346738u: goto label_346738;
        case 0x34673cu: goto label_34673c;
        case 0x346740u: goto label_346740;
        default: break;
    }

    ctx->pc = 0x346650u;

label_346650:
    // 0x346650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_346654:
    // 0x346654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x346654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_346658:
    // 0x346658: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x346658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34665c:
    // 0x34665c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346660:
    // 0x346660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346664:
    // 0x346664: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x346664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346668:
    // 0x346668: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x346668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34666c:
    // 0x34666c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34666cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_346670:
    // 0x346670: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x346670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346674:
    // 0x346674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346678:
    // 0x346678: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x346678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34667c:
    // 0x34667c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x34667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346680:
    // 0x346680: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x346680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_346684:
    // 0x346684: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x346684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_346688:
    // 0x346688: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_34668c:
    // 0x34668c: 0xc0a4408  jal         func_291020
label_346690:
    if (ctx->pc == 0x346690u) {
        ctx->pc = 0x346690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34668Cu;
        // 0x346690: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346694u;
        goto label_346694;
    }
    ctx->pc = 0x34668Cu;
    SET_GPR_U32(ctx, 31, 0x346694u);
    ctx->pc = 0x346690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34668Cu;
    // 0x346690: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x34668Cu, 0x346694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346694u;
label_346694:
    // 0x346694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346698:
    // 0x346698: 0xc0a43fc  jal         func_290FF0
label_34669c:
    if (ctx->pc == 0x34669Cu) {
        ctx->pc = 0x34669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346698u;
        // 0x34669c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3466A0u;
        goto label_3466a0;
    }
    ctx->pc = 0x346698u;
    SET_GPR_U32(ctx, 31, 0x3466A0u);
    ctx->pc = 0x34669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346698u;
    // 0x34669c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x346698u, 0x3466A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3466A0u;
label_3466a0:
    // 0x3466a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3466a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3466a4:
    // 0x3466a4: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3466a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3466a8:
    // 0x3466a8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3466a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3466ac:
    // 0x3466ac: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3466acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3466b0:
    // 0x3466b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3466b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3466b4:
    // 0x3466b4: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3466b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3466b8:
    // 0x3466b8: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3466b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3466bc:
    // 0x3466bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3466bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3466c0:
    // 0x3466c0: 0xc0510e0  jal         func_144380
label_3466c4:
    if (ctx->pc == 0x3466C4u) {
        ctx->pc = 0x3466C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3466C0u;
        // 0x3466c4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3466C8u;
        goto label_3466c8;
    }
    ctx->pc = 0x3466C0u;
    SET_GPR_U32(ctx, 31, 0x3466C8u);
    ctx->pc = 0x3466C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3466C0u;
    // 0x3466c4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3466C0u, 0x3466C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3466C8u;
label_3466c8:
    // 0x3466c8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3466c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3466cc:
    // 0x3466cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3466ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3466d0:
    // 0x3466d0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3466d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3466d4:
    // 0x3466d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3466d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3466d8:
    // 0x3466d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3466d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3466dc:
    // 0x3466dc: 0x24050215  addiu       $a1, $zero, 0x215
    ctx->pc = 0x3466dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
label_3466e0:
    // 0x3466e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3466e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3466e4:
    // 0x3466e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3466e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3466e8:
    // 0x3466e8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3466e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3466ec:
    // 0x3466ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3466ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3466f0:
    // 0x3466f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3466f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3466f4:
    // 0x3466f4: 0x0  nop
    ctx->pc = 0x3466f4u;
    // NOP
label_3466f8:
    // 0x3466f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3466f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3466fc:
    // 0x3466fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3466fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_346700:
    // 0x346700: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_346704:
    // 0x346704: 0x0  nop
    ctx->pc = 0x346704u;
    // NOP
label_346708:
    // 0x346708: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x346708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_34670c:
    // 0x34670c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34670cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_346710:
    // 0x346710: 0xc0d0484  jal         func_341210
label_346714:
    if (ctx->pc == 0x346714u) {
        ctx->pc = 0x346714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346710u;
        // 0x346714: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346718u;
        goto label_346718;
    }
    ctx->pc = 0x346710u;
    SET_GPR_U32(ctx, 31, 0x346718u);
    ctx->pc = 0x346714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346710u;
    // 0x346714: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x346710u, 0x346718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346718u;
label_346718:
    // 0x346718: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x346718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_34671c:
    // 0x34671c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x34671cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_346720:
    // 0x346720: 0x320f809  jalr        $t9
label_346724:
    if (ctx->pc == 0x346724u) {
        ctx->pc = 0x346724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346720u;
        // 0x346724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346728u;
        goto label_346728;
    }
    ctx->pc = 0x346720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346728u);
        ctx->pc = 0x346724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346720u;
        // 0x346724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346720u, 0x346728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346728u;
label_346728:
    // 0x346728: 0xc0e342c  jal         func_38D0B0
label_34672c:
    if (ctx->pc == 0x34672Cu) {
        ctx->pc = 0x34672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346728u;
        // 0x34672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346730u;
        goto label_346730;
    }
    ctx->pc = 0x346728u;
    SET_GPR_U32(ctx, 31, 0x346730u);
    ctx->pc = 0x34672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346728u;
    // 0x34672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D0B0u, 0x346728u, 0x346730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346730u;
label_346730:
    // 0x346730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x346730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_346734:
    // 0x346734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346738:
    // 0x346738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34673c:
    // 0x34673c: 0x3e00008  jr          $ra
label_346740:
    if (ctx->pc == 0x346740u) {
        ctx->pc = 0x346740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34673Cu;
        // 0x346740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346744u;
        goto label_fallthrough_0x34673c;
    }
    ctx->pc = 0x34673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34673Cu;
        // 0x346740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34673Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34673c:
    ctx->pc = 0x346744u;
}
