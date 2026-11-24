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

// Function: sub_0026AE30
// Address: 0x26ae30 - 0x26b094
void sub_0026AE30_0x26ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AE30_0x26ae30");
#endif

    switch (ctx->pc) {
        case 0x26ae30u: goto label_26ae30;
        case 0x26ae34u: goto label_26ae34;
        case 0x26ae38u: goto label_26ae38;
        case 0x26ae3cu: goto label_26ae3c;
        case 0x26ae40u: goto label_26ae40;
        case 0x26ae44u: goto label_26ae44;
        case 0x26ae48u: goto label_26ae48;
        case 0x26ae4cu: goto label_26ae4c;
        case 0x26ae50u: goto label_26ae50;
        case 0x26ae54u: goto label_26ae54;
        case 0x26ae58u: goto label_26ae58;
        case 0x26ae5cu: goto label_26ae5c;
        case 0x26ae60u: goto label_26ae60;
        case 0x26ae64u: goto label_26ae64;
        case 0x26ae68u: goto label_26ae68;
        case 0x26ae6cu: goto label_26ae6c;
        case 0x26ae70u: goto label_26ae70;
        case 0x26ae74u: goto label_26ae74;
        case 0x26ae78u: goto label_26ae78;
        case 0x26ae7cu: goto label_26ae7c;
        case 0x26ae80u: goto label_26ae80;
        case 0x26ae84u: goto label_26ae84;
        case 0x26ae88u: goto label_26ae88;
        case 0x26ae8cu: goto label_26ae8c;
        case 0x26ae90u: goto label_26ae90;
        case 0x26ae94u: goto label_26ae94;
        case 0x26ae98u: goto label_26ae98;
        case 0x26ae9cu: goto label_26ae9c;
        case 0x26aea0u: goto label_26aea0;
        case 0x26aea4u: goto label_26aea4;
        case 0x26aea8u: goto label_26aea8;
        case 0x26aeacu: goto label_26aeac;
        case 0x26aeb0u: goto label_26aeb0;
        case 0x26aeb4u: goto label_26aeb4;
        case 0x26aeb8u: goto label_26aeb8;
        case 0x26aebcu: goto label_26aebc;
        case 0x26aec0u: goto label_26aec0;
        case 0x26aec4u: goto label_26aec4;
        case 0x26aec8u: goto label_26aec8;
        case 0x26aeccu: goto label_26aecc;
        case 0x26aed0u: goto label_26aed0;
        case 0x26aed4u: goto label_26aed4;
        case 0x26aed8u: goto label_26aed8;
        case 0x26aedcu: goto label_26aedc;
        case 0x26aee0u: goto label_26aee0;
        case 0x26aee4u: goto label_26aee4;
        case 0x26aee8u: goto label_26aee8;
        case 0x26aeecu: goto label_26aeec;
        case 0x26aef0u: goto label_26aef0;
        case 0x26aef4u: goto label_26aef4;
        case 0x26aef8u: goto label_26aef8;
        case 0x26aefcu: goto label_26aefc;
        case 0x26af00u: goto label_26af00;
        case 0x26af04u: goto label_26af04;
        case 0x26af08u: goto label_26af08;
        case 0x26af0cu: goto label_26af0c;
        case 0x26af10u: goto label_26af10;
        case 0x26af14u: goto label_26af14;
        case 0x26af18u: goto label_26af18;
        case 0x26af1cu: goto label_26af1c;
        case 0x26af20u: goto label_26af20;
        case 0x26af24u: goto label_26af24;
        case 0x26af28u: goto label_26af28;
        case 0x26af2cu: goto label_26af2c;
        case 0x26af30u: goto label_26af30;
        case 0x26af34u: goto label_26af34;
        case 0x26af38u: goto label_26af38;
        case 0x26af3cu: goto label_26af3c;
        case 0x26af40u: goto label_26af40;
        case 0x26af44u: goto label_26af44;
        case 0x26af48u: goto label_26af48;
        case 0x26af4cu: goto label_26af4c;
        case 0x26af50u: goto label_26af50;
        case 0x26af54u: goto label_26af54;
        case 0x26af58u: goto label_26af58;
        case 0x26af5cu: goto label_26af5c;
        case 0x26af60u: goto label_26af60;
        case 0x26af64u: goto label_26af64;
        case 0x26af68u: goto label_26af68;
        case 0x26af6cu: goto label_26af6c;
        case 0x26af70u: goto label_26af70;
        case 0x26af74u: goto label_26af74;
        case 0x26af78u: goto label_26af78;
        case 0x26af7cu: goto label_26af7c;
        case 0x26af80u: goto label_26af80;
        case 0x26af84u: goto label_26af84;
        case 0x26af88u: goto label_26af88;
        case 0x26af8cu: goto label_26af8c;
        case 0x26af90u: goto label_26af90;
        case 0x26af94u: goto label_26af94;
        case 0x26af98u: goto label_26af98;
        case 0x26af9cu: goto label_26af9c;
        case 0x26afa0u: goto label_26afa0;
        case 0x26afa4u: goto label_26afa4;
        case 0x26afa8u: goto label_26afa8;
        case 0x26afacu: goto label_26afac;
        case 0x26afb0u: goto label_26afb0;
        case 0x26afb4u: goto label_26afb4;
        case 0x26afb8u: goto label_26afb8;
        case 0x26afbcu: goto label_26afbc;
        case 0x26afc0u: goto label_26afc0;
        case 0x26afc4u: goto label_26afc4;
        case 0x26afc8u: goto label_26afc8;
        case 0x26afccu: goto label_26afcc;
        case 0x26afd0u: goto label_26afd0;
        case 0x26afd4u: goto label_26afd4;
        case 0x26afd8u: goto label_26afd8;
        case 0x26afdcu: goto label_26afdc;
        case 0x26afe0u: goto label_26afe0;
        case 0x26afe4u: goto label_26afe4;
        case 0x26afe8u: goto label_26afe8;
        case 0x26afecu: goto label_26afec;
        case 0x26aff0u: goto label_26aff0;
        case 0x26aff4u: goto label_26aff4;
        case 0x26aff8u: goto label_26aff8;
        case 0x26affcu: goto label_26affc;
        case 0x26b000u: goto label_26b000;
        case 0x26b004u: goto label_26b004;
        case 0x26b008u: goto label_26b008;
        case 0x26b00cu: goto label_26b00c;
        case 0x26b010u: goto label_26b010;
        case 0x26b014u: goto label_26b014;
        case 0x26b018u: goto label_26b018;
        case 0x26b01cu: goto label_26b01c;
        case 0x26b020u: goto label_26b020;
        case 0x26b024u: goto label_26b024;
        case 0x26b028u: goto label_26b028;
        case 0x26b02cu: goto label_26b02c;
        case 0x26b030u: goto label_26b030;
        case 0x26b034u: goto label_26b034;
        case 0x26b038u: goto label_26b038;
        case 0x26b03cu: goto label_26b03c;
        case 0x26b040u: goto label_26b040;
        case 0x26b044u: goto label_26b044;
        case 0x26b048u: goto label_26b048;
        case 0x26b04cu: goto label_26b04c;
        case 0x26b050u: goto label_26b050;
        case 0x26b054u: goto label_26b054;
        case 0x26b058u: goto label_26b058;
        case 0x26b05cu: goto label_26b05c;
        case 0x26b060u: goto label_26b060;
        case 0x26b064u: goto label_26b064;
        case 0x26b068u: goto label_26b068;
        case 0x26b06cu: goto label_26b06c;
        case 0x26b070u: goto label_26b070;
        case 0x26b074u: goto label_26b074;
        case 0x26b078u: goto label_26b078;
        case 0x26b07cu: goto label_26b07c;
        case 0x26b080u: goto label_26b080;
        case 0x26b084u: goto label_26b084;
        case 0x26b088u: goto label_26b088;
        case 0x26b08cu: goto label_26b08c;
        case 0x26b090u: goto label_26b090;
        default: break;
    }

    ctx->pc = 0x26ae30u;

label_26ae30:
    // 0x26ae30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26ae34:
    // 0x26ae34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26ae34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_26ae38:
    // 0x26ae38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_26ae3c:
    // 0x26ae3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26ae40:
    // 0x26ae40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_26ae44:
    // 0x26ae44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26ae48:
    // 0x26ae48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26ae48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26ae4c:
    // 0x26ae4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26ae50:
    // 0x26ae50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26ae50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26ae54:
    // 0x26ae54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26ae58:
    // 0x26ae58: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26ae58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26ae5c:
    // 0x26ae5c: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x26ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_26ae60:
    // 0x26ae60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26ae64:
    // 0x26ae64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26ae68:
    if (ctx->pc == 0x26AE68u) {
        ctx->pc = 0x26AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE64u;
        // 0x26ae68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE6Cu;
        goto label_26ae6c;
    }
    ctx->pc = 0x26AE64u;
    {
        const bool branch_taken_0x26ae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE64u;
        // 0x26ae68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae64) {
            ctx->pc = 0x26AE78u;
            goto label_26ae78;
        }
    }
    ctx->pc = 0x26AE6Cu;
label_26ae6c:
    // 0x26ae6c: 0x10000082  b           . + 4 + (0x82 << 2)
label_26ae70:
    if (ctx->pc == 0x26AE70u) {
        ctx->pc = 0x26AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE6Cu;
        // 0x26ae70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE74u;
        goto label_26ae74;
    }
    ctx->pc = 0x26AE6Cu;
    {
        const bool branch_taken_0x26ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE6Cu;
        // 0x26ae70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae6c) {
            ctx->pc = 0x26B078u;
            goto label_26b078;
        }
    }
    ctx->pc = 0x26AE74u;
label_26ae74:
    // 0x26ae74: 0x0  nop
    ctx->pc = 0x26ae74u;
    // NOP
label_26ae78:
    // 0x26ae78: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x26ae78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_26ae7c:
    // 0x26ae7c: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x26ae7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_26ae80:
    // 0x26ae80: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x26ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_26ae84:
    // 0x26ae84: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x26ae84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_26ae88:
    // 0x26ae88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26ae8c:
    // 0x26ae8c: 0xc09a4e4  jal         func_269390
label_26ae90:
    if (ctx->pc == 0x26AE90u) {
        ctx->pc = 0x26AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE8Cu;
        // 0x26ae90: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE94u;
        goto label_26ae94;
    }
    ctx->pc = 0x26AE8Cu;
    SET_GPR_U32(ctx, 31, 0x26AE94u);
    ctx->pc = 0x26AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE8Cu;
    // 0x26ae90: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269390u, 0x26AE8Cu, 0x26AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE94u;
label_26ae94:
    // 0x26ae94: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x26ae94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_26ae98:
    // 0x26ae98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_26ae9c:
    if (ctx->pc == 0x26AE9Cu) {
        ctx->pc = 0x26AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE98u;
        // 0x26ae9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AEA0u;
        goto label_26aea0;
    }
    ctx->pc = 0x26AE98u;
    {
        const bool branch_taken_0x26ae98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE98u;
        // 0x26ae9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae98) {
            ctx->pc = 0x26AEA8u;
            goto label_26aea8;
        }
    }
    ctx->pc = 0x26AEA0u;
label_26aea0:
    // 0x26aea0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_26aea4:
    if (ctx->pc == 0x26AEA4u) {
        ctx->pc = 0x26AEA8u;
        goto label_26aea8;
    }
    ctx->pc = 0x26AEA0u;
    {
        const bool branch_taken_0x26aea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26aea0) {
            ctx->pc = 0x26AF08u;
            goto label_26af08;
        }
    }
    ctx->pc = 0x26AEA8u;
label_26aea8:
    // 0x26aea8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26aeac:
    // 0x26aeac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x26aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26aeb0:
    // 0x26aeb0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x26aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_26aeb4:
    // 0x26aeb4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x26aeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_26aeb8:
    // 0x26aeb8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x26aeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_26aebc:
    // 0x26aebc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26aebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26aec0:
    // 0x26aec0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x26aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_26aec4:
    // 0x26aec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26aec8:
    // 0x26aec8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x26aec8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_26aecc:
    // 0x26aecc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26aeccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_26aed0:
    // 0x26aed0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26aed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26aed4:
    // 0x26aed4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26aed8:
    if (ctx->pc == 0x26AED8u) {
        ctx->pc = 0x26AEDCu;
        goto label_26aedc;
    }
    ctx->pc = 0x26AED4u;
    {
        const bool branch_taken_0x26aed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aed4) {
            ctx->pc = 0x26AEECu;
            goto label_26aeec;
        }
    }
    ctx->pc = 0x26AEDCu;
label_26aedc:
    // 0x26aedc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26aedcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26aee0:
    // 0x26aee0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26aee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26aee4:
    // 0x26aee4: 0x10000008  b           . + 4 + (0x8 << 2)
label_26aee8:
    if (ctx->pc == 0x26AEE8u) {
        ctx->pc = 0x26AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEE4u;
        // 0x26aee8: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AEECu;
        goto label_26aeec;
    }
    ctx->pc = 0x26AEE4u;
    {
        const bool branch_taken_0x26aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEE4u;
        // 0x26aee8: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aee4) {
            ctx->pc = 0x26AF08u;
            goto label_26af08;
        }
    }
    ctx->pc = 0x26AEECu;
label_26aeec:
    // 0x26aeec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26aeecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26aef0:
    // 0x26aef0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26aef4:
    // 0x26aef4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26aef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26aef8:
    // 0x26aef8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26aef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26aefc:
    // 0x26aefc: 0x0  nop
    ctx->pc = 0x26aefcu;
    // NOP
label_26af00:
    // 0x26af00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26af00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26af04:
    // 0x26af04: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x26af04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26af08:
    // 0x26af08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26af0c:
    // 0x26af0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26af10:
    // 0x26af10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x26af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26af14:
    // 0x26af14: 0xc09a98c  jal         func_26A630
label_26af18:
    if (ctx->pc == 0x26AF18u) {
        ctx->pc = 0x26AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF14u;
        // 0x26af18: 0x27a7007e  addiu       $a3, $sp, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF1Cu;
        goto label_26af1c;
    }
    ctx->pc = 0x26AF14u;
    SET_GPR_U32(ctx, 31, 0x26AF1Cu);
    ctx->pc = 0x26AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF14u;
    // 0x26af18: 0x27a7007e  addiu       $a3, $sp, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A630u, 0x26AF14u, 0x26AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF1Cu;
label_26af1c:
    // 0x26af1c: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x26af1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_26af20:
    // 0x26af20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26af20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26af24:
    // 0x26af24: 0xc0b2ebc  jal         func_2CBAF0
label_26af28:
    if (ctx->pc == 0x26AF28u) {
        ctx->pc = 0x26AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF24u;
        // 0x26af28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF2Cu;
        goto label_26af2c;
    }
    ctx->pc = 0x26AF24u;
    SET_GPR_U32(ctx, 31, 0x26AF2Cu);
    ctx->pc = 0x26AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF24u;
    // 0x26af28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x26AF24u, 0x26AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF2Cu;
label_26af2c:
    // 0x26af2c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_26af30:
    if (ctx->pc == 0x26AF30u) {
        ctx->pc = 0x26AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF2Cu;
        // 0x26af30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF34u;
        goto label_26af34;
    }
    ctx->pc = 0x26AF2Cu;
    {
        const bool branch_taken_0x26af2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF2Cu;
        // 0x26af30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af2c) {
            ctx->pc = 0x26AFD0u;
            goto label_26afd0;
        }
    }
    ctx->pc = 0x26AF34u;
label_26af34:
    // 0x26af34: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26af38:
    // 0x26af38: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x26af38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_26af3c:
    // 0x26af3c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26af40:
    // 0x26af40: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x26af40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_26af44:
    // 0x26af44: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26af44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26af48:
    // 0x26af48: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x26af48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_26af4c:
    // 0x26af4c: 0x87a2007e  lh          $v0, 0x7E($sp)
    ctx->pc = 0x26af4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_26af50:
    // 0x26af50: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x26af50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_26af54:
    // 0x26af54: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x26af54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_26af58:
    // 0x26af58: 0xa20207d8  sb          $v0, 0x7D8($s0)
    ctx->pc = 0x26af58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 2));
label_26af5c:
    // 0x26af5c: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x26af5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_26af60:
    // 0x26af60: 0xa20207d9  sb          $v0, 0x7D9($s0)
    ctx->pc = 0x26af60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 2));
label_26af64:
    // 0x26af64: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x26af64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_26af68:
    // 0x26af68: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_26af6c:
    if (ctx->pc == 0x26AF6Cu) {
        ctx->pc = 0x26AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF68u;
        // 0x26af6c: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF70u;
        goto label_26af70;
    }
    ctx->pc = 0x26AF68u;
    {
        const bool branch_taken_0x26af68 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x26AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF68u;
        // 0x26af6c: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af68) {
            ctx->pc = 0x26AF80u;
            goto label_26af80;
        }
    }
    ctx->pc = 0x26AF70u;
label_26af70:
    // 0x26af70: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x26af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
label_26af74:
    // 0x26af74: 0xae0208d8  sw          $v0, 0x8D8($s0)
    ctx->pc = 0x26af74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 2));
label_26af78:
    // 0x26af78: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x26af78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_26af7c:
    // 0x26af7c: 0xae0208dc  sw          $v0, 0x8DC($s0)
    ctx->pc = 0x26af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2268), GPR_U32(ctx, 2));
label_26af80:
    // 0x26af80: 0x86650016  lh          $a1, 0x16($s3)
    ctx->pc = 0x26af80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_26af84:
    // 0x26af84: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_26af88:
    if (ctx->pc == 0x26AF88u) {
        ctx->pc = 0x26AF8Cu;
        goto label_26af8c;
    }
    ctx->pc = 0x26AF84u;
    {
        const bool branch_taken_0x26af84 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x26af84) {
            ctx->pc = 0x26AFA0u;
            goto label_26afa0;
        }
    }
    ctx->pc = 0x26AF8Cu;
label_26af8c:
    // 0x26af8c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x26af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26af90:
    // 0x26af90: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x26af90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_26af94:
    // 0x26af94: 0xc0e360c  jal         func_38D830
label_26af98:
    if (ctx->pc == 0x26AF98u) {
        ctx->pc = 0x26AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF94u;
        // 0x26af98: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AF9Cu;
        goto label_26af9c;
    }
    ctx->pc = 0x26AF94u;
    SET_GPR_U32(ctx, 31, 0x26AF9Cu);
    ctx->pc = 0x26AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF94u;
    // 0x26af98: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x26AF94u, 0x26AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF9Cu;
label_26af9c:
    // 0x26af9c: 0x0  nop
    ctx->pc = 0x26af9cu;
    // NOP
label_26afa0:
    // 0x26afa0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_26afa4:
    // 0x26afa4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x26afa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_26afa8:
    // 0x26afa8: 0x320f809  jalr        $t9
label_26afac:
    if (ctx->pc == 0x26AFACu) {
        ctx->pc = 0x26AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFA8u;
        // 0x26afac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFB0u;
        goto label_26afb0;
    }
    ctx->pc = 0x26AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26AFB0u);
        ctx->pc = 0x26AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFA8u;
        // 0x26afac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFA8u, 0x26AFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AFB0u;
label_26afb0:
    // 0x26afb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26afb4:
    // 0x26afb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26afb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26afb8:
    // 0x26afb8: 0xa2050640  sb          $a1, 0x640($s0)
    ctx->pc = 0x26afb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 5));
label_26afbc:
    // 0x26afbc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x26afbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26afc0:
    // 0x26afc0: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x26afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
label_26afc4:
    // 0x26afc4: 0x10000004  b           . + 4 + (0x4 << 2)
label_26afc8:
    if (ctx->pc == 0x26AFC8u) {
        ctx->pc = 0x26AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFC4u;
        // 0x26afc8: 0xae0700dc  sw          $a3, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFCCu;
        goto label_26afcc;
    }
    ctx->pc = 0x26AFC4u;
    {
        const bool branch_taken_0x26afc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFC4u;
        // 0x26afc8: 0xae0700dc  sw          $a3, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afc4) {
            ctx->pc = 0x26AFD8u;
            goto label_26afd8;
        }
    }
    ctx->pc = 0x26AFCCu;
label_26afcc:
    // 0x26afcc: 0x0  nop
    ctx->pc = 0x26afccu;
    // NOP
label_26afd0:
    // 0x26afd0: 0x10000029  b           . + 4 + (0x29 << 2)
label_26afd4:
    if (ctx->pc == 0x26AFD4u) {
        ctx->pc = 0x26AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFD0u;
        // 0x26afd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFD8u;
        goto label_26afd8;
    }
    ctx->pc = 0x26AFD0u;
    {
        const bool branch_taken_0x26afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFD0u;
        // 0x26afd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afd0) {
            ctx->pc = 0x26B078u;
            goto label_26b078;
        }
    }
    ctx->pc = 0x26AFD8u;
label_26afd8:
    // 0x26afd8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x26afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_26afdc:
    // 0x26afdc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_26afe0:
    if (ctx->pc == 0x26AFE0u) {
        ctx->pc = 0x26AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFDCu;
        // 0x26afe0: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFE4u;
        goto label_26afe4;
    }
    ctx->pc = 0x26AFDCu;
    {
        const bool branch_taken_0x26afdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFDCu;
        // 0x26afe0: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afdc) {
            ctx->pc = 0x26B058u;
            goto label_26b058;
        }
    }
    ctx->pc = 0x26AFE4u;
label_26afe4:
    // 0x26afe4: 0x90222cb4  lbu         $v0, 0x2CB4($at)
    ctx->pc = 0x26afe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11444)));
label_26afe8:
    // 0x26afe8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_26afec:
    if (ctx->pc == 0x26AFECu) {
        ctx->pc = 0x26AFF0u;
        goto label_26aff0;
    }
    ctx->pc = 0x26AFE8u;
    {
        const bool branch_taken_0x26afe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26afe8) {
            ctx->pc = 0x26B058u;
            goto label_26b058;
        }
    }
    ctx->pc = 0x26AFF0u;
label_26aff0:
    // 0x26aff0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_26aff4:
    if (ctx->pc == 0x26AFF4u) {
        ctx->pc = 0x26AFF8u;
        goto label_26aff8;
    }
    ctx->pc = 0x26AFF0u;
    {
        const bool branch_taken_0x26aff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aff0) {
            ctx->pc = 0x26B058u;
            goto label_26b058;
        }
    }
    ctx->pc = 0x26AFF8u;
label_26aff8:
    // 0x26aff8: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x26aff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_26affc:
    // 0x26affc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26b000:
    // 0x26b000: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_26b004:
    if (ctx->pc == 0x26B004u) {
        ctx->pc = 0x26B008u;
        goto label_26b008;
    }
    ctx->pc = 0x26B000u;
    {
        const bool branch_taken_0x26b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x26b000) {
            ctx->pc = 0x26B050u;
            goto label_26b050;
        }
    }
    ctx->pc = 0x26B008u;
label_26b008:
    // 0x26b008: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_26b00c:
    if (ctx->pc == 0x26B00Cu) {
        ctx->pc = 0x26B010u;
        goto label_26b010;
    }
    ctx->pc = 0x26B008u;
    {
        const bool branch_taken_0x26b008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x26b008) {
            ctx->pc = 0x26B030u;
            goto label_26b030;
        }
    }
    ctx->pc = 0x26B010u;
label_26b010:
    // 0x26b010: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
label_26b014:
    if (ctx->pc == 0x26B014u) {
        ctx->pc = 0x26B018u;
        goto label_26b018;
    }
    ctx->pc = 0x26B010u;
    {
        const bool branch_taken_0x26b010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x26b010) {
            ctx->pc = 0x26B030u;
            goto label_26b030;
        }
    }
    ctx->pc = 0x26B018u;
label_26b018:
    // 0x26b018: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_26b01c:
    if (ctx->pc == 0x26B01Cu) {
        ctx->pc = 0x26B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B018u;
        // 0x26b01c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B020u;
        goto label_26b020;
    }
    ctx->pc = 0x26B018u;
    {
        const bool branch_taken_0x26b018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B018u;
        // 0x26b01c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b018) {
            ctx->pc = 0x26B030u;
            goto label_26b030;
        }
    }
    ctx->pc = 0x26B020u;
label_26b020:
    // 0x26b020: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_26b024:
    if (ctx->pc == 0x26B024u) {
        ctx->pc = 0x26B028u;
        goto label_26b028;
    }
    ctx->pc = 0x26B020u;
    {
        const bool branch_taken_0x26b020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b020) {
            ctx->pc = 0x26B058u;
            goto label_26b058;
        }
    }
    ctx->pc = 0x26B028u;
label_26b028:
    // 0x26b028: 0x1000000b  b           . + 4 + (0xB << 2)
label_26b02c:
    if (ctx->pc == 0x26B02Cu) {
        ctx->pc = 0x26B030u;
        goto label_26b030;
    }
    ctx->pc = 0x26B028u;
    {
        const bool branch_taken_0x26b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b028) {
            ctx->pc = 0x26B058u;
            goto label_26b058;
        }
    }
    ctx->pc = 0x26B030u;
label_26b030:
    // 0x26b030: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26b034:
    // 0x26b034: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26b038:
    // 0x26b038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26b038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b03c:
    // 0x26b03c: 0xc0b6b28  jal         func_2DACA0
label_26b040:
    if (ctx->pc == 0x26B040u) {
        ctx->pc = 0x26B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B03Cu;
        // 0x26b040: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B044u;
        goto label_26b044;
    }
    ctx->pc = 0x26B03Cu;
    SET_GPR_U32(ctx, 31, 0x26B044u);
    ctx->pc = 0x26B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B03Cu;
    // 0x26b040: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x26B03Cu, 0x26B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B044u;
label_26b044:
    // 0x26b044: 0x10000004  b           . + 4 + (0x4 << 2)
label_26b048:
    if (ctx->pc == 0x26B048u) {
        ctx->pc = 0x26B04Cu;
        goto label_26b04c;
    }
    ctx->pc = 0x26B044u;
    {
        const bool branch_taken_0x26b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b044) {
            ctx->pc = 0x26B058u;
            goto label_26b058;
        }
    }
    ctx->pc = 0x26B04Cu;
label_26b04c:
    // 0x26b04c: 0x0  nop
    ctx->pc = 0x26b04cu;
    // NOP
label_26b050:
    // 0x26b050: 0xc0b6b28  jal         func_2DACA0
label_26b054:
    if (ctx->pc == 0x26B054u) {
        ctx->pc = 0x26B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B050u;
        // 0x26b054: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B058u;
        goto label_26b058;
    }
    ctx->pc = 0x26B050u;
    SET_GPR_U32(ctx, 31, 0x26B058u);
    ctx->pc = 0x26B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B050u;
    // 0x26b054: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x26B050u, 0x26B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B058u;
label_26b058:
    // 0x26b058: 0x92680008  lbu         $t0, 0x8($s3)
    ctx->pc = 0x26b058u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_26b05c:
    // 0x26b05c: 0x92660007  lbu         $a2, 0x7($s3)
    ctx->pc = 0x26b05cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_26b060:
    // 0x26b060: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_26b064:
    // 0x26b064: 0x92670009  lbu         $a3, 0x9($s3)
    ctx->pc = 0x26b064u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_26b068:
    // 0x26b068: 0xc0b273c  jal         func_2C9CF0
label_26b06c:
    if (ctx->pc == 0x26B06Cu) {
        ctx->pc = 0x26B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B068u;
        // 0x26b06c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B070u;
        goto label_26b070;
    }
    ctx->pc = 0x26B068u;
    SET_GPR_U32(ctx, 31, 0x26B070u);
    ctx->pc = 0x26B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B068u;
    // 0x26b06c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x26B068u, 0x26B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B070u;
label_26b070:
    // 0x26b070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26b070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b074:
    // 0x26b074: 0x0  nop
    ctx->pc = 0x26b074u;
    // NOP
label_26b078:
    // 0x26b078: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26b078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26b07c:
    // 0x26b07c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26b07cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26b080:
    // 0x26b080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26b084:
    // 0x26b084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b088:
    // 0x26b088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26b08c:
    // 0x26b08c: 0x3e00008  jr          $ra
label_26b090:
    if (ctx->pc == 0x26B090u) {
        ctx->pc = 0x26B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B08Cu;
        // 0x26b090: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B094u;
        goto label_fallthrough_0x26b08c;
    }
    ctx->pc = 0x26B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B08Cu;
        // 0x26b090: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26b08c:
    ctx->pc = 0x26B094u;
}
