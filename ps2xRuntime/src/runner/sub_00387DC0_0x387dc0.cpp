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

// Function: sub_00387DC0
// Address: 0x387dc0 - 0x388194
void sub_00387DC0_0x387dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387DC0_0x387dc0");
#endif

    switch (ctx->pc) {
        case 0x387e78u: goto label_387e78;
        case 0x387e90u: goto label_387e90;
        case 0x387e98u: goto label_387e98;
        case 0x387ea8u: goto label_387ea8;
        case 0x387eb0u: goto label_387eb0;
        case 0x387ebcu: goto label_387ebc;
        case 0x387f0cu: goto label_387f0c;
        case 0x387f40u: goto label_387f40;
        case 0x387f48u: goto label_387f48;
        case 0x38802cu: goto label_38802c;
        case 0x388048u: goto label_388048;
        case 0x388058u: goto label_388058;
        case 0x38814cu: goto label_38814c;
        case 0x388154u: goto label_388154;
        case 0x38816cu: goto label_38816c;
        default: break;
    }

    ctx->pc = 0x387dc0u;

    // 0x387dc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x387dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x387dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x387dc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x387dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x387dcc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x387dccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x387dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387dd4: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x387dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x387dd8: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x387dd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x387ddc: 0x102000e8  beqz        $at, . + 4 + (0xE8 << 2)
    ctx->pc = 0x387DDCu;
    {
        const bool branch_taken_0x387ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DDCu;
        // 0x387de0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ddc) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x387DE4u;
    // 0x387de4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x387de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x387de8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x387de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x387dec: 0x24a51f00  addiu       $a1, $a1, 0x1F00
    ctx->pc = 0x387decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    // 0x387df0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x387df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x387df4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x387df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x387df8: 0x600008  jr          $v1
    ctx->pc = 0x387DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x387E00u: goto label_387e00;
            case 0x387E28u: goto label_387e28;
            case 0x387E58u: goto label_387e58;
            case 0x387E70u: goto label_387e70;
            case 0x387FE0u: goto label_387fe0;
            case 0x388118u: goto label_388118;
            case 0x388170u: goto label_388170;
            case 0x388180u: goto label_388180;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387DF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x387E00u;
label_387e00:
    // 0x387e00: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x387e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x387e04: 0x2484c6a8  addiu       $a0, $a0, -0x3958
    ctx->pc = 0x387e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952616));
    // 0x387e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x387e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387e0c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x387e0cu;
    { uint32_t bits = FAST_READ32(0x65C6A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387e10: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x387e10u;
    { uint32_t bits = FAST_READ32(0x65C6ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387e14: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x387e14u;
    { uint32_t bits = FAST_READ32(0x65C6B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x387e18: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x387e18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x387e1c: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x387e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x387e20: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x387e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x387e24: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x387e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_387e28:
    // 0x387e28: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x387e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x387e2c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x387e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x387e30: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x387e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x387e34: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x387e34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x387e38: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x387e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x387e3c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x387e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x387e40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x387e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x387e44: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x387e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x387e48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x387e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387e4c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x387e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x387e50: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x387e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x387e54: 0x0  nop
    ctx->pc = 0x387e54u;
    // NOP
label_387e58:
    // 0x387e58: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x387e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x387e5c: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x387E5Cu;
    {
        const bool branch_taken_0x387e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E5Cu;
        // 0x387e60: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e5c) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x387E64u;
    // 0x387e64: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x387E64u;
    {
        const bool branch_taken_0x387e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E64u;
        // 0x387e68: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e64) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x387E6Cu;
    // 0x387e6c: 0x0  nop
    ctx->pc = 0x387e6cu;
    // NOP
label_387e70:
    // 0x387e70: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x387E70u;
    SET_GPR_U32(ctx, 31, 0x387E78u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x387E70u, 0x387E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E78u;
label_387e78:
    // 0x387e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e7c: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x387e7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x387e80: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x387e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x387e84: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x387e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x387e88: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x387E88u;
    SET_GPR_U32(ctx, 31, 0x387E90u);
    ctx->pc = 0x387E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E88u;
    // 0x387e8c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x387E88u, 0x387E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E90u;
label_387e90:
    // 0x387e90: 0xc0a4768  jal         func_291DA0
    ctx->pc = 0x387E90u;
    SET_GPR_U32(ctx, 31, 0x387E98u);
    ctx->pc = 0x387E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E90u;
    // 0x387e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DA0u, 0x387E90u, 0x387E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E98u;
label_387e98:
    // 0x387e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x387e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387ea0: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x387EA0u;
    SET_GPR_U32(ctx, 31, 0x387EA8u);
    ctx->pc = 0x387EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EA0u;
    // 0x387ea4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x387EA0u, 0x387EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EA8u;
label_387ea8:
    // 0x387ea8: 0xc0e1cf8  jal         func_3873E0
    ctx->pc = 0x387EA8u;
    SET_GPR_U32(ctx, 31, 0x387EB0u);
    ctx->pc = 0x387EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EA8u;
    // 0x387eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873E0u, 0x387EA8u, 0x387EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EB0u;
label_387eb0:
    // 0x387eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387eb4: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x387EB4u;
    SET_GPR_U32(ctx, 31, 0x387EBCu);
    ctx->pc = 0x387EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EB4u;
    // 0x387eb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x387EB4u, 0x387EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EBCu;
label_387ebc:
    // 0x387ebc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387EBCu;
    {
        const bool branch_taken_0x387ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EBCu;
        // 0x387ec0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ebc) {
            ctx->pc = 0x387ED0u;
            goto label_387ed0;
        }
    }
    ctx->pc = 0x387EC4u;
    // 0x387ec4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x387EC4u;
    {
        const bool branch_taken_0x387ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EC4u;
        // 0x387ec8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ec4) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x387ECCu;
    // 0x387ecc: 0x0  nop
    ctx->pc = 0x387eccu;
    // NOP
label_387ed0:
    // 0x387ed0: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x387ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x387ed4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x387ed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x387ed8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x387ED8u;
    {
        const bool branch_taken_0x387ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387ED8u;
        // 0x387edc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ed8) {
            ctx->pc = 0x387EE8u;
            goto label_387ee8;
        }
    }
    ctx->pc = 0x387EE0u;
    // 0x387ee0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x387EE0u;
    {
        const bool branch_taken_0x387ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EE0u;
        // 0x387ee4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ee0) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x387EE8u;
label_387ee8:
    // 0x387ee8: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x387ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x387eec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x387eecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x387ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ef4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x387ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x387ef8: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x387ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x387efc: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x387efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x387f00: 0x25081ef0  addiu       $t0, $t0, 0x1EF0
    ctx->pc = 0x387f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7920));
    // 0x387f04: 0xc0e1d94  jal         func_387650
    ctx->pc = 0x387F04u;
    SET_GPR_U32(ctx, 31, 0x387F0Cu);
    ctx->pc = 0x387F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F04u;
    // 0x387f08: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387650u, 0x387F04u, 0x387F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F0Cu;
label_387f0c:
    // 0x387f0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387F0Cu;
    {
        const bool branch_taken_0x387f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F0Cu;
        // 0x387f10: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f0c) {
            ctx->pc = 0x387F20u;
            goto label_387f20;
        }
    }
    ctx->pc = 0x387F14u;
    // 0x387f14: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x387F14u;
    {
        const bool branch_taken_0x387f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F14u;
        // 0x387f18: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f14) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x387F1Cu;
    // 0x387f1c: 0x0  nop
    ctx->pc = 0x387f1cu;
    // NOP
label_387f20:
    // 0x387f20: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x387f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387f24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x387f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x387f28: 0x26052b50  addiu       $a1, $s0, 0x2B50
    ctx->pc = 0x387f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x387f2c: 0x26062b40  addiu       $a2, $s0, 0x2B40
    ctx->pc = 0x387f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x387f30: 0x7e022b50  sq          $v0, 0x2B50($s0)
    ctx->pc = 0x387f30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11088), GPR_VEC(ctx, 2));
    // 0x387f34: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x387f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x387f38: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x387F38u;
    SET_GPR_U32(ctx, 31, 0x387F40u);
    ctx->pc = 0x387F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F38u;
    // 0x387f3c: 0x7e022b40  sq          $v0, 0x2B40($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 11072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x387F38u, 0x387F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F40u;
label_387f40:
    // 0x387f40: 0xc096e44  jal         func_25B910
    ctx->pc = 0x387F40u;
    SET_GPR_U32(ctx, 31, 0x387F48u);
    ctx->pc = 0x387F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F40u;
    // 0x387f44: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x387F40u, 0x387F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F48u;
label_387f48:
    // 0x387f48: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x387f48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x387f4c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x387f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x387f50: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x387f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387f54: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x387f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x387f58: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x387f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x387f5c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x387f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x387f60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x387f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x387f64: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x387f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x387f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x387f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x387f6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x387f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x387f70: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x387f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x387f74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x387f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x387f78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x387F78u;
    {
        const bool branch_taken_0x387f78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x387f78) {
            ctx->pc = 0x387F90u;
            goto label_387f90;
        }
    }
    ctx->pc = 0x387F80u;
    // 0x387f80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x387f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x387f84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x387f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x387f88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x387F88u;
    {
        const bool branch_taken_0x387f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F88u;
        // 0x387f8c: 0xa6032b60  sh          $v1, 0x2B60($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f88) {
            ctx->pc = 0x387FACu;
            goto label_387fac;
        }
    }
    ctx->pc = 0x387F90u;
label_387f90:
    // 0x387f90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x387f90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x387f94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x387f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x387f98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x387f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x387f9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x387f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x387fa0: 0x0  nop
    ctx->pc = 0x387fa0u;
    // NOP
    // 0x387fa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x387fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x387fa8: 0xa6032b60  sh          $v1, 0x2B60($s0)
    ctx->pc = 0x387fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 3));
label_387fac:
    // 0x387fac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x387facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x387fb0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x387fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x387fb4: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x387fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x387fb8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x387fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x387fbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x387fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x387fc0: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x387fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x387fc4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x387fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x387fc8: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x387fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x387fcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x387fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x387fd0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x387fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x387fd4: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x387fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x387fd8: 0xa6002b6a  sh          $zero, 0x2B6A($s0)
    ctx->pc = 0x387fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11114), (uint16_t)GPR_U32(ctx, 0));
    // 0x387fdc: 0x0  nop
    ctx->pc = 0x387fdcu;
    // NOP
label_387fe0:
    // 0x387fe0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x387fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x387fe4: 0x78265c20  lq          $a2, 0x5C20($at)
    ctx->pc = 0x387fe4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C20u));
    // 0x387fe8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x387fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x387fec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x387fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x387ff0: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x387ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x387ff4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x387ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x387ff8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x387ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x387ffc: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x387ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x388000: 0x78255c30  lq          $a1, 0x5C30($at)
    ctx->pc = 0x388000u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C30u));
    // 0x388004: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x388004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x388008: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x388008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x38800c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x38800cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x388010: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x388010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x388014: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x388014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x388018: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x388018u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x38801c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x38801cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x388020: 0x7a022b50  lq          $v0, 0x2B50($s0)
    ctx->pc = 0x388020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x388024: 0xc0975a4  jal         func_25D690
    ctx->pc = 0x388024u;
    SET_GPR_U32(ctx, 31, 0x38802Cu);
    ctx->pc = 0x388028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388024u;
    // 0x388028: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D690u, 0x388024u, 0x38802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38802Cu;
label_38802c:
    // 0x38802c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x38802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x388030: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x388030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x388034: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x388034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x388038: 0x26052b40  addiu       $a1, $s0, 0x2B40
    ctx->pc = 0x388038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x38803c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x38803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x388040: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x388040u;
    SET_GPR_U32(ctx, 31, 0x388048u);
    ctx->pc = 0x388044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388040u;
    // 0x388044: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x388040u, 0x388048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388048u;
label_388048:
    // 0x388048: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x388048u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x38804c: 0x26042b40  addiu       $a0, $s0, 0x2B40
    ctx->pc = 0x38804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x388050: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x388050u;
    SET_GPR_U32(ctx, 31, 0x388058u);
    ctx->pc = 0x388054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388050u;
    // 0x388054: 0x26052b50  addiu       $a1, $s0, 0x2B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x388050u, 0x388058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388058u;
label_388058:
    // 0x388058: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x388058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38805c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x38805Cu;
    {
        const bool branch_taken_0x38805c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x388060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38805Cu;
        // 0x388060: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38805c) {
            ctx->pc = 0x388068u;
            goto label_388068;
        }
    }
    ctx->pc = 0x388064u;
    // 0x388064: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x388064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_388068:
    // 0x388068: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x388068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x38806c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x38806cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x388070: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x388070u;
    {
        const bool branch_taken_0x388070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388070u;
        // 0x388074: 0x3c034200  lui         $v1, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388070) {
            ctx->pc = 0x3880F0u;
            goto label_3880f0;
        }
    }
    ctx->pc = 0x388078u;
    // 0x388078: 0x86052b6a  lh          $a1, 0x2B6A($s0)
    ctx->pc = 0x388078u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11114)));
    // 0x38807c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38807cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x388080: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x388080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x388084: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x388084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x388088: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x388088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38808c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38808cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x388090: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x388090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x388094: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x388094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388098: 0xa6032b6a  sh          $v1, 0x2B6A($s0)
    ctx->pc = 0x388098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11114), (uint16_t)GPR_U32(ctx, 3));
    // 0x38809c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3880a0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3880a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3880a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3880a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3880a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3880a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3880ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3880ACu;
    {
        const bool branch_taken_0x3880ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3880B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880ACu;
        // 0x3880b0: 0x86052b6a  lh          $a1, 0x2B6A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11114)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880ac) {
            ctx->pc = 0x3880C4u;
            goto label_3880c4;
        }
    }
    ctx->pc = 0x3880B4u;
    // 0x3880b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3880b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3880b8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3880b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3880bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3880BCu;
    {
        const bool branch_taken_0x3880bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3880C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880BCu;
        // 0x3880c0: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880bc) {
            ctx->pc = 0x3880E0u;
            goto label_3880e0;
        }
    }
    ctx->pc = 0x3880C4u;
label_3880c4:
    // 0x3880c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3880c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3880c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3880c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3880cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3880ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3880d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3880d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3880d4: 0x0  nop
    ctx->pc = 0x3880d4u;
    // NOP
    // 0x3880d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3880d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3880dc: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x3880dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3880e0:
    // 0x3880e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3880E0u;
    {
        const bool branch_taken_0x3880e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3880E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880E0u;
        // 0x3880e4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880e0) {
            ctx->pc = 0x3880F8u;
            goto label_3880f8;
        }
    }
    ctx->pc = 0x3880E8u;
    // 0x3880e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3880E8u;
    {
        const bool branch_taken_0x3880e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3880ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880E8u;
        // 0x3880ec: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880e8) {
            ctx->pc = 0x3880F8u;
            goto label_3880f8;
        }
    }
    ctx->pc = 0x3880F0u;
label_3880f0:
    // 0x3880f0: 0xa6002b6a  sh          $zero, 0x2B6A($s0)
    ctx->pc = 0x3880f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11114), (uint16_t)GPR_U32(ctx, 0));
    // 0x3880f4: 0x0  nop
    ctx->pc = 0x3880f4u;
    // NOP
label_3880f8:
    // 0x3880f8: 0x86032b60  lh          $v1, 0x2B60($s0)
    ctx->pc = 0x3880f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x3880fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3880fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388100: 0xa6032b60  sh          $v1, 0x2B60($s0)
    ctx->pc = 0x388100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 3));
    // 0x388104: 0x86032b60  lh          $v1, 0x2B60($s0)
    ctx->pc = 0x388104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x388108: 0x1c60001d  bgtz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x388108u;
    {
        const bool branch_taken_0x388108 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x38810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388108u;
        // 0x38810c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388108) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x388110u;
    // 0x388110: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x388110u;
    {
        const bool branch_taken_0x388110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388110u;
        // 0x388114: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388110) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x388118u;
label_388118:
    // 0x388118: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x388118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38811c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38811cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x388120: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x388120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x388124: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x388124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x388128: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x388128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38812c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x388130: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x388130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x388134: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x388134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x388138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38813c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x38813cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x388140: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x388140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x388144: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x388144u;
    SET_GPR_U32(ctx, 31, 0x38814Cu);
    ctx->pc = 0x388148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388144u;
    // 0x388148: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x388144u, 0x38814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38814Cu;
label_38814c:
    // 0x38814c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x38814Cu;
    SET_GPR_U32(ctx, 31, 0x388154u);
    ctx->pc = 0x388150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38814Cu;
    // 0x388150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x38814Cu, 0x388154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388154u;
label_388154:
    // 0x388154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x388154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388158: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x388158u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x38815c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388160: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x388160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x388164: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x388164u;
    SET_GPR_U32(ctx, 31, 0x38816Cu);
    ctx->pc = 0x388168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388164u;
    // 0x388168: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x388164u, 0x38816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38816Cu;
label_38816c:
    // 0x38816c: 0x0  nop
    ctx->pc = 0x38816cu;
    // NOP
label_388170:
    // 0x388170: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x388170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x388174: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x388174u;
    {
        const bool branch_taken_0x388174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388174u;
        // 0x388178: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388174) {
            ctx->pc = 0x388180u;
            goto label_388180;
        }
    }
    ctx->pc = 0x38817Cu;
    // 0x38817c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x38817cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_388180:
    // 0x388180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x388184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388188: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x388188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38818c: 0x3e00008  jr          $ra
    ctx->pc = 0x38818Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38818Cu;
        // 0x388190: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38818Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388194u;
}
