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

// Function: sub_00384060
// Address: 0x384060 - 0x3841d0
void sub_00384060_0x384060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384060_0x384060");
#endif

    switch (ctx->pc) {
        case 0x3840f4u: goto label_3840f4;
        case 0x3840fcu: goto label_3840fc;
        case 0x384174u: goto label_384174;
        case 0x384194u: goto label_384194;
        case 0x3841acu: goto label_3841ac;
        case 0x3841bcu: goto label_3841bc;
        default: break;
    }

    ctx->pc = 0x384060u;

    // 0x384060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x384068: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x384068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38406c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x38406cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x384070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384074: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x384074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x384078: 0x10640049  beq         $v1, $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x384078u;
    {
        const bool branch_taken_0x384078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x384078) {
            ctx->pc = 0x3841A0u;
            goto label_3841a0;
        }
    }
    ctx->pc = 0x384080u;
    // 0x384080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384080u;
    {
        const bool branch_taken_0x384080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384080) {
            ctx->pc = 0x384090u;
            goto label_384090;
        }
    }
    ctx->pc = 0x384088u;
    // 0x384088: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x384088u;
    {
        const bool branch_taken_0x384088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384088) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x384090u;
label_384090:
    // 0x384090: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x384090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x384094: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x384094u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x384098: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x384098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x38409c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x38409Cu;
    {
        const bool branch_taken_0x38409c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3840A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38409Cu;
        // 0x3840a0: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38409c) {
            ctx->pc = 0x384108u;
            goto label_384108;
        }
    }
    ctx->pc = 0x3840A4u;
    // 0x3840a4: 0x90223451  lbu         $v0, 0x3451($at)
    ctx->pc = 0x3840a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 13393)));
    // 0x3840a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3840A8u;
    {
        const bool branch_taken_0x3840a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3840ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840A8u;
        // 0x3840ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840a8) {
            ctx->pc = 0x3840B8u;
            goto label_3840b8;
        }
    }
    ctx->pc = 0x3840B0u;
    // 0x3840b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3840B0u;
    {
        const bool branch_taken_0x3840b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3840B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840B0u;
        // 0x3840b4: 0xa202002a  sb          $v0, 0x2A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840b0) {
            ctx->pc = 0x3840C0u;
            goto label_3840c0;
        }
    }
    ctx->pc = 0x3840B8u;
label_3840b8:
    // 0x3840b8: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x3840b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x3840bc: 0x0  nop
    ctx->pc = 0x3840bcu;
    // NOP
label_3840c0:
    // 0x3840c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3840c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3840c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3840c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3840c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3840c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3840cc: 0x3c020107  lui         $v0, 0x107
    ctx->pc = 0x3840ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)263 << 16));
    // 0x3840d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3840d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3840d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3840d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840d8: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x3840d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x3840dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3840dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3840e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3840e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3840e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840ec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3840ECu;
    SET_GPR_U32(ctx, 31, 0x3840F4u);
    ctx->pc = 0x3840F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840ECu;
    // 0x3840f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3840ECu, 0x3840F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3840F4u;
label_3840f4:
    // 0x3840f4: 0xc0e114c  jal         func_384530
    ctx->pc = 0x3840F4u;
    SET_GPR_U32(ctx, 31, 0x3840FCu);
    ctx->pc = 0x3840F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840F4u;
    // 0x3840f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384530u, 0x3840F4u, 0x3840FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3840FCu;
label_3840fc:
    // 0x3840fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3840FCu;
    {
        const bool branch_taken_0x3840fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3840fc) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x384104u;
    // 0x384104: 0x0  nop
    ctx->pc = 0x384104u;
    // NOP
label_384108:
    // 0x384108: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x384108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x38410c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x384110: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x384110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x384114: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x384114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x384118: 0x2c610781  sltiu       $at, $v1, 0x781
    ctx->pc = 0x384118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1921) ? 1 : 0);
    // 0x38411c: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x38411Cu;
    {
        const bool branch_taken_0x38411c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38411c) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x384124u;
    // 0x384124: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x384124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x384128: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x384128u;
    {
        const bool branch_taken_0x384128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x384128) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x384130u;
    // 0x384130: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x384130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x384134: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x384134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x384138: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x384138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x38413c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x38413cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384140: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x384140u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384144: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x384144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x384148: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x384148u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38414c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x38414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x384150: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x384150u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38415c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38415cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384160: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x384160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384164: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x384164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x384168: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x384168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x38416c: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x38416Cu;
    SET_GPR_U32(ctx, 31, 0x384174u);
    ctx->pc = 0x384170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38416Cu;
    // 0x384170: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x38416Cu, 0x384174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384174u;
label_384174:
    // 0x384174: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x384174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x384178: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x384178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x38417c: 0xac2040b4  sw          $zero, 0x40B4($at)
    ctx->pc = 0x38417cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x384180: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x384180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x384184: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x384184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x384188: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x384188u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x38418c: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x38418Cu;
    SET_GPR_U32(ctx, 31, 0x384194u);
    ctx->pc = 0x384190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38418Cu;
    // 0x384190: 0x2406fffb  addiu       $a2, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x38418Cu, 0x384194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384194u;
label_384194:
    // 0x384194: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x384194u;
    {
        const bool branch_taken_0x384194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384194) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x38419Cu;
    // 0x38419c: 0x0  nop
    ctx->pc = 0x38419cu;
    // NOP
label_3841a0:
    // 0x3841a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3841a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3841a4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3841A4u;
    SET_GPR_U32(ctx, 31, 0x3841ACu);
    ctx->pc = 0x3841A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3841A4u;
    // 0x3841a8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3841A4u, 0x3841ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3841ACu;
label_3841ac:
    // 0x3841ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3841ACu;
    {
        const bool branch_taken_0x3841ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3841B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841ACu;
        // 0x3841b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3841ac) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x3841B4u;
    // 0x3841b4: 0xc0ca4fc  jal         func_3293F0
    ctx->pc = 0x3841B4u;
    SET_GPR_U32(ctx, 31, 0x3841BCu);
    ctx->pc = 0x3841B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3841B4u;
    // 0x3841b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3293F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3293F0u, 0x3841B4u, 0x3841BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3841BCu;
label_3841bc:
    // 0x3841bc: 0x0  nop
    ctx->pc = 0x3841bcu;
    // NOP
label_3841c0:
    // 0x3841c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3841c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3841c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3841c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3841c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3841C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3841CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841C8u;
        // 0x3841cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3841C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3841D0u;
}
