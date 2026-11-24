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

// Function: sub_003A74E0
// Address: 0x3a74e0 - 0x3a7618
void sub_003A74E0_0x3a74e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A74E0_0x3a74e0");
#endif

    switch (ctx->pc) {
        case 0x3a75a4u: goto label_3a75a4;
        case 0x3a75d8u: goto label_3a75d8;
        case 0x3a75fcu: goto label_3a75fc;
        case 0x3a7604u: goto label_3a7604;
        default: break;
    }

    ctx->pc = 0x3a74e0u;

    // 0x3a74e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a74e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a74e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a74ec: 0x83828c6c  lb          $v0, -0x7394($gp)
    ctx->pc = 0x3a74ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x3a74f0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A74F0u;
    {
        const bool branch_taken_0x3a74f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74F0u;
        // 0x3a74f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a74f0) {
            ctx->pc = 0x3A7570u;
            goto label_3a7570;
        }
    }
    ctx->pc = 0x3A74F8u;
    // 0x3a74f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a74fc: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x3a74fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x3a7500: 0x2442dbf8  addiu       $v0, $v0, -0x2408
    ctx->pc = 0x3a7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958072));
    // 0x3a7504: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3a7504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3a7508: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x3a7508u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x65DBF8u));
    // 0x3a750c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a750cu;
    { uint32_t bits = FAST_READ32(0x65DC00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7510: 0x2508fca0  addiu       $t0, $t0, -0x360
    ctx->pc = 0x3a7510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966432));
    // 0x3a7514: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3a7514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3a7518: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3a7518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3a751c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a751cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a7520: 0x24c6dc08  addiu       $a2, $a2, -0x23F8
    ctx->pc = 0x3a7520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958088));
    // 0x3a7524: 0x24a5fcac  addiu       $a1, $a1, -0x354
    ctx->pc = 0x3a7524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966444));
    // 0x3a7528: 0x2484dc18  addiu       $a0, $a0, -0x23E8
    ctx->pc = 0x3a7528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958104));
    // 0x3a752c: 0x2463fcb8  addiu       $v1, $v1, -0x348
    ctx->pc = 0x3a752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966456));
    // 0x3a7530: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x3a7530u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x92FCA0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x92FCA0u, _value); } while (0);
    // 0x3a7534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7538: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x3a7538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCA8u, _value); } while (0); }
    // 0x3a753c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3a753cu;
    { uint32_t bits = FAST_READ32(0x65DC08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7540: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3a7540u;
    { uint32_t bits = FAST_READ32(0x65DC0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a7544: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3a7544u;
    { uint32_t bits = FAST_READ32(0x65DC10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7548: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x3a7548u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCACu, _value); } while (0); }
    // 0x3a754c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x3a754cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCB0u, _value); } while (0); }
    // 0x3a7550: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3a7550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCB4u, _value); } while (0); }
    // 0x3a7554: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3a7554u;
    { uint32_t bits = FAST_READ32(0x65DC18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a7558: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3a7558u;
    { uint32_t bits = FAST_READ32(0x65DC1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a755c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3a755cu;
    { uint32_t bits = FAST_READ32(0x65DC20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7560: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3a7560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCB8u, _value); } while (0); }
    // 0x3a7564: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3a7564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCBCu, _value); } while (0); }
    // 0x3a7568: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3a7568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCC0u, _value); } while (0); }
    // 0x3a756c: 0xa3828c6c  sb          $v0, -0x7394($gp)
    ctx->pc = 0x3a756cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937708), (uint8_t)GPR_U32(ctx, 2));
label_3a7570:
    // 0x3a7570: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a7570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a7574: 0x8c238e98  lw          $v1, -0x7168($at)
    ctx->pc = 0x3a7574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B8E98u));
    // 0x3a7578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a757c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A757Cu;
    {
        const bool branch_taken_0x3a757c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a757c) {
            ctx->pc = 0x3A75A8u;
            goto label_3a75a8;
        }
    }
    ctx->pc = 0x3A7584u;
    // 0x3a7584: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x3a7584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3a7588: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7588u;
    {
        const bool branch_taken_0x3a7588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7588) {
            ctx->pc = 0x3A75A8u;
            goto label_3a75a8;
        }
    }
    ctx->pc = 0x3A7590u;
    // 0x3a7590: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a7590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a7598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a759c: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A759Cu;
    SET_GPR_U32(ctx, 31, 0x3A75A4u);
    ctx->pc = 0x3A75A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A759Cu;
    // 0x3a75a0: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A759Cu, 0x3A75A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75A4u;
label_3a75a4:
    // 0x3a75a4: 0x0  nop
    ctx->pc = 0x3a75a4u;
    // NOP
label_3a75a8:
    // 0x3a75a8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a75a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a75ac: 0x8c228f0c  lw          $v0, -0x70F4($at)
    ctx->pc = 0x3a75acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B8F0Cu));
    // 0x3a75b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a75b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a75b4: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A75B4u;
    {
        const bool branch_taken_0x3a75b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3a75b4) {
            ctx->pc = 0x3A75D8u;
            goto label_3a75d8;
        }
    }
    ctx->pc = 0x3A75BCu;
    // 0x3a75bc: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x3a75bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3a75c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A75C0u;
    {
        const bool branch_taken_0x3a75c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a75c0) {
            ctx->pc = 0x3A75D8u;
            goto label_3a75d8;
        }
    }
    ctx->pc = 0x3A75C8u;
    // 0x3a75c8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a75c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a75cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a75ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75d0: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A75D0u;
    SET_GPR_U32(ctx, 31, 0x3A75D8u);
    ctx->pc = 0x3A75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75D0u;
    // 0x3a75d4: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A75D0u, 0x3A75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75D8u;
label_3a75d8:
    // 0x3a75d8: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x3a75d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a75dc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3a75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3a75e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a75e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75e4: 0x2442fca0  addiu       $v0, $v0, -0x360
    ctx->pc = 0x3a75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966432));
    // 0x3a75e8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3a75e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a75ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a75f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a75f4: 0xc040250  jal         func_100940
    ctx->pc = 0x3A75F4u;
    SET_GPR_U32(ctx, 31, 0x3A75FCu);
    ctx->pc = 0x3A75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75F4u;
    // 0x3a75f8: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x3A75F4u, 0x3A75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75FCu;
label_3a75fc:
    // 0x3a75fc: 0xc0eb4ec  jal         func_3AD3B0
    ctx->pc = 0x3A75FCu;
    SET_GPR_U32(ctx, 31, 0x3A7604u);
    ctx->pc = 0x3A7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75FCu;
    // 0x3a7600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD3B0u, 0x3A75FCu, 0x3A7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7604u;
label_3a7604:
    // 0x3a7604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a7608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a760c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a760cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7610: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7610u;
        // 0x3a7614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7618u;
}
