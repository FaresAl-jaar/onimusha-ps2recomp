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

// Function: sub_003028C0
// Address: 0x3028c0 - 0x302a64
void sub_003028C0_0x3028c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003028C0_0x3028c0");
#endif

    switch (ctx->pc) {
        case 0x302908u: goto label_302908;
        case 0x302934u: goto label_302934;
        case 0x302944u: goto label_302944;
        case 0x302964u: goto label_302964;
        case 0x302970u: goto label_302970;
        case 0x302990u: goto label_302990;
        case 0x3029a0u: goto label_3029a0;
        case 0x3029d8u: goto label_3029d8;
        case 0x302a00u: goto label_302a00;
        case 0x302a30u: goto label_302a30;
        case 0x302a48u: goto label_302a48;
        default: break;
    }

    ctx->pc = 0x3028c0u;

    // 0x3028c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3028c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3028c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3028c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3028c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3028c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3028cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3028ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3028d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3028d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3028d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3028d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3028d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3028dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3028e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3028e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028e4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x3028e8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3028e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028ec: 0x908305d4  lbu         $v1, 0x5D4($a0)
    ctx->pc = 0x3028ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1492)));
    // 0x3028f0: 0x26660590  addiu       $a2, $s3, 0x590
    ctx->pc = 0x3028f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1424));
    // 0x3028f4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3028f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3028f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3028f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3028fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3028fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302900: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x302900u;
    SET_GPR_U32(ctx, 31, 0x302908u);
    ctx->pc = 0x302904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302900u;
    // 0x302904: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x302900u, 0x302908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302908u;
label_302908:
    // 0x302908: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x302908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30290c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302910: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x302910u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    // 0x302914: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x302914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x302918: 0xc66c05cc  lwc1        $f12, 0x5CC($s3)
    ctx->pc = 0x302918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30291c: 0x926305d4  lbu         $v1, 0x5D4($s3)
    ctx->pc = 0x30291cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1492)));
    // 0x302920: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x302920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x302924: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x302924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x302928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x302928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30292c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x30292Cu;
    SET_GPR_U32(ctx, 31, 0x302934u);
    ctx->pc = 0x302930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30292Cu;
    // 0x302930: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x30292Cu, 0x302934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302934u;
label_302934:
    // 0x302934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30293c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x30293Cu;
    SET_GPR_U32(ctx, 31, 0x302944u);
    ctx->pc = 0x302940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30293Cu;
    // 0x302940: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x30293Cu, 0x302944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302944u;
label_302944:
    // 0x302944: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x302944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302948: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x302948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30294c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x302950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302954: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x302954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302958: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x302958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30295c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x30295Cu;
    SET_GPR_U32(ctx, 31, 0x302964u);
    ctx->pc = 0x302960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30295Cu;
    // 0x302960: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x30295Cu, 0x302964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302964u;
label_302964:
    // 0x302964: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x302964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x302968: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x302968u;
    SET_GPR_U32(ctx, 31, 0x302970u);
    ctx->pc = 0x30296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302968u;
    // 0x30296c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x302968u, 0x302970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302970u;
label_302970:
    // 0x302970: 0x926205d6  lbu         $v0, 0x5D6($s3)
    ctx->pc = 0x302970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1494)));
    // 0x302974: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x302974u;
    {
        const bool branch_taken_0x302974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302974u;
        // 0x302978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302974) {
            ctx->pc = 0x3029C8u;
            goto label_3029c8;
        }
    }
    ctx->pc = 0x30297Cu;
    // 0x30297c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30297cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302980: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x302980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x302984: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x302984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x302988: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x302988u;
    SET_GPR_U32(ctx, 31, 0x302990u);
    ctx->pc = 0x30298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302988u;
    // 0x30298c: 0x27a80098  addiu       $t0, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x302988u, 0x302990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302990u;
label_302990:
    // 0x302990: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302990u;
    {
        const bool branch_taken_0x302990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302990u;
        // 0x302994: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302990) {
            ctx->pc = 0x3029C8u;
            goto label_3029c8;
        }
    }
    ctx->pc = 0x302998u;
    // 0x302998: 0xc076654  jal         func_1D9950
    ctx->pc = 0x302998u;
    SET_GPR_U32(ctx, 31, 0x3029A0u);
    ctx->pc = 0x30299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302998u;
    // 0x30299c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x302998u, 0x3029A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3029A0u;
label_3029a0:
    // 0x3029a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3029a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3029a4: 0x0  nop
    ctx->pc = 0x3029a4u;
    // NOP
    // 0x3029a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3029a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3029ACu;
    {
        const bool branch_taken_0x3029ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3029ac) {
            ctx->pc = 0x3029C8u;
            goto label_3029c8;
        }
    }
    ctx->pc = 0x3029B4u;
    // 0x3029b4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3029b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3029b8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3029b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3029bc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3029bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3029c0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3029c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3029c4: 0x0  nop
    ctx->pc = 0x3029c4u;
    // NOP
label_3029c8:
    // 0x3029c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3029c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029cc: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x3029ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x3029d0: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3029D0u;
    SET_GPR_U32(ctx, 31, 0x3029D8u);
    ctx->pc = 0x3029D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029D0u;
    // 0x3029d4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3029D0u, 0x3029D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3029D8u;
label_3029d8:
    // 0x3029d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3029D8u;
    {
        const bool branch_taken_0x3029d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3029d8) {
            ctx->pc = 0x3029F0u;
            goto label_3029f0;
        }
    }
    ctx->pc = 0x3029E0u;
    // 0x3029e0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x3029e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3029e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3029E4u;
    {
        const bool branch_taken_0x3029e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3029E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029E4u;
        // 0x3029e8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029e4) {
            ctx->pc = 0x302A20u;
            goto label_302a20;
        }
    }
    ctx->pc = 0x3029ECu;
    // 0x3029ec: 0x0  nop
    ctx->pc = 0x3029ecu;
    // NOP
label_3029f0:
    // 0x3029f0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3029f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3029f4: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x3029f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x3029f8: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3029F8u;
    SET_GPR_U32(ctx, 31, 0x302A00u);
    ctx->pc = 0x3029FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029F8u;
    // 0x3029fc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3029F8u, 0x302A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A00u;
label_302a00:
    // 0x302a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302A00u;
    {
        const bool branch_taken_0x302a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302a00) {
            ctx->pc = 0x302A18u;
            goto label_302a18;
        }
    }
    ctx->pc = 0x302A08u;
    // 0x302a08: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x302a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302A0Cu;
    {
        const bool branch_taken_0x302a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A0Cu;
        // 0x302a10: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a0c) {
            ctx->pc = 0x302A20u;
            goto label_302a20;
        }
    }
    ctx->pc = 0x302A14u;
    // 0x302a14: 0x0  nop
    ctx->pc = 0x302a14u;
    // NOP
label_302a18:
    // 0x302a18: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x302a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a1c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x302a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_302a20:
    // 0x302a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a24: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x302a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x302a28: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x302A28u;
    SET_GPR_U32(ctx, 31, 0x302A30u);
    ctx->pc = 0x302A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A28u;
    // 0x302a2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x302A28u, 0x302A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A30u;
label_302a30:
    // 0x302a30: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x302a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x302a34: 0x26640550  addiu       $a0, $s3, 0x550
    ctx->pc = 0x302a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x302a38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a3c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x302a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x302a40: 0xc097384  jal         func_25CE10
    ctx->pc = 0x302A40u;
    SET_GPR_U32(ctx, 31, 0x302A48u);
    ctx->pc = 0x302A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A40u;
    // 0x302a44: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x302A40u, 0x302A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A48u;
label_302a48:
    // 0x302a48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302a4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x302a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302a50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x302a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302a54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x302A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A5Cu;
        // 0x302a60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302A64u;
}
