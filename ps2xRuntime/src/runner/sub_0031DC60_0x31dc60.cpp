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

// Function: sub_0031DC60
// Address: 0x31dc60 - 0x31e2fc
void sub_0031DC60_0x31dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DC60_0x31dc60");
#endif

    switch (ctx->pc) {
        case 0x31dca8u: goto label_31dca8;
        case 0x31dcb4u: goto label_31dcb4;
        case 0x31dcbcu: goto label_31dcbc;
        case 0x31dd40u: goto label_31dd40;
        case 0x31de40u: goto label_31de40;
        case 0x31de8cu: goto label_31de8c;
        case 0x31deb0u: goto label_31deb0;
        case 0x31dec8u: goto label_31dec8;
        case 0x31ded8u: goto label_31ded8;
        case 0x31df40u: goto label_31df40;
        case 0x31df54u: goto label_31df54;
        case 0x31df6cu: goto label_31df6c;
        case 0x31dfc8u: goto label_31dfc8;
        case 0x31e058u: goto label_31e058;
        case 0x31e06cu: goto label_31e06c;
        case 0x31e07cu: goto label_31e07c;
        case 0x31e0bcu: goto label_31e0bc;
        case 0x31e108u: goto label_31e108;
        case 0x31e114u: goto label_31e114;
        case 0x31e124u: goto label_31e124;
        case 0x31e134u: goto label_31e134;
        case 0x31e158u: goto label_31e158;
        case 0x31e16cu: goto label_31e16c;
        case 0x31e18cu: goto label_31e18c;
        case 0x31e1d4u: goto label_31e1d4;
        case 0x31e1f4u: goto label_31e1f4;
        default: break;
    }

    ctx->pc = 0x31dc60u;

    // 0x31dc60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31dc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31dc64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31dc68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31dc6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31dc70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31dc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31dc78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x31dc78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31dc80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31dc84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31dc84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31dc88: 0x83838b44  lb          $v1, -0x74BC($gp)
    ctx->pc = 0x31dc88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937412)));
    // 0x31dc8c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31DC8Cu;
    {
        const bool branch_taken_0x31dc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC8Cu;
        // 0x31dc90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc8c) {
            ctx->pc = 0x31DCD0u;
            goto label_31dcd0;
        }
    }
    ctx->pc = 0x31DC94u;
    // 0x31dc94: 0xc78c8078  lwc1        $f12, -0x7F88($gp)
    ctx->pc = 0x31dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31dc98: 0x3c02c044  lui         $v0, 0xC044
    ctx->pc = 0x31dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49220 << 16));
    // 0x31dc9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31dc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dca0: 0xc04b946  jal         func_12E518
    ctx->pc = 0x31DCA0u;
    SET_GPR_U32(ctx, 31, 0x31DCA8u);
    ctx->pc = 0x31DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCA0u;
    // 0x31dca4: 0x70028389  pcpyld      $s0, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x31DCA0u, 0x31DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCA8u;
label_31dca8:
    // 0x31dca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcac: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x31DCACu;
    SET_GPR_U32(ctx, 31, 0x31DCB4u);
    ctx->pc = 0x31DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCACu;
    // 0x31dcb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x31DCACu, 0x31DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCB4u;
label_31dcb4:
    // 0x31dcb4: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x31DCB4u;
    SET_GPR_U32(ctx, 31, 0x31DCBCu);
    ctx->pc = 0x31DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCB4u;
    // 0x31dcb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x31DCB4u, 0x31DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DCBCu;
label_31dcbc:
    // 0x31dcbc: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31dcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x31dcc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dcc4: 0xe420c9a8  swc1        $f0, -0x3658($at)
    ctx->pc = 0x31dcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x67C9A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67C9A8u, _value); } while (0); }
    // 0x31dcc8: 0xa3838b44  sb          $v1, -0x74BC($gp)
    ctx->pc = 0x31dcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937412), (uint8_t)GPR_U32(ctx, 3));
    // 0x31dccc: 0x0  nop
    ctx->pc = 0x31dcccu;
    // NOP
label_31dcd0:
    // 0x31dcd0: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x31dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x31dcd4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31dcd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dcd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dcdc: 0x34830200  ori         $v1, $a0, 0x200
    ctx->pc = 0x31dcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x31dce0: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x31dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x31dce4: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x31dce8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x31dce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x31dcec: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x31dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x31dcf0: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x31dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x31dcf4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x31dcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x31dcf8: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x31dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x31dcfc: 0xc68128f0  lwc1        $f1, 0x28F0($s4)
    ctx->pc = 0x31dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dd00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31dd00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dd04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x31DD04u;
    {
        const bool branch_taken_0x31dd04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD04u;
        // 0x31dd08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd04) {
            ctx->pc = 0x31DD18u;
            goto label_31dd18;
        }
    }
    ctx->pc = 0x31DD0Cu;
    // 0x31dd0c: 0x92832ab0  lbu         $v1, 0x2AB0($s4)
    ctx->pc = 0x31dd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x31dd10: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x31dd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x31dd14: 0xa2832ab0  sb          $v1, 0x2AB0($s4)
    ctx->pc = 0x31dd14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10928), (uint8_t)GPR_U32(ctx, 3));
label_31dd18:
    // 0x31dd18: 0x92840821  lbu         $a0, 0x821($s4)
    ctx->pc = 0x31dd18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2081)));
    // 0x31dd1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dd20: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31DD20u;
    {
        const bool branch_taken_0x31dd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31dd20) {
            ctx->pc = 0x31DD60u;
            goto label_31dd60;
        }
    }
    ctx->pc = 0x31DD28u;
    // 0x31dd28: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x31dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x31dd2c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x31dd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x31dd30: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x31DD30u;
    {
        const bool branch_taken_0x31dd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD30u;
        // 0x31dd34: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd30) {
            ctx->pc = 0x31DD60u;
            goto label_31dd60;
        }
    }
    ctx->pc = 0x31DD38u;
    // 0x31dd38: 0xc096988  jal         func_25A620
    ctx->pc = 0x31DD38u;
    SET_GPR_U32(ctx, 31, 0x31DD40u);
    ctx->pc = 0x31DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD38u;
    // 0x31dd3c: 0x26852b30  addiu       $a1, $s4, 0x2B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x31DD38u, 0x31DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD40u;
label_31dd40:
    // 0x31dd40: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31dd44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31dd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31dd48: 0x0  nop
    ctx->pc = 0x31dd48u;
    // NOP
    // 0x31dd4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31dd4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dd50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x31DD50u;
    {
        const bool branch_taken_0x31dd50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD50u;
        // 0x31dd54: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd50) {
            ctx->pc = 0x31DD60u;
            goto label_31dd60;
        }
    }
    ctx->pc = 0x31DD58u;
    // 0x31dd58: 0xa2830821  sb          $v1, 0x821($s4)
    ctx->pc = 0x31dd58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x31dd5c: 0x0  nop
    ctx->pc = 0x31dd5cu;
    // NOP
label_31dd60:
    // 0x31dd60: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x31dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x31dd64: 0xc68128f0  lwc1        $f1, 0x28F0($s4)
    ctx->pc = 0x31dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dd68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dd68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dd6c: 0x0  nop
    ctx->pc = 0x31dd6cu;
    // NOP
    // 0x31dd70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31dd70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dd74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DD74u;
    {
        const bool branch_taken_0x31dd74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD74u;
        // 0x31dd78: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd74) {
            ctx->pc = 0x31DD80u;
            goto label_31dd80;
        }
    }
    ctx->pc = 0x31DD7Cu;
    // 0x31dd7c: 0xa2830821  sb          $v1, 0x821($s4)
    ctx->pc = 0x31dd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
label_31dd80:
    // 0x31dd80: 0x92830821  lbu         $v1, 0x821($s4)
    ctx->pc = 0x31dd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2081)));
    // 0x31dd84: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x31dd84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31dd88: 0x1020014d  beqz        $at, . + 4 + (0x14D << 2)
    ctx->pc = 0x31DD88u;
    {
        const bool branch_taken_0x31dd88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD88u;
        // 0x31dd8c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd88) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31DD90u;
    // 0x31dd90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31dd94: 0x2484c9b0  addiu       $a0, $a0, -0x3650
    ctx->pc = 0x31dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953392));
    // 0x31dd98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31dd9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31dda0: 0x600008  jr          $v1
    ctx->pc = 0x31DDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31DDA8u: goto label_31dda8;
            case 0x31DE10u: goto label_31de10;
            case 0x31DE28u: goto label_31de28;
            case 0x31DFB8u: goto label_31dfb8;
            case 0x31E0B0u: goto label_31e0b0;
            case 0x31E270u: goto label_31e270;
            case 0x31E288u: goto label_31e288;
            case 0x31E2A8u: goto label_31e2a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DDA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31DDA8u;
label_31dda8:
    // 0x31dda8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x31dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x31ddac: 0xc6822b50  lwc1        $f2, 0x2B50($s4)
    ctx->pc = 0x31ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 11088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ddb0: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x31ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ddb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ddb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ddb8: 0x0  nop
    ctx->pc = 0x31ddb8u;
    // NOP
    // 0x31ddbc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x31ddbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x31ddc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31ddc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ddc4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x31DDC4u;
    {
        const bool branch_taken_0x31ddc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ddc4) {
            ctx->pc = 0x31DE00u;
            goto label_31de00;
        }
    }
    ctx->pc = 0x31DDCCu;
    // 0x31ddcc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x31ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31ddd0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x31ddd4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ddd8: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x31ddd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x31dddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dde0: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x31dde0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31dde4: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x31dde4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31dde8: 0xa68607f2  sh          $a2, 0x7F2($s4)
    ctx->pc = 0x31dde8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x31ddec: 0xa28507f5  sb          $a1, 0x7F5($s4)
    ctx->pc = 0x31ddecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x31ddf0: 0xae8407ec  sw          $a0, 0x7EC($s4)
    ctx->pc = 0x31ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 4));
    // 0x31ddf4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x31DDF4u;
    {
        const bool branch_taken_0x31ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDF4u;
        // 0x31ddf8: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddf4) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31DDFCu;
    // 0x31ddfc: 0x0  nop
    ctx->pc = 0x31ddfcu;
    // NOP
label_31de00:
    // 0x31de00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31de00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31de04: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x31DE04u;
    {
        const bool branch_taken_0x31de04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE04u;
        // 0x31de08: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de04) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31DE0Cu;
    // 0x31de0c: 0x0  nop
    ctx->pc = 0x31de0cu;
    // NOP
label_31de10:
    // 0x31de10: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x31de10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x31de14: 0x1060012a  beqz        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x31DE14u;
    {
        const bool branch_taken_0x31de14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE14u;
        // 0x31de18: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de14) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31DE1Cu;
    // 0x31de1c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x31DE1Cu;
    {
        const bool branch_taken_0x31de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE1Cu;
        // 0x31de20: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de1c) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31DE24u;
    // 0x31de24: 0x0  nop
    ctx->pc = 0x31de24u;
    // NOP
label_31de28:
    // 0x31de28: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x31de28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x31de2c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x31de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x31de30: 0x7e820870  sq          $v0, 0x870($s4)
    ctx->pc = 0x31de30u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 2160), GPR_VEC(ctx, 2));
    // 0x31de34: 0x8e8507c0  lw          $a1, 0x7C0($s4)
    ctx->pc = 0x31de34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1984)));
    // 0x31de38: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x31DE38u;
    SET_GPR_U32(ctx, 31, 0x31DE40u);
    ctx->pc = 0x31DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE38u;
    // 0x31de3c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x31DE38u, 0x31DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE40u;
label_31de40:
    // 0x31de40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31de40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de44: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x31DE44u;
    {
        const bool branch_taken_0x31de44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31de44) {
            ctx->pc = 0x31DF00u;
            goto label_31df00;
        }
    }
    ctx->pc = 0x31DE4Cu;
    // 0x31de4c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x31de4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31de50: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x31de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x31de54: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31de54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31de58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DE58u;
    {
        const bool branch_taken_0x31de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE58u;
        // 0x31de5c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de58) {
            ctx->pc = 0x31DE78u;
            goto label_31de78;
        }
    }
    ctx->pc = 0x31DE60u;
    // 0x31de60: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x31de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x31de64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31de64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31de68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DE68u;
    {
        const bool branch_taken_0x31de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31de68) {
            ctx->pc = 0x31DE78u;
            goto label_31de78;
        }
    }
    ctx->pc = 0x31DE70u;
    // 0x31de70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de74: 0x0  nop
    ctx->pc = 0x31de74u;
    // NOP
label_31de78:
    // 0x31de78: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x31DE78u;
    {
        const bool branch_taken_0x31de78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31de78) {
            ctx->pc = 0x31DF00u;
            goto label_31df00;
        }
    }
    ctx->pc = 0x31DE80u;
    // 0x31de80: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x31de80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31de84: 0xc096908  jal         func_25A420
    ctx->pc = 0x31DE84u;
    SET_GPR_U32(ctx, 31, 0x31DE8Cu);
    ctx->pc = 0x31DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DE84u;
    // 0x31de88: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x31DE84u, 0x31DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DE8Cu;
label_31de8c:
    // 0x31de8c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x31de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x31de90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31de90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31de94: 0x0  nop
    ctx->pc = 0x31de94u;
    // NOP
    // 0x31de98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31de98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31de9c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x31DE9Cu;
    {
        const bool branch_taken_0x31de9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE9Cu;
        // 0x31dea0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de9c) {
            ctx->pc = 0x31DEF0u;
            goto label_31def0;
        }
    }
    ctx->pc = 0x31DEA4u;
    // 0x31dea4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x31dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31dea8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x31DEA8u;
    SET_GPR_U32(ctx, 31, 0x31DEB0u);
    ctx->pc = 0x31DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEA8u;
    // 0x31deac: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x31DEA8u, 0x31DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEB0u;
label_31deb0:
    // 0x31deb0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x31deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x31deb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x31deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31deb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31deb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31debc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31debcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dec0: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x31DEC0u;
    SET_GPR_U32(ctx, 31, 0x31DEC8u);
    ctx->pc = 0x31DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DEC0u;
    // 0x31dec4: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x31DEC0u, 0x31DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DEC8u;
label_31dec8:
    // 0x31dec8: 0x26840880  addiu       $a0, $s4, 0x880
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x31decc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x31deccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31ded0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x31DED0u;
    SET_GPR_U32(ctx, 31, 0x31DED8u);
    ctx->pc = 0x31DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DED0u;
    // 0x31ded4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x31DED0u, 0x31DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DED8u;
label_31ded8:
    // 0x31ded8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x31ded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dedc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31dee0: 0xe6800884  swc1        $f0, 0x884($s4)
    ctx->pc = 0x31dee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2180), bits); }
    // 0x31dee4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31DEE4u;
    {
        const bool branch_taken_0x31dee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEE4u;
        // 0x31dee8: 0xae83088c  sw          $v1, 0x88C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dee4) {
            ctx->pc = 0x31DF70u;
            goto label_31df70;
        }
    }
    ctx->pc = 0x31DEECu;
    // 0x31deec: 0x0  nop
    ctx->pc = 0x31deecu;
    // NOP
label_31def0:
    // 0x31def0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x31def0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31def4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x31DEF4u;
    {
        const bool branch_taken_0x31def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DEF4u;
        // 0x31def8: 0x7e830880  sq          $v1, 0x880($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 2176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31def4) {
            ctx->pc = 0x31DF70u;
            goto label_31df70;
        }
    }
    ctx->pc = 0x31DEFCu;
    // 0x31defc: 0x0  nop
    ctx->pc = 0x31defcu;
    // NOP
label_31df00:
    // 0x31df00: 0x868500c2  lh          $a1, 0xC2($s4)
    ctx->pc = 0x31df00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x31df04: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x31df04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x31df08: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x31df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x31df0c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x31df0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x31df10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x31df10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31df14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31df14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31df18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31df18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31df1c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x31df1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31df20: 0x0  nop
    ctx->pc = 0x31df20u;
    // NOP
    // 0x31df24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31df24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31df28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31df28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31df2c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x31df2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x31df30: 0x0  nop
    ctx->pc = 0x31df30u;
    // NOP
    // 0x31df34: 0x0  nop
    ctx->pc = 0x31df34u;
    // NOP
    // 0x31df38: 0xc096784  jal         func_259E10
    ctx->pc = 0x31DF38u;
    SET_GPR_U32(ctx, 31, 0x31DF40u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x31DF38u, 0x31DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF40u;
label_31df40:
    // 0x31df40: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x31df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x31df44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x31df44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31df48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31df48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31df4c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x31DF4Cu;
    SET_GPR_U32(ctx, 31, 0x31DF54u);
    ctx->pc = 0x31DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF4Cu;
    // 0x31df50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x31DF4Cu, 0x31DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF54u;
label_31df54:
    // 0x31df54: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x31df54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x31df58: 0x26840880  addiu       $a0, $s4, 0x880
    ctx->pc = 0x31df58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x31df5c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x31df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x31df60: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x31df60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31df64: 0xc0414ca  jal         func_105328
    ctx->pc = 0x31DF64u;
    SET_GPR_U32(ctx, 31, 0x31DF6Cu);
    ctx->pc = 0x31DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DF64u;
    // 0x31df68: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x31DF64u, 0x31DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DF6Cu;
label_31df6c:
    // 0x31df6c: 0x0  nop
    ctx->pc = 0x31df6cu;
    // NOP
label_31df70:
    // 0x31df70: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x31df70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x31df74: 0xc6810884  lwc1        $f1, 0x884($s4)
    ctx->pc = 0x31df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31df78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31df78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31df7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31df7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31df80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31df80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31df84: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x31df84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31df88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31df8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31df8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31df90: 0xe6800884  swc1        $f0, 0x884($s4)
    ctx->pc = 0x31df90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2180), bits); }
    // 0x31df94: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x31df94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x31df98: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x31df98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31df9c: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x31df9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31dfa0: 0xa68607f2  sh          $a2, 0x7F2($s4)
    ctx->pc = 0x31dfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x31dfa4: 0xa28507f5  sb          $a1, 0x7F5($s4)
    ctx->pc = 0x31dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x31dfa8: 0xae8407ec  sw          $a0, 0x7EC($s4)
    ctx->pc = 0x31dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 4));
    // 0x31dfac: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x31DFACu;
    {
        const bool branch_taken_0x31dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFACu;
        // 0x31dfb0: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfac) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31DFB4u;
    // 0x31dfb4: 0x0  nop
    ctx->pc = 0x31dfb4u;
    // NOP
label_31dfb8:
    // 0x31dfb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31dfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dfbc: 0x26850880  addiu       $a1, $s4, 0x880
    ctx->pc = 0x31dfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x31dfc0: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x31DFC0u;
    SET_GPR_U32(ctx, 31, 0x31DFC8u);
    ctx->pc = 0x31DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DFC0u;
    // 0x31dfc4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x31DFC0u, 0x31DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFC8u;
label_31dfc8:
    // 0x31dfc8: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x31dfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x31dfcc: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x31DFCCu;
    {
        const bool branch_taken_0x31dfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dfcc) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31DFD4u;
    // 0x31dfd4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dfd8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31dfdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31dfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31dfe0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x31dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x31dfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31dfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dfe8: 0x0  nop
    ctx->pc = 0x31dfe8u;
    // NOP
    // 0x31dfec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31dfecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31dff0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31dff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31DFF4u;
    {
        const bool branch_taken_0x31dff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31dff4) {
            ctx->pc = 0x31E00Cu;
            goto label_31e00c;
        }
    }
    ctx->pc = 0x31DFFCu;
    // 0x31dffc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31dffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e000: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31e000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31e004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31E004u;
    {
        const bool branch_taken_0x31e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E004u;
        // 0x31e008: 0xa6830828  sh          $v1, 0x828($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e004) {
            ctx->pc = 0x31E028u;
            goto label_31e028;
        }
    }
    ctx->pc = 0x31E00Cu;
label_31e00c:
    // 0x31e00c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31e00cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e010: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31e010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31e014: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e018: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31e018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31e01c: 0x0  nop
    ctx->pc = 0x31e01cu;
    // NOP
    // 0x31e020: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31e024: 0xa6830828  sh          $v1, 0x828($s4)
    ctx->pc = 0x31e024u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 3));
label_31e028:
    // 0x31e028: 0x26820090  addiu       $v0, $s4, 0x90
    ctx->pc = 0x31e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31e02c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x31e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x31e030: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x31e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x31e034: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x31e034u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x31e038: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x31e038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31e03c: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x31e03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x31e040: 0x26850880  addiu       $a1, $s4, 0x880
    ctx->pc = 0x31e040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x31e044: 0x26860870  addiu       $a2, $s4, 0x870
    ctx->pc = 0x31e044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    // 0x31e048: 0x7e822b30  sq          $v0, 0x2B30($s4)
    ctx->pc = 0x31e048u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 11056), GPR_VEC(ctx, 2));
    // 0x31e04c: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x31e04cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x31e050: 0xc0414d0  jal         func_105340
    ctx->pc = 0x31E050u;
    SET_GPR_U32(ctx, 31, 0x31E058u);
    ctx->pc = 0x31E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E050u;
    // 0x31e054: 0x7e820870  sq          $v0, 0x870($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 2160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x31E050u, 0x31E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E058u;
label_31e058:
    // 0x31e058: 0x26840890  addiu       $a0, $s4, 0x890
    ctx->pc = 0x31e058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x31e05c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x31e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31e060: 0x26860870  addiu       $a2, $s4, 0x870
    ctx->pc = 0x31e060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    // 0x31e064: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x31E064u;
    SET_GPR_U32(ctx, 31, 0x31E06Cu);
    ctx->pc = 0x31E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E064u;
    // 0x31e068: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x31E064u, 0x31E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E06Cu;
label_31e06c:
    // 0x31e06c: 0x26840890  addiu       $a0, $s4, 0x890
    ctx->pc = 0x31e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x31e070: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x31e070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31e074: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x31E074u;
    SET_GPR_U32(ctx, 31, 0x31E07Cu);
    ctx->pc = 0x31E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E074u;
    // 0x31e078: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x31E074u, 0x31E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E07Cu;
label_31e07c:
    // 0x31e07c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31e080: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31e080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31e084: 0xae83089c  sw          $v1, 0x89C($s4)
    ctx->pc = 0x31e084u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2204), GPR_U32(ctx, 3));
    // 0x31e088: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31e088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x31e08c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x31e08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x31e090: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31e094: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x31e094u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e098: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x31e098u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e09c: 0xa68607f2  sh          $a2, 0x7F2($s4)
    ctx->pc = 0x31e09cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x31e0a0: 0xa28507f5  sb          $a1, 0x7F5($s4)
    ctx->pc = 0x31e0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x31e0a4: 0xae8407ec  sw          $a0, 0x7EC($s4)
    ctx->pc = 0x31e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 4));
    // 0x31e0a8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x31E0A8u;
    {
        const bool branch_taken_0x31e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A8u;
        // 0x31e0ac: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0a8) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E0B0u;
label_31e0b0:
    // 0x31e0b0: 0x26840880  addiu       $a0, $s4, 0x880
    ctx->pc = 0x31e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x31e0b4: 0xc096988  jal         func_25A620
    ctx->pc = 0x31E0B4u;
    SET_GPR_U32(ctx, 31, 0x31E0BCu);
    ctx->pc = 0x31E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E0B4u;
    // 0x31e0b8: 0x26850870  addiu       $a1, $s4, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x31E0B4u, 0x31E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E0BCu;
label_31e0bc:
    // 0x31e0bc: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x31e0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x31e0c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31e0c4: 0x7a820880  lq          $v0, 0x880($s4)
    ctx->pc = 0x31e0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 2176)));
    // 0x31e0c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31e0cc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31e0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31e0d0: 0x26862b30  addiu       $a2, $s4, 0x2B30
    ctx->pc = 0x31e0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 11056));
    // 0x31e0d4: 0xc6830874  lwc1        $f3, 0x874($s4)
    ctx->pc = 0x31e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31e0d8: 0xc6800884  lwc1        $f0, 0x884($s4)
    ctx->pc = 0x31e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e0dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31e0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e0e0: 0x0  nop
    ctx->pc = 0x31e0e0u;
    // NOP
    // 0x31e0e4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31e0e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x31e0e8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x31e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x31e0ec: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31e0ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x31e0f0: 0x46020d03  div.s       $f20, $f1, $f2
    ctx->pc = 0x31e0f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x31e0f4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x31e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e0f8: 0x0  nop
    ctx->pc = 0x31e0f8u;
    // NOP
    // 0x31e0fc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x31e0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x31e100: 0xc0414d0  jal         func_105340
    ctx->pc = 0x31E100u;
    SET_GPR_U32(ctx, 31, 0x31E108u);
    ctx->pc = 0x31E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E100u;
    // 0x31e104: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x31E100u, 0x31E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E108u;
label_31e108:
    // 0x31e108: 0x26842b30  addiu       $a0, $s4, 0x2B30
    ctx->pc = 0x31e108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11056));
    // 0x31e10c: 0xc096988  jal         func_25A620
    ctx->pc = 0x31E10Cu;
    SET_GPR_U32(ctx, 31, 0x31E114u);
    ctx->pc = 0x31E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E10Cu;
    // 0x31e110: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x31E10Cu, 0x31E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E114u;
label_31e114:
    // 0x31e114: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x31e114u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x31e118: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31e118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31e11c: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x31E11Cu;
    SET_GPR_U32(ctx, 31, 0x31E124u);
    ctx->pc = 0x31E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E11Cu;
    // 0x31e120: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x31E11Cu, 0x31E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E124u;
label_31e124:
    // 0x31e124: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x31e124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31e128: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x31e128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31e12c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x31E12Cu;
    SET_GPR_U32(ctx, 31, 0x31E134u);
    ctx->pc = 0x31E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E12Cu;
    // 0x31e130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x31E12Cu, 0x31E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E134u;
label_31e134:
    // 0x31e134: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31e134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x31e138: 0x26842b30  addiu       $a0, $s4, 0x2B30
    ctx->pc = 0x31e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11056));
    // 0x31e13c: 0xc6810094  lwc1        $f1, 0x94($s4)
    ctx->pc = 0x31e13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e140: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e144: 0xc420c9a8  lwc1        $f0, -0x3658($at)
    ctx->pc = 0x31e144u;
    { uint32_t bits = FAST_READ32(0x67C9A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e148: 0x26860090  addiu       $a2, $s4, 0x90
    ctx->pc = 0x31e148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x31e14c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31e14cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31e150: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x31E150u;
    SET_GPR_U32(ctx, 31, 0x31E158u);
    ctx->pc = 0x31E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E150u;
    // 0x31e154: 0xe6800094  swc1        $f0, 0x94($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x31E150u, 0x31E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E158u;
label_31e158:
    // 0x31e158: 0x7a822b30  lq          $v0, 0x2B30($s4)
    ctx->pc = 0x31e158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 11056)));
    // 0x31e15c: 0x26840890  addiu       $a0, $s4, 0x890
    ctx->pc = 0x31e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x31e160: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x31e160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x31e164: 0xc096988  jal         func_25A620
    ctx->pc = 0x31E164u;
    SET_GPR_U32(ctx, 31, 0x31E16Cu);
    ctx->pc = 0x31E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E164u;
    // 0x31e168: 0x7e820020  sq          $v0, 0x20($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x31E164u, 0x31E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E16Cu;
label_31e16c:
    // 0x31e16c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x31e170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e174: 0x0  nop
    ctx->pc = 0x31e174u;
    // NOP
    // 0x31e178: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e17c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x31E17Cu;
    {
        const bool branch_taken_0x31e17c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E17Cu;
        // 0x31e180: 0x26840890  addiu       $a0, $s4, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e17c) {
            ctx->pc = 0x31E1C8u;
            goto label_31e1c8;
        }
    }
    ctx->pc = 0x31E184u;
    // 0x31e184: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x31E184u;
    SET_GPR_U32(ctx, 31, 0x31E18Cu);
    ctx->pc = 0x31E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E184u;
    // 0x31e188: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x31E184u, 0x31E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E18Cu;
label_31e18c:
    // 0x31e18c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x31e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x31e190: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31e194: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31e194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e198: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31e19c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e1a0: 0x0  nop
    ctx->pc = 0x31e1a0u;
    // NOP
    // 0x31e1a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31e1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31e1a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31e1a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x31e1ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e1acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31e1b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31e1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31e1b4: 0x0  nop
    ctx->pc = 0x31e1b4u;
    // NOP
    // 0x31e1b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31e1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31e1bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31e1bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31e1c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x31e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x31e1c4: 0xa68200c2  sh          $v0, 0xC2($s4)
    ctx->pc = 0x31e1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 2));
label_31e1c8:
    // 0x31e1c8: 0x26842b30  addiu       $a0, $s4, 0x2B30
    ctx->pc = 0x31e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11056));
    // 0x31e1cc: 0xc096988  jal         func_25A620
    ctx->pc = 0x31E1CCu;
    SET_GPR_U32(ctx, 31, 0x31E1D4u);
    ctx->pc = 0x31E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E1CCu;
    // 0x31e1d0: 0x26850890  addiu       $a1, $s4, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x31E1CCu, 0x31E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E1D4u;
label_31e1d4:
    // 0x31e1d4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x31e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x31e1d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e1dc: 0x0  nop
    ctx->pc = 0x31e1dcu;
    // NOP
    // 0x31e1e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e1e4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x31E1E4u;
    {
        const bool branch_taken_0x31e1e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1E4u;
        // 0x31e1e8: 0x26842b30  addiu       $a0, $s4, 0x2B30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1e4) {
            ctx->pc = 0x31E210u;
            goto label_31e210;
        }
    }
    ctx->pc = 0x31E1ECu;
    // 0x31e1ec: 0xc096988  jal         func_25A620
    ctx->pc = 0x31E1ECu;
    SET_GPR_U32(ctx, 31, 0x31E1F4u);
    ctx->pc = 0x31E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E1ECu;
    // 0x31e1f0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x31E1ECu, 0x31E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E1F4u;
label_31e1f4:
    // 0x31e1f4: 0x46140041  sub.s       $f1, $f0, $f20
    ctx->pc = 0x31e1f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x31e1f8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31e1fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e1fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e200: 0x0  nop
    ctx->pc = 0x31e200u;
    // NOP
    // 0x31e204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31e204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e208: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x31E208u;
    {
        const bool branch_taken_0x31e208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e208) {
            ctx->pc = 0x31E240u;
            goto label_31e240;
        }
    }
    ctx->pc = 0x31E210u;
label_31e210:
    // 0x31e210: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x31e210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x31e214: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e218: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31e21c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x31e21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31e220: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x31e220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31e224: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x31e224u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e228: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x31e228u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e22c: 0xa68607f2  sh          $a2, 0x7F2($s4)
    ctx->pc = 0x31e22cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x31e230: 0xa28507f5  sb          $a1, 0x7F5($s4)
    ctx->pc = 0x31e230u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x31e234: 0xae8407ec  sw          $a0, 0x7EC($s4)
    ctx->pc = 0x31e234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 4));
    // 0x31e238: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31E238u;
    {
        const bool branch_taken_0x31e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E238u;
        // 0x31e23c: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e238) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E240u;
label_31e240:
    // 0x31e240: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x31e240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x31e244: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31E244u;
    {
        const bool branch_taken_0x31e244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e244) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E24Cu;
    // 0x31e24c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x31e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x31e250: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x31e250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x31e254: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e258: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x31e258u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e25c: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x31e25cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e260: 0xa68507f2  sh          $a1, 0x7F2($s4)
    ctx->pc = 0x31e260u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x31e264: 0xa28407f5  sb          $a0, 0x7F5($s4)
    ctx->pc = 0x31e264u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x31e268: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31E268u;
    {
        const bool branch_taken_0x31e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E268u;
        // 0x31e26c: 0xae8307ec  sw          $v1, 0x7EC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e268) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E270u;
label_31e270:
    // 0x31e270: 0x96830824  lhu         $v1, 0x824($s4)
    ctx->pc = 0x31e270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2084)));
    // 0x31e274: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x31e274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31e278: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x31E278u;
    {
        const bool branch_taken_0x31e278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e278) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E280u;
    // 0x31e280: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31E280u;
    {
        const bool branch_taken_0x31e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E280u;
        // 0x31e284: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e280) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E288u;
label_31e288:
    // 0x31e288: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x31e288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x31e28c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31E28Cu;
    {
        const bool branch_taken_0x31e28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E28Cu;
        // 0x31e290: 0x26830090  addiu       $v1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e28c) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E294u;
    // 0x31e294: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x31e294u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x31e298: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x31e298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x31e29c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31E29Cu;
    {
        const bool branch_taken_0x31e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E29Cu;
        // 0x31e2a0: 0xa2830780  sb          $v1, 0x780($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e29c) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E2A4u;
    // 0x31e2a4: 0x0  nop
    ctx->pc = 0x31e2a4u;
    // NOP
label_31e2a8:
    // 0x31e2a8: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x31e2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x31e2ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E2ACu;
    {
        const bool branch_taken_0x31e2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2ACu;
        // 0x31e2b0: 0x26830090  addiu       $v1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2ac) {
            ctx->pc = 0x31E2C0u;
            goto label_31e2c0;
        }
    }
    ctx->pc = 0x31E2B4u;
    // 0x31e2b4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x31e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x31e2b8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x31e2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x31e2bc: 0xa2830780  sb          $v1, 0x780($s4)
    ctx->pc = 0x31e2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
label_31e2c0:
    // 0x31e2c0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E2C0u;
    {
        const bool branch_taken_0x31e2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2C0u;
        // 0x31e2c4: 0x26830090  addiu       $v1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2c0) {
            ctx->pc = 0x31E2D8u;
            goto label_31e2d8;
        }
    }
    ctx->pc = 0x31E2C8u;
    // 0x31e2c8: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x31e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x31e2cc: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x31e2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x31e2d0: 0xa2830780  sb          $v1, 0x780($s4)
    ctx->pc = 0x31e2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e2d4: 0x0  nop
    ctx->pc = 0x31e2d4u;
    // NOP
label_31e2d8:
    // 0x31e2d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31e2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e2dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31e2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e2e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e2e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31e2e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e2e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31e2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e2ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31e2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e2f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31e2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2F4u;
        // 0x31e2f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E2FCu;
}
