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

// Function: sub_003749E0
// Address: 0x3749e0 - 0x374f8c
void sub_003749E0_0x3749e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003749E0_0x3749e0");
#endif

    switch (ctx->pc) {
        case 0x374a98u: goto label_374a98;
        case 0x374ab4u: goto label_374ab4;
        case 0x374adcu: goto label_374adc;
        case 0x374b34u: goto label_374b34;
        case 0x374b44u: goto label_374b44;
        case 0x374b90u: goto label_374b90;
        case 0x374ba4u: goto label_374ba4;
        case 0x374bb4u: goto label_374bb4;
        case 0x374bd0u: goto label_374bd0;
        case 0x374c30u: goto label_374c30;
        case 0x374c3cu: goto label_374c3c;
        case 0x374c54u: goto label_374c54;
        case 0x374c68u: goto label_374c68;
        case 0x374c90u: goto label_374c90;
        case 0x374d94u: goto label_374d94;
        case 0x374da4u: goto label_374da4;
        case 0x374db4u: goto label_374db4;
        case 0x374eacu: goto label_374eac;
        case 0x374ee8u: goto label_374ee8;
        case 0x374f20u: goto label_374f20;
        default: break;
    }

    ctx->pc = 0x3749e0u;

    // 0x3749e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3749e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3749e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3749e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3749e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3749e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3749ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3749ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3749f0: 0x83838c08  lb          $v1, -0x73F8($gp)
    ctx->pc = 0x3749f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937608)));
    // 0x3749f4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3749F4u;
    {
        const bool branch_taken_0x3749f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3749F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3749F4u;
        // 0x3749f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3749f4) {
            ctx->pc = 0x374A20u;
            goto label_374a20;
        }
    }
    ctx->pc = 0x3749FCu;
    // 0x3749fc: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3749fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374a00: 0x3c03c19c  lui         $v1, 0xC19C
    ctx->pc = 0x374a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49564 << 16));
    // 0x374a04: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x374a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x374a08: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x374a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x374a0c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x374a0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x374a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374a14: 0xa3838c08  sb          $v1, -0x73F8($gp)
    ctx->pc = 0x374a14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937608), (uint8_t)GPR_U32(ctx, 3));
    // 0x374a18: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x374a18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x374a1c: 0xe4201a30  swc1        $f0, 0x1A30($at)
    ctx->pc = 0x374a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x681A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x681A30u, _value); } while (0); }
label_374a20:
    // 0x374a20: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x374a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x374a24: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x374a24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x374a28: 0x10200153  beqz        $at, . + 4 + (0x153 << 2)
    ctx->pc = 0x374A28u;
    {
        const bool branch_taken_0x374a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x374a28) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374A30u;
    // 0x374a30: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x374a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x374a34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x374a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x374a38: 0x24841a40  addiu       $a0, $a0, 0x1A40
    ctx->pc = 0x374a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6720));
    // 0x374a3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x374a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374a40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x374a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374a44: 0x600008  jr          $v1
    ctx->pc = 0x374A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x374A50u: goto label_374a50;
            case 0x374A58u: goto label_374a58;
            case 0x374A88u: goto label_374a88;
            case 0x374D78u: goto label_374d78;
            case 0x374EF8u: goto label_374ef8;
            case 0x374F70u: goto label_374f70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374A44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x374A4Cu;
    // 0x374a4c: 0x0  nop
    ctx->pc = 0x374a4cu;
    // NOP
label_374a50:
    // 0x374a50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x374a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374a54: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x374a54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_374a58:
    // 0x374a58: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x374a58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x374a5c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x374a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x374a60: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x374a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x374a64: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x374a64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x374a68: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x374a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374a6c: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x374a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x374a70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x374a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x374a74: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x374a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x374a78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x374a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374a7c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x374a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x374a80: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x374A80u;
    {
        const bool branch_taken_0x374a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A80u;
        // 0x374a84: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a80) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374A88u;
label_374a88:
    // 0x374a88: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x374a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x374a8c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x374a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x374a90: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x374A90u;
    SET_GPR_U32(ctx, 31, 0x374A98u);
    ctx->pc = 0x374A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A90u;
    // 0x374a94: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x374A90u, 0x374A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A98u;
label_374a98:
    // 0x374a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x374a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374a9c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x374A9Cu;
    {
        const bool branch_taken_0x374a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x374a9c) {
            ctx->pc = 0x374AB8u;
            goto label_374ab8;
        }
    }
    ctx->pc = 0x374AA4u;
    // 0x374aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374aa8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x374aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x374aac: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x374AACu;
    SET_GPR_U32(ctx, 31, 0x374AB4u);
    ctx->pc = 0x374AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374AACu;
    // 0x374ab0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x374AACu, 0x374AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AB4u;
label_374ab4:
    // 0x374ab4: 0x0  nop
    ctx->pc = 0x374ab4u;
    // NOP
label_374ab8:
    // 0x374ab8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x374ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x374abc: 0x1060012e  beqz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x374ABCu;
    {
        const bool branch_taken_0x374abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374abc) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374AC4u;
    // 0x374ac4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x374AC4u;
    {
        const bool branch_taken_0x374ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x374ac4) {
            ctx->pc = 0x374B50u;
            goto label_374b50;
        }
    }
    ctx->pc = 0x374ACCu;
    // 0x374acc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374ad0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x374ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x374ad4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x374AD4u;
    SET_GPR_U32(ctx, 31, 0x374ADCu);
    ctx->pc = 0x374AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374AD4u;
    // 0x374ad8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x374AD4u, 0x374ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374ADCu;
label_374adc:
    // 0x374adc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x374adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x374ae0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x374ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x374ae4: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x374ae4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x374ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374aec: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x374aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x374af0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374af4: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x374af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x374af8: 0x24c6f38c  addiu       $a2, $a2, -0xC74
    ctx->pc = 0x374af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964108));
    // 0x374afc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x374afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b00: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x374b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x374b04: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x374b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x374b08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x374b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x374b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374b10: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x374b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x374b14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x374b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x374b18: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x374b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x374b1c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x374b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x374b20: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x374b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374b24: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x374b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374b28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x374b28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x374b2c: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x374B2Cu;
    SET_GPR_U32(ctx, 31, 0x374B34u);
    ctx->pc = 0x374B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B2Cu;
    // 0x374b30: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x374B2Cu, 0x374B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B34u;
label_374b34:
    // 0x374b34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374b38: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x374b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x374b3c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x374B3Cu;
    SET_GPR_U32(ctx, 31, 0x374B44u);
    ctx->pc = 0x374B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B3Cu;
    // 0x374b40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x374B3Cu, 0x374B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B44u;
label_374b44:
    // 0x374b44: 0x8e2207c0  lw          $v0, 0x7C0($s1)
    ctx->pc = 0x374b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x374b48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x374B48u;
    {
        const bool branch_taken_0x374b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B48u;
        // 0x374b4c: 0xae2207c8  sw          $v0, 0x7C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374b48) {
            ctx->pc = 0x374BB8u;
            goto label_374bb8;
        }
    }
    ctx->pc = 0x374B50u;
label_374b50:
    // 0x374b50: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x374b50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x374b54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x374b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x374b58: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x374b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x374b5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x374b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x374b60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374b64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x374b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x374b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374b6c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x374b6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374b70: 0x0  nop
    ctx->pc = 0x374b70u;
    // NOP
    // 0x374b74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x374b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x374b78: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x374b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x374b7c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x374b7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x374b80: 0x0  nop
    ctx->pc = 0x374b80u;
    // NOP
    // 0x374b84: 0x0  nop
    ctx->pc = 0x374b84u;
    // NOP
    // 0x374b88: 0xc096784  jal         func_259E10
    ctx->pc = 0x374B88u;
    SET_GPR_U32(ctx, 31, 0x374B90u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x374B88u, 0x374B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B90u;
label_374b90:
    // 0x374b90: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x374b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x374b94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374b98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374b9c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x374B9Cu;
    SET_GPR_U32(ctx, 31, 0x374BA4u);
    ctx->pc = 0x374BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374B9Cu;
    // 0x374ba0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x374B9Cu, 0x374BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BA4u;
label_374ba4:
    // 0x374ba4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374ba8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x374ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x374bac: 0xc0414ca  jal         func_105328
    ctx->pc = 0x374BACu;
    SET_GPR_U32(ctx, 31, 0x374BB4u);
    ctx->pc = 0x374BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374BACu;
    // 0x374bb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x374BACu, 0x374BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BB4u;
label_374bb4:
    // 0x374bb4: 0x0  nop
    ctx->pc = 0x374bb4u;
    // NOP
label_374bb8:
    // 0x374bb8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x374bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x374bbc: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x374bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x374bc0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x374bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374bc4: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x374bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x374bc8: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x374BC8u;
    SET_GPR_U32(ctx, 31, 0x374BD0u);
    ctx->pc = 0x374BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374BC8u;
    // 0x374bcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x374BC8u, 0x374BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374BD0u;
label_374bd0:
    // 0x374bd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x374BD0u;
    {
        const bool branch_taken_0x374bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374bd0) {
            ctx->pc = 0x374BF8u;
            goto label_374bf8;
        }
    }
    ctx->pc = 0x374BD8u;
    // 0x374bd8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x374bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374bdc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x374bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x374be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x374be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374be4: 0x0  nop
    ctx->pc = 0x374be4u;
    // NOP
    // 0x374be8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x374be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x374bec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x374BECu;
    {
        const bool branch_taken_0x374bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374BECu;
        // 0x374bf0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374bec) {
            ctx->pc = 0x374C10u;
            goto label_374c10;
        }
    }
    ctx->pc = 0x374BF4u;
    // 0x374bf4: 0x0  nop
    ctx->pc = 0x374bf4u;
    // NOP
label_374bf8:
    // 0x374bf8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374bfc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x374bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374c04: 0x0  nop
    ctx->pc = 0x374c04u;
    // NOP
    // 0x374c08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x374c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374c0c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x374c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_374c10:
    // 0x374c10: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x374c10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374c14: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374c18: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x374c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374c1c: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x374c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x374c20: 0x7e220890  sq          $v0, 0x890($s1)
    ctx->pc = 0x374c20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
    // 0x374c24: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x374c24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x374c28: 0xc0414d0  jal         func_105340
    ctx->pc = 0x374C28u;
    SET_GPR_U32(ctx, 31, 0x374C30u);
    ctx->pc = 0x374C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C28u;
    // 0x374c2c: 0x7e220880  sq          $v0, 0x880($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 2176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x374C28u, 0x374C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C30u;
label_374c30:
    // 0x374c30: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374c34: 0xc041472  jal         func_1051C8
    ctx->pc = 0x374C34u;
    SET_GPR_U32(ctx, 31, 0x374C3Cu);
    ctx->pc = 0x374C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C34u;
    // 0x374c38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x374C34u, 0x374C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C3Cu;
label_374c3c:
    // 0x374c3c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x374c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x374c40: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x374c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x374c44: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x374c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x374c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374c4c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x374C4Cu;
    SET_GPR_U32(ctx, 31, 0x374C54u);
    ctx->pc = 0x374C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C4Cu;
    // 0x374c50: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x374C4Cu, 0x374C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C54u;
label_374c54:
    // 0x374c54: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x374c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x374c58: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374c5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374c60: 0xc0414dc  jal         func_105370
    ctx->pc = 0x374C60u;
    SET_GPR_U32(ctx, 31, 0x374C68u);
    ctx->pc = 0x374C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C60u;
    // 0x374c64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x374C60u, 0x374C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C68u;
label_374c68:
    // 0x374c68: 0xc62200a4  lwc1        $f2, 0xA4($s1)
    ctx->pc = 0x374c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374c6c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x374c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x374c70: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x374c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374c74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374c78: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x374c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374c7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x374c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x374c80: 0xc62d0094  lwc1        $f13, 0x94($s1)
    ctx->pc = 0x374c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x374c84: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x374c84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x374c88: 0xc0dd260  jal         func_374980
    ctx->pc = 0x374C88u;
    SET_GPR_U32(ctx, 31, 0x374C90u);
    ctx->pc = 0x374C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C88u;
    // 0x374c8c: 0x46010381  sub.s       $f14, $f0, $f1 (Delay Slot)
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x374980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374980u, 0x374C88u, 0x374C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C90u;
label_374c90:
    // 0x374c90: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x374c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374c98: 0x0  nop
    ctx->pc = 0x374c98u;
    // NOP
    // 0x374c9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x374c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374ca0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x374CA0u;
    {
        const bool branch_taken_0x374ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374ca0) {
            ctx->pc = 0x374CF8u;
            goto label_374cf8;
        }
    }
    ctx->pc = 0x374CA8u;
    // 0x374ca8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x374ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x374cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374cb0: 0x0  nop
    ctx->pc = 0x374cb0u;
    // NOP
    // 0x374cb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x374cb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374cb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x374CB8u;
    {
        const bool branch_taken_0x374cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374cb8) {
            ctx->pc = 0x374CD0u;
            goto label_374cd0;
        }
    }
    ctx->pc = 0x374CC0u;
    // 0x374cc0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374cc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x374cc4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x374cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x374cc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x374CC8u;
    {
        const bool branch_taken_0x374cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CC8u;
        // 0x374ccc: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cc8) {
            ctx->pc = 0x374CECu;
            goto label_374cec;
        }
    }
    ctx->pc = 0x374CD0u;
label_374cd0:
    // 0x374cd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x374cd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374cd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x374cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x374cd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374cd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x374cdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x374cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x374ce0: 0x0  nop
    ctx->pc = 0x374ce0u;
    // NOP
    // 0x374ce4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x374ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x374ce8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x374ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_374cec:
    // 0x374cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x374cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x374cf0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x374CF0u;
    {
        const bool branch_taken_0x374cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CF0u;
        // 0x374cf4: 0xa6220828  sh          $v0, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cf0) {
            ctx->pc = 0x374D48u;
            goto label_374d48;
        }
    }
    ctx->pc = 0x374CF8u;
label_374cf8:
    // 0x374cf8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x374cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x374cfc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x374cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374d04: 0x0  nop
    ctx->pc = 0x374d04u;
    // NOP
    // 0x374d08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x374d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374d0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x374D0Cu;
    {
        const bool branch_taken_0x374d0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374d0c) {
            ctx->pc = 0x374D24u;
            goto label_374d24;
        }
    }
    ctx->pc = 0x374D14u;
    // 0x374d14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374d14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374d18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x374d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x374d1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x374D1Cu;
    {
        const bool branch_taken_0x374d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D1Cu;
        // 0x374d20: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d1c) {
            ctx->pc = 0x374D40u;
            goto label_374d40;
        }
    }
    ctx->pc = 0x374D24u;
label_374d24:
    // 0x374d24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x374d24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374d28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x374d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x374d2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374d2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374d30: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x374d30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x374d34: 0x0  nop
    ctx->pc = 0x374d34u;
    // NOP
    // 0x374d38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x374d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x374d3c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x374d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_374d40:
    // 0x374d40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x374d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x374d44: 0xa6220828  sh          $v0, 0x828($s1)
    ctx->pc = 0x374d44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
label_374d48:
    // 0x374d48: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x374d48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x374d4c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x374d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x374d50: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x374d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x374d54: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x374d54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x374d58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x374d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374d5c: 0xa22207f5  sb          $v0, 0x7F5($s1)
    ctx->pc = 0x374d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x374d60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x374d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x374d64: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x374d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x374d68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x374d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374d6c: 0xa620082a  sh          $zero, 0x82A($s1)
    ctx->pc = 0x374d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x374d70: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x374d70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x374d74: 0x0  nop
    ctx->pc = 0x374d74u;
    // NOP
label_374d78:
    // 0x374d78: 0x96220828  lhu         $v0, 0x828($s1)
    ctx->pc = 0x374d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x374d7c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x374D7Cu;
    {
        const bool branch_taken_0x374d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x374d7c) {
            ctx->pc = 0x374ED0u;
            goto label_374ed0;
        }
    }
    ctx->pc = 0x374D84u;
    // 0x374d84: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374d88: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x374d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x374d8c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x374D8Cu;
    SET_GPR_U32(ctx, 31, 0x374D94u);
    ctx->pc = 0x374D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D8Cu;
    // 0x374d90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x374D8Cu, 0x374D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D94u;
label_374d94:
    // 0x374d94: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x374d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x374d98: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x374d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374d9c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x374D9Cu;
    SET_GPR_U32(ctx, 31, 0x374DA4u);
    ctx->pc = 0x374DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D9Cu;
    // 0x374da0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x374D9Cu, 0x374DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374DA4u;
label_374da4:
    // 0x374da4: 0x26240880  addiu       $a0, $s1, 0x880
    ctx->pc = 0x374da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2176));
    // 0x374da8: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x374da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374dac: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x374DACu;
    SET_GPR_U32(ctx, 31, 0x374DB4u);
    ctx->pc = 0x374DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374DACu;
    // 0x374db0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x374DACu, 0x374DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374DB4u;
label_374db4:
    // 0x374db4: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x374db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x374db8: 0x96250828  lhu         $a1, 0x828($s1)
    ctx->pc = 0x374db8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x374dbc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x374dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x374dc0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x374dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x374dc4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x374dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x374dc8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x374dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x374dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x374dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374dd0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x374dd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374dd4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x374dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x374dd8: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x374dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x374ddc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x374ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x374de0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x374de0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x374de4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x374de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x374de8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x374de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374dec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x374DECu;
    {
        const bool branch_taken_0x374dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374dec) {
            ctx->pc = 0x374E04u;
            goto label_374e04;
        }
    }
    ctx->pc = 0x374DF4u;
    // 0x374df4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374df8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x374df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x374dfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x374DFCu;
    {
        const bool branch_taken_0x374dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DFCu;
        // 0x374e00: 0x96230828  lhu         $v1, 0x828($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374dfc) {
            ctx->pc = 0x374E20u;
            goto label_374e20;
        }
    }
    ctx->pc = 0x374E04u;
label_374e04:
    // 0x374e04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x374e04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x374e08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x374e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x374e0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374e10: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x374e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x374e14: 0x0  nop
    ctx->pc = 0x374e14u;
    // NOP
    // 0x374e18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x374e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x374e1c: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x374e1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
label_374e20:
    // 0x374e20: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x374e20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x374e24: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x374E24u;
    {
        const bool branch_taken_0x374e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x374e24) {
            ctx->pc = 0x374EA0u;
            goto label_374ea0;
        }
    }
    ctx->pc = 0x374E2Cu;
    // 0x374e2c: 0x9624082a  lhu         $a0, 0x82A($s1)
    ctx->pc = 0x374e2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x374e30: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x374e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x374e34: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x374E34u;
    {
        const bool branch_taken_0x374e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374e34) {
            ctx->pc = 0x374E68u;
            goto label_374e68;
        }
    }
    ctx->pc = 0x374E3Cu;
    // 0x374e3c: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x374e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x374e40: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x374e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x374e44: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x374e44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x374e48: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x374e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374e4c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x374e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x374e50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x374e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x374e54: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x374e54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x374e58: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x374e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x374e5c: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x374e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x374e60: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x374e60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x374e64: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x374e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_374e68:
    // 0x374e68: 0x9624082a  lhu         $a0, 0x82A($s1)
    ctx->pc = 0x374e68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x374e6c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x374e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x374e70: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x374E70u;
    {
        const bool branch_taken_0x374e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374e70) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374E78u;
    // 0x374e78: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x374e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x374e7c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x374e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x374e80: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x374E80u;
    {
        const bool branch_taken_0x374e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374e80) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374E88u;
    // 0x374e88: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x374e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x374e8c: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374e90: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x374e90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x374e94: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x374E94u;
    {
        const bool branch_taken_0x374e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E94u;
        // 0x374e98: 0x7c800000  sq          $zero, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e94) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374E9Cu;
    // 0x374e9c: 0x0  nop
    ctx->pc = 0x374e9cu;
    // NOP
label_374ea0:
    // 0x374ea0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x374ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x374ea4: 0xc096988  jal         func_25A620
    ctx->pc = 0x374EA4u;
    SET_GPR_U32(ctx, 31, 0x374EACu);
    ctx->pc = 0x374EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374EA4u;
    // 0x374ea8: 0x26250880  addiu       $a1, $s1, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x374EA4u, 0x374EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374EACu;
label_374eac:
    // 0x374eac: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x374eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x374eb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x374eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374eb4: 0x0  nop
    ctx->pc = 0x374eb4u;
    // NOP
    // 0x374eb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x374eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374ebc: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x374EBCu;
    {
        const bool branch_taken_0x374ebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374ebc) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374EC4u;
    // 0x374ec4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x374ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x374ec8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x374EC8u;
    {
        const bool branch_taken_0x374ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EC8u;
        // 0x374ecc: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ec8) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374ED0u;
label_374ed0:
    // 0x374ed0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x374ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x374ed4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x374ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x374ed8: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374edc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x374edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x374ee0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x374EE0u;
    SET_GPR_U32(ctx, 31, 0x374EE8u);
    ctx->pc = 0x374EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374EE0u;
    // 0x374ee4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x374EE0u, 0x374EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374EE8u;
label_374ee8:
    // 0x374ee8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x374ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374eec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x374EECu;
    {
        const bool branch_taken_0x374eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EECu;
        // 0x374ef0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374eec) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374EF4u;
    // 0x374ef4: 0x0  nop
    ctx->pc = 0x374ef4u;
    // NOP
label_374ef8:
    // 0x374ef8: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x374ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x374efc: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x374efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374f00: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x374f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x374f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374f08: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x374f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x374f0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x374f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374f10: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x374f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374f14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x374f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x374f18: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x374F18u;
    SET_GPR_U32(ctx, 31, 0x374F20u);
    ctx->pc = 0x374F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F18u;
    // 0x374f1c: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x374F18u, 0x374F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374F20u;
label_374f20:
    // 0x374f20: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x374f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x374f24: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x374f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x374f28: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x374F28u;
    {
        const bool branch_taken_0x374f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374f28) {
            ctx->pc = 0x374F58u;
            goto label_374f58;
        }
    }
    ctx->pc = 0x374F30u;
    // 0x374f30: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x374f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x374f34: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x374f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x374f38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x374F38u;
    {
        const bool branch_taken_0x374f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374f38) {
            ctx->pc = 0x374F58u;
            goto label_374f58;
        }
    }
    ctx->pc = 0x374F40u;
    // 0x374f40: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x374f40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x374f44: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x374f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x374f48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x374f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x374f4c: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x374f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x374f50: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x374f50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x374f54: 0x0  nop
    ctx->pc = 0x374f54u;
    // NOP
label_374f58:
    // 0x374f58: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x374f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x374f5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x374F5Cu;
    {
        const bool branch_taken_0x374f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374f5c) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374F64u;
    // 0x374f64: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x374f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x374f68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x374F68u;
    {
        const bool branch_taken_0x374f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F68u;
        // 0x374f6c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f68) {
            ctx->pc = 0x374F78u;
            goto label_374f78;
        }
    }
    ctx->pc = 0x374F70u;
label_374f70:
    // 0x374f70: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x374f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x374f74: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x374f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_374f78:
    // 0x374f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374f84: 0x3e00008  jr          $ra
    ctx->pc = 0x374F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F84u;
        // 0x374f88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374F8Cu;
}
