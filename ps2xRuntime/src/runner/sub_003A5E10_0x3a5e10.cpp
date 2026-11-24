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

// Function: sub_003A5E10
// Address: 0x3a5e10 - 0x3a5f48
void sub_003A5E10_0x3a5e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5E10_0x3a5e10");
#endif

    switch (ctx->pc) {
        case 0x3a5ed4u: goto label_3a5ed4;
        case 0x3a5f08u: goto label_3a5f08;
        case 0x3a5f2cu: goto label_3a5f2c;
        case 0x3a5f34u: goto label_3a5f34;
        default: break;
    }

    ctx->pc = 0x3a5e10u;

    // 0x3a5e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a5e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a5e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a5e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a5e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a5e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a5e1c: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x3a5e1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x3a5e20: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A5E20u;
    {
        const bool branch_taken_0x3a5e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E20u;
        // 0x3a5e24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e20) {
            ctx->pc = 0x3A5EA0u;
            goto label_3a5ea0;
        }
    }
    ctx->pc = 0x3A5E28u;
    // 0x3a5e28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a5e2c: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x3a5e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x3a5e30: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x3a5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x3a5e34: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3a5e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3a5e38: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x3a5e38u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x65DBC8u));
    // 0x3a5e3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a5e3cu;
    { uint32_t bits = FAST_READ32(0x65DBD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5e40: 0x2508fc70  addiu       $t0, $t0, -0x390
    ctx->pc = 0x3a5e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966384));
    // 0x3a5e44: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3a5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3a5e48: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3a5e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3a5e4c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a5e50: 0x24c6dbd8  addiu       $a2, $a2, -0x2428
    ctx->pc = 0x3a5e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958040));
    // 0x3a5e54: 0x24a5fc7c  addiu       $a1, $a1, -0x384
    ctx->pc = 0x3a5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966396));
    // 0x3a5e58: 0x2484dbe8  addiu       $a0, $a0, -0x2418
    ctx->pc = 0x3a5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958056));
    // 0x3a5e5c: 0x2463fc88  addiu       $v1, $v1, -0x378
    ctx->pc = 0x3a5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966408));
    // 0x3a5e60: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x3a5e60u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x92FC70u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x92FC70u, _value); } while (0);
    // 0x3a5e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5e68: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x3a5e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC78u, _value); } while (0); }
    // 0x3a5e6c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3a5e6cu;
    { uint32_t bits = FAST_READ32(0x65DBD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a5e70: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3a5e70u;
    { uint32_t bits = FAST_READ32(0x65DBDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5e74: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3a5e74u;
    { uint32_t bits = FAST_READ32(0x65DBE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5e78: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x3a5e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC7Cu, _value); } while (0); }
    // 0x3a5e7c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x3a5e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC80u, _value); } while (0); }
    // 0x3a5e80: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3a5e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC84u, _value); } while (0); }
    // 0x3a5e84: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3a5e84u;
    { uint32_t bits = FAST_READ32(0x65DBE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a5e88: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3a5e88u;
    { uint32_t bits = FAST_READ32(0x65DBECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a5e8c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3a5e8cu;
    { uint32_t bits = FAST_READ32(0x65DBF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5e90: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3a5e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC88u, _value); } while (0); }
    // 0x3a5e94: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3a5e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC8Cu, _value); } while (0); }
    // 0x3a5e98: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3a5e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC90u, _value); } while (0); }
    // 0x3a5e9c: 0xa3828c68  sb          $v0, -0x7398($gp)
    ctx->pc = 0x3a5e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937704), (uint8_t)GPR_U32(ctx, 2));
label_3a5ea0:
    // 0x3a5ea0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a5ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a5ea4: 0x8c238e98  lw          $v1, -0x7168($at)
    ctx->pc = 0x3a5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B8E98u));
    // 0x3a5ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5eac: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A5EACu;
    {
        const bool branch_taken_0x3a5eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a5eac) {
            ctx->pc = 0x3A5ED8u;
            goto label_3a5ed8;
        }
    }
    ctx->pc = 0x3A5EB4u;
    // 0x3a5eb4: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x3a5eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3a5eb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5EB8u;
    {
        const bool branch_taken_0x3a5eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5eb8) {
            ctx->pc = 0x3A5ED8u;
            goto label_3a5ed8;
        }
    }
    ctx->pc = 0x3A5EC0u;
    // 0x3a5ec0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a5ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ecc: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A5ECCu;
    SET_GPR_U32(ctx, 31, 0x3A5ED4u);
    ctx->pc = 0x3A5ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5ECCu;
    // 0x3a5ed0: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A5ECCu, 0x3A5ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5ED4u;
label_3a5ed4:
    // 0x3a5ed4: 0x0  nop
    ctx->pc = 0x3a5ed4u;
    // NOP
label_3a5ed8:
    // 0x3a5ed8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a5ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a5edc: 0x8c228f0c  lw          $v0, -0x70F4($at)
    ctx->pc = 0x3a5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B8F0Cu));
    // 0x3a5ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a5ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5ee4: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5EE4u;
    {
        const bool branch_taken_0x3a5ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3a5ee4) {
            ctx->pc = 0x3A5F08u;
            goto label_3a5f08;
        }
    }
    ctx->pc = 0x3A5EECu;
    // 0x3a5eec: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x3a5eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3a5ef0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5EF0u;
    {
        const bool branch_taken_0x3a5ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5ef0) {
            ctx->pc = 0x3A5F08u;
            goto label_3a5f08;
        }
    }
    ctx->pc = 0x3A5EF8u;
    // 0x3a5ef8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a5ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f00: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A5F00u;
    SET_GPR_U32(ctx, 31, 0x3A5F08u);
    ctx->pc = 0x3A5F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F00u;
    // 0x3a5f04: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A5F00u, 0x3A5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F08u;
label_3a5f08:
    // 0x3a5f08: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x3a5f08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a5f0c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3a5f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f14: 0x2442fc70  addiu       $v0, $v0, -0x390
    ctx->pc = 0x3a5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966384));
    // 0x3a5f18: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3a5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a5f1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a5f20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5f24: 0xc040250  jal         func_100940
    ctx->pc = 0x3A5F24u;
    SET_GPR_U32(ctx, 31, 0x3A5F2Cu);
    ctx->pc = 0x3A5F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F24u;
    // 0x3a5f28: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x3A5F24u, 0x3A5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F2Cu;
label_3a5f2c:
    // 0x3a5f2c: 0xc0eb4ec  jal         func_3AD3B0
    ctx->pc = 0x3A5F2Cu;
    SET_GPR_U32(ctx, 31, 0x3A5F34u);
    ctx->pc = 0x3A5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F2Cu;
    // 0x3a5f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD3B0u, 0x3A5F2Cu, 0x3A5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F34u;
label_3a5f34:
    // 0x3a5f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a5f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5f40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F40u;
        // 0x3a5f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5F48u;
}
