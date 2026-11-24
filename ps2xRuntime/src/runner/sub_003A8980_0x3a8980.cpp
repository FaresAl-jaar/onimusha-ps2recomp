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

// Function: sub_003A8980
// Address: 0x3a8980 - 0x3a8ab0
void sub_003A8980_0x3a8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8980_0x3a8980");
#endif

    switch (ctx->pc) {
        case 0x3a8a44u: goto label_3a8a44;
        case 0x3a8a78u: goto label_3a8a78;
        case 0x3a8a9cu: goto label_3a8a9c;
        default: break;
    }

    ctx->pc = 0x3a8980u;

    // 0x3a8980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a8984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a8984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a8988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a8988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a898c: 0x83828c70  lb          $v0, -0x7390($gp)
    ctx->pc = 0x3a898cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937712)));
    // 0x3a8990: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A8990u;
    {
        const bool branch_taken_0x3a8990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8990u;
        // 0x3a8994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8990) {
            ctx->pc = 0x3A8A10u;
            goto label_3a8a10;
        }
    }
    ctx->pc = 0x3A8998u;
    // 0x3a8998: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a899c: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x3a899cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x3a89a0: 0x2442dc28  addiu       $v0, $v0, -0x23D8
    ctx->pc = 0x3a89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958120));
    // 0x3a89a4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3a89a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3a89a8: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x3a89a8u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x65DC28u));
    // 0x3a89ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a89acu;
    { uint32_t bits = FAST_READ32(0x65DC30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a89b0: 0x2508fcd0  addiu       $t0, $t0, -0x330
    ctx->pc = 0x3a89b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966480));
    // 0x3a89b4: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3a89b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3a89b8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3a89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3a89bc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a89c0: 0x24c6dc38  addiu       $a2, $a2, -0x23C8
    ctx->pc = 0x3a89c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958136));
    // 0x3a89c4: 0x24a5fcdc  addiu       $a1, $a1, -0x324
    ctx->pc = 0x3a89c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966492));
    // 0x3a89c8: 0x2484dc48  addiu       $a0, $a0, -0x23B8
    ctx->pc = 0x3a89c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958152));
    // 0x3a89cc: 0x2463fce8  addiu       $v1, $v1, -0x318
    ctx->pc = 0x3a89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966504));
    // 0x3a89d0: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x3a89d0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x92FCD0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x92FCD0u, _value); } while (0);
    // 0x3a89d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a89d8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x3a89d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCD8u, _value); } while (0); }
    // 0x3a89dc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3a89dcu;
    { uint32_t bits = FAST_READ32(0x65DC38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a89e0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3a89e0u;
    { uint32_t bits = FAST_READ32(0x65DC3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a89e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3a89e4u;
    { uint32_t bits = FAST_READ32(0x65DC40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a89e8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x3a89e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCDCu, _value); } while (0); }
    // 0x3a89ec: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x3a89ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCE0u, _value); } while (0); }
    // 0x3a89f0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3a89f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCE4u, _value); } while (0); }
    // 0x3a89f4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3a89f4u;
    { uint32_t bits = FAST_READ32(0x65DC48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a89f8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3a89f8u;
    { uint32_t bits = FAST_READ32(0x65DC4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a89fc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3a89fcu;
    { uint32_t bits = FAST_READ32(0x65DC50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a8a00: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3a8a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCE8u, _value); } while (0); }
    // 0x3a8a04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3a8a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCECu, _value); } while (0); }
    // 0x3a8a08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3a8a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FCF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FCF0u, _value); } while (0); }
    // 0x3a8a0c: 0xa3828c70  sb          $v0, -0x7390($gp)
    ctx->pc = 0x3a8a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937712), (uint8_t)GPR_U32(ctx, 2));
label_3a8a10:
    // 0x3a8a10: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a8a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a8a14: 0x8c238e98  lw          $v1, -0x7168($at)
    ctx->pc = 0x3a8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B8E98u));
    // 0x3a8a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8a1c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8A1Cu;
    {
        const bool branch_taken_0x3a8a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a8a1c) {
            ctx->pc = 0x3A8A48u;
            goto label_3a8a48;
        }
    }
    ctx->pc = 0x3A8A24u;
    // 0x3a8a24: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x3a8a24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3a8a28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8A28u;
    {
        const bool branch_taken_0x3a8a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a28) {
            ctx->pc = 0x3A8A48u;
            goto label_3a8a48;
        }
    }
    ctx->pc = 0x3A8A30u;
    // 0x3a8a30: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a8a30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a8a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a3c: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A8A3Cu;
    SET_GPR_U32(ctx, 31, 0x3A8A44u);
    ctx->pc = 0x3A8A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A3Cu;
    // 0x3a8a40: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A8A3Cu, 0x3A8A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A44u;
label_3a8a44:
    // 0x3a8a44: 0x0  nop
    ctx->pc = 0x3a8a44u;
    // NOP
label_3a8a48:
    // 0x3a8a48: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a8a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a8a4c: 0x8c228f0c  lw          $v0, -0x70F4($at)
    ctx->pc = 0x3a8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B8F0Cu));
    // 0x3a8a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8a54: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8A54u;
    {
        const bool branch_taken_0x3a8a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3a8a54) {
            ctx->pc = 0x3A8A78u;
            goto label_3a8a78;
        }
    }
    ctx->pc = 0x3A8A5Cu;
    // 0x3a8a5c: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x3a8a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3a8a60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8A60u;
    {
        const bool branch_taken_0x3a8a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a60) {
            ctx->pc = 0x3A8A78u;
            goto label_3a8a78;
        }
    }
    ctx->pc = 0x3A8A68u;
    // 0x3a8a68: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a70: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A8A70u;
    SET_GPR_U32(ctx, 31, 0x3A8A78u);
    ctx->pc = 0x3A8A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A70u;
    // 0x3a8a74: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A8A70u, 0x3A8A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A78u;
label_3a8a78:
    // 0x3a8a78: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x3a8a78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a8a7c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3a8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3a8a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a84: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x3a8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
    // 0x3a8a88: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3a8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a8a8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a8a90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a8a94: 0xc040250  jal         func_100940
    ctx->pc = 0x3A8A94u;
    SET_GPR_U32(ctx, 31, 0x3A8A9Cu);
    ctx->pc = 0x3A8A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A94u;
    // 0x3a8a98: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x3A8A94u, 0x3A8A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A9Cu;
label_3a8a9c:
    // 0x3a8a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a8a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a8aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a8aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AA8u;
        // 0x3a8aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8AB0u;
}
