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

// Function: sub_00308DA0
// Address: 0x308da0 - 0x30a7b8
void sub_00308DA0_0x308da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308DA0_0x308da0");
#endif

    switch (ctx->pc) {
        case 0x308ddcu: goto label_308ddc;
        case 0x308e38u: goto label_308e38;
        case 0x308f00u: goto label_308f00;
        case 0x308f34u: goto label_308f34;
        case 0x308f70u: goto label_308f70;
        case 0x308facu: goto label_308fac;
        case 0x308fd8u: goto label_308fd8;
        case 0x308ff0u: goto label_308ff0;
        case 0x309064u: goto label_309064;
        case 0x30914cu: goto label_30914c;
        case 0x309180u: goto label_309180;
        case 0x309228u: goto label_309228;
        case 0x309268u: goto label_309268;
        case 0x3092a4u: goto label_3092a4;
        case 0x3092d0u: goto label_3092d0;
        case 0x3092e8u: goto label_3092e8;
        case 0x3093d8u: goto label_3093d8;
        case 0x309480u: goto label_309480;
        case 0x3094c8u: goto label_3094c8;
        case 0x3094e0u: goto label_3094e0;
        case 0x3094f4u: goto label_3094f4;
        case 0x30950cu: goto label_30950c;
        case 0x309518u: goto label_309518;
        case 0x309564u: goto label_309564;
        case 0x309570u: goto label_309570;
        case 0x309584u: goto label_309584;
        case 0x3095b4u: goto label_3095b4;
        case 0x3095f4u: goto label_3095f4;
        case 0x309620u: goto label_309620;
        case 0x309638u: goto label_309638;
        case 0x309698u: goto label_309698;
        case 0x309740u: goto label_309740;
        case 0x309778u: goto label_309778;
        case 0x309790u: goto label_309790;
        case 0x3097a4u: goto label_3097a4;
        case 0x3097bcu: goto label_3097bc;
        case 0x3097c8u: goto label_3097c8;
        case 0x3097f4u: goto label_3097f4;
        case 0x309808u: goto label_309808;
        case 0x309814u: goto label_309814;
        case 0x309820u: goto label_309820;
        case 0x3098f4u: goto label_3098f4;
        case 0x309920u: goto label_309920;
        case 0x309938u: goto label_309938;
        case 0x3099b8u: goto label_3099b8;
        case 0x309a60u: goto label_309a60;
        case 0x309a98u: goto label_309a98;
        case 0x309ab0u: goto label_309ab0;
        case 0x309ac4u: goto label_309ac4;
        case 0x309adcu: goto label_309adc;
        case 0x309ae8u: goto label_309ae8;
        case 0x309b14u: goto label_309b14;
        case 0x309b28u: goto label_309b28;
        case 0x309b34u: goto label_309b34;
        case 0x309b40u: goto label_309b40;
        case 0x309bc4u: goto label_309bc4;
        case 0x309bfcu: goto label_309bfc;
        case 0x309cc4u: goto label_309cc4;
        case 0x309cf8u: goto label_309cf8;
        case 0x309d08u: goto label_309d08;
        case 0x309db0u: goto label_309db0;
        case 0x309de8u: goto label_309de8;
        case 0x309e00u: goto label_309e00;
        case 0x309e14u: goto label_309e14;
        case 0x309e2cu: goto label_309e2c;
        case 0x309e38u: goto label_309e38;
        case 0x309e64u: goto label_309e64;
        case 0x309e78u: goto label_309e78;
        case 0x309e84u: goto label_309e84;
        case 0x309e90u: goto label_309e90;
        case 0x309eb8u: goto label_309eb8;
        case 0x309ee4u: goto label_309ee4;
        case 0x309f5cu: goto label_309f5c;
        case 0x309f9cu: goto label_309f9c;
        case 0x309fc0u: goto label_309fc0;
        case 0x309fd8u: goto label_309fd8;
        case 0x30a100u: goto label_30a100;
        case 0x30a1a8u: goto label_30a1a8;
        case 0x30a1e0u: goto label_30a1e0;
        case 0x30a1f8u: goto label_30a1f8;
        case 0x30a20cu: goto label_30a20c;
        case 0x30a224u: goto label_30a224;
        case 0x30a230u: goto label_30a230;
        case 0x30a25cu: goto label_30a25c;
        case 0x30a270u: goto label_30a270;
        case 0x30a27cu: goto label_30a27c;
        case 0x30a288u: goto label_30a288;
        case 0x30a2b0u: goto label_30a2b0;
        case 0x30a2f8u: goto label_30a2f8;
        case 0x30a30cu: goto label_30a30c;
        case 0x30a320u: goto label_30a320;
        case 0x30a354u: goto label_30a354;
        case 0x30a48cu: goto label_30a48c;
        case 0x30a4e4u: goto label_30a4e4;
        case 0x30a4f0u: goto label_30a4f0;
        case 0x30a4fcu: goto label_30a4fc;
        case 0x30a508u: goto label_30a508;
        case 0x30a56cu: goto label_30a56c;
        case 0x30a5f8u: goto label_30a5f8;
        case 0x30a6a0u: goto label_30a6a0;
        case 0x30a6d8u: goto label_30a6d8;
        case 0x30a6f0u: goto label_30a6f0;
        case 0x30a704u: goto label_30a704;
        case 0x30a71cu: goto label_30a71c;
        case 0x30a728u: goto label_30a728;
        case 0x30a754u: goto label_30a754;
        case 0x30a768u: goto label_30a768;
        case 0x30a774u: goto label_30a774;
        case 0x30a780u: goto label_30a780;
        default: break;
    }

    ctx->pc = 0x308da0u;

    // 0x308da0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x308da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x308da4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x308da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x308da8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x308da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x308dac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x308dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x308db0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x308db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x308db4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x308db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x308db8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x308db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x308dbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x308dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x308dc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x308dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x308dc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x308dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308dcc: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x308dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x308dd0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x308dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x308dd4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x308DD4u;
    SET_GPR_U32(ctx, 31, 0x308DDCu);
    ctx->pc = 0x308DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308DD4u;
    // 0x308dd8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x308DD4u, 0x308DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308DDCu;
label_308ddc:
    // 0x308ddc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x308DDCu;
    {
        const bool branch_taken_0x308ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ddc) {
            ctx->pc = 0x308DF8u;
            goto label_308df8;
        }
    }
    ctx->pc = 0x308DE4u;
    // 0x308de4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x308de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x308de8: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x308de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x308dec: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x308decu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x308df0: 0x7e030550  sq          $v1, 0x550($s0)
    ctx->pc = 0x308df0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 3));
    // 0x308df4: 0x0  nop
    ctx->pc = 0x308df4u;
    // NOP
label_308df8:
    // 0x308df8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x308df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x308dfc: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x308dfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x308e00: 0x10200663  beqz        $at, . + 4 + (0x663 << 2)
    ctx->pc = 0x308E00u;
    {
        const bool branch_taken_0x308e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E00u;
        // 0x308e04: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e00) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x308E08u;
    // 0x308e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308e0c: 0x2484c910  addiu       $a0, $a0, -0x36F0
    ctx->pc = 0x308e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953232));
    // 0x308e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x308e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x308e14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x308e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308e18: 0x600008  jr          $v1
    ctx->pc = 0x308E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308E20u: goto label_308e20;
            case 0x308F40u: goto label_308f40;
            case 0x308F60u: goto label_308f60;
            case 0x309258u: goto label_309258;
            case 0x3094B0u: goto label_3094b0;
            case 0x3095C0u: goto label_3095c0;
            case 0x309838u: goto label_309838;
            case 0x309B58u: goto label_309b58;
            case 0x309EA8u: goto label_309ea8;
            case 0x30A2A0u: goto label_30a2a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308E20u;
label_308e20:
    // 0x308e20: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x308E20u;
    {
        const bool branch_taken_0x308e20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E20u;
        // 0x308e24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e20) {
            ctx->pc = 0x308F28u;
            goto label_308f28;
        }
    }
    ctx->pc = 0x308E28u;
    // 0x308e28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x308e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x308e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e30: 0x27b10208  addiu       $s1, $sp, 0x208
    ctx->pc = 0x308e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x308e34: 0x0  nop
    ctx->pc = 0x308e34u;
    // NOP
label_308e38:
    // 0x308e38: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x308e38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x308e3c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x308e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x308e40: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x308e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x308e44: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x308e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x308e48: 0x1337c2  srl         $a2, $s3, 31
    ctx->pc = 0x308e48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x308e4c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x308e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x308e50: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x308e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x308e54: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x308e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
    // 0x308e58: 0x860305a4  lh          $v1, 0x5A4($s0)
    ctx->pc = 0x308e58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x308e5c: 0x2810  mfhi        $a1
    ctx->pc = 0x308e5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x308e60: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x308e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x308e64: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x308e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308e68: 0x2442c8f0  addiu       $v0, $v0, -0x3710
    ctx->pc = 0x308e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953200));
    // 0x308e6c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x308e6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x308e70: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x308e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x308e74: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x308e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308e78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308e7c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x308e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x308e80: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x308e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x308e84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x308e84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x308e88: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x308e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x308e8c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x308e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x308e90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308e94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x308e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x308e98: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x308e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308e9c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x308e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x308ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x308ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x308ea4: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x308ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x308ea8: 0x860305a4  lh          $v1, 0x5A4($s0)
    ctx->pc = 0x308ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x308eac: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x308eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308eb0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x308eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308eb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x308eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x308eb8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x308eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x308ebc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x308ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x308ec0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x308ec0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x308ec4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x308ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x308ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308ecc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x308eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x308ed0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x308ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308ed4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x308ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x308ed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x308ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x308edc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x308edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x308ee0: 0x920305a9  lbu         $v1, 0x5A9($s0)
    ctx->pc = 0x308ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1449)));
    // 0x308ee4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x308ee4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x308ee8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x308ee8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x308eec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x308eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x308ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308ef4: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x308ef4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308ef8: 0xc0a9c60  jal         func_2A7180
    ctx->pc = 0x308EF8u;
    SET_GPR_U32(ctx, 31, 0x308F00u);
    ctx->pc = 0x308EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308EF8u;
    // 0x308efc: 0x27a70200  addiu       $a3, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7180u, 0x308EF8u, 0x308F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F00u;
label_308f00:
    // 0x308f00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x308f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x308f04: 0xae420570  sw          $v0, 0x570($s2)
    ctx->pc = 0x308f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1392), GPR_U32(ctx, 2));
    // 0x308f08: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x308f08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x308f0c: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x308f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x308f10: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x308F10u;
    {
        const bool branch_taken_0x308f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F10u;
        // 0x308f14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f10) {
            ctx->pc = 0x308E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308e38;
        }
    }
    ctx->pc = 0x308F18u;
    // 0x308f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f1c: 0x1000061c  b           . + 4 + (0x61C << 2)
    ctx->pc = 0x308F1Cu;
    {
        const bool branch_taken_0x308f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F1Cu;
        // 0x308f20: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f1c) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x308F24u;
    // 0x308f24: 0x0  nop
    ctx->pc = 0x308f24u;
    // NOP
label_308f28:
    // 0x308f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f2c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x308F2Cu;
    SET_GPR_U32(ctx, 31, 0x308F34u);
    ctx->pc = 0x308F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F2Cu;
    // 0x308f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x308F2Cu, 0x308F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F34u;
label_308f34:
    // 0x308f34: 0x10000616  b           . + 4 + (0x616 << 2)
    ctx->pc = 0x308F34u;
    {
        const bool branch_taken_0x308f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f34) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x308F3Cu;
    // 0x308f3c: 0x0  nop
    ctx->pc = 0x308f3cu;
    // NOP
label_308f40:
    // 0x308f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x308f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308f44: 0xa2030521  sb          $v1, 0x521($s0)
    ctx->pc = 0x308f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x308f48: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x308f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x308f4c: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x308f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x308f50: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x308f50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x308f54: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x308f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x308f58: 0x1000060d  b           . + 4 + (0x60D << 2)
    ctx->pc = 0x308F58u;
    {
        const bool branch_taken_0x308f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F58u;
        // 0x308f5c: 0xa2000515  sb          $zero, 0x515($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f58) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x308F60u;
label_308f60:
    // 0x308f60: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x308F60u;
    {
        const bool branch_taken_0x308f60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x308F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F60u;
        // 0x308f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f60) {
            ctx->pc = 0x308F78u;
            goto label_308f78;
        }
    }
    ctx->pc = 0x308F68u;
    // 0x308f68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x308F68u;
    SET_GPR_U32(ctx, 31, 0x308F70u);
    ctx->pc = 0x308F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F68u;
    // 0x308f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x308F68u, 0x308F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F70u;
label_308f70:
    // 0x308f70: 0x10000607  b           . + 4 + (0x607 << 2)
    ctx->pc = 0x308F70u;
    {
        const bool branch_taken_0x308f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f70) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x308F78u;
label_308f78:
    // 0x308f78: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x308f78u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x308f7c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x308f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x308f80: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x308f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x308f84: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x308f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x308f88: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x308f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x308f8c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x308f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308f90: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x308f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x308f94: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x308f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x308f98: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x308f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x308f9c: 0x7fa701f0  sq          $a3, 0x1F0($sp)
    ctx->pc = 0x308f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 7));
    // 0x308fa0: 0xc60c05a0  lwc1        $f12, 0x5A0($s0)
    ctx->pc = 0x308fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308fa4: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x308FA4u;
    SET_GPR_U32(ctx, 31, 0x308FACu);
    ctx->pc = 0x308FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FA4u;
    // 0x308fa8: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x308FA4u, 0x308FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FACu;
label_308fac:
    // 0x308fac: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x308facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308fb0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x308fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x308fb4: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x308fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x308fb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308fbc: 0x0  nop
    ctx->pc = 0x308fbcu;
    // NOP
    // 0x308fc0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x308fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x308fc4: 0xc60005a0  lwc1        $f0, 0x5A0($s0)
    ctx->pc = 0x308fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308fc8: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x308fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308fcc: 0xc60d0554  lwc1        $f13, 0x554($s0)
    ctx->pc = 0x308fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x308fd0: 0xc097480  jal         func_25D200
    ctx->pc = 0x308FD0u;
    SET_GPR_U32(ctx, 31, 0x308FD8u);
    ctx->pc = 0x308FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FD0u;
    // 0x308fd4: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x308FD0u, 0x308FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FD8u;
label_308fd8:
    // 0x308fd8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x308fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x308fdc: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x308fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x308fe0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x308fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308fe4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x308fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x308fe8: 0xc076664  jal         func_1D9990
    ctx->pc = 0x308FE8u;
    SET_GPR_U32(ctx, 31, 0x308FF0u);
    ctx->pc = 0x308FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FE8u;
    // 0x308fec: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x308FE8u, 0x308FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FF0u;
label_308ff0:
    // 0x308ff0: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x308ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
    // 0x308ff4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x308ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308ff8: 0x0  nop
    ctx->pc = 0x308ff8u;
    // NOP
    // 0x308ffc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x308ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309000: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x309000u;
    {
        const bool branch_taken_0x309000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309000u;
        // 0x309004: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309000) {
            ctx->pc = 0x30900Cu;
            goto label_30900c;
        }
    }
    ctx->pc = 0x309008u;
    // 0x309008: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30900c:
    // 0x30900c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x30900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x309010: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x309010u;
    {
        const bool branch_taken_0x309010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309010u;
        // 0x309014: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309010) {
            ctx->pc = 0x309068u;
            goto label_309068;
        }
    }
    ctx->pc = 0x309018u;
    // 0x309018: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x309018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30901c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x30901cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x309020: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x309020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309024: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x309024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x309028: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x30902c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x30902cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x309030: 0x34456a02  ori         $a1, $v0, 0x6A02
    ctx->pc = 0x309030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27138);
    // 0x309034: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x309034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x309038: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x309038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30903c: 0xa2030521  sb          $v1, 0x521($s0)
    ctx->pc = 0x30903cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x309040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309044: 0x9202052e  lbu         $v0, 0x52E($s0)
    ctx->pc = 0x309044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x309048: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x309048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30904c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30904cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309050: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309054: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x309054u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309058: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x309058u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30905c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30905Cu;
    SET_GPR_U32(ctx, 31, 0x309064u);
    ctx->pc = 0x309060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30905Cu;
    // 0x309060: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30905Cu, 0x309064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309064u;
label_309064:
    // 0x309064: 0x0  nop
    ctx->pc = 0x309064u;
    // NOP
label_309068:
    // 0x309068: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x309068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x30906c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30906Cu;
    {
        const bool branch_taken_0x30906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30906Cu;
        // 0x309070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30906c) {
            ctx->pc = 0x309080u;
            goto label_309080;
        }
    }
    ctx->pc = 0x309074u;
    // 0x309074: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x309074u;
    {
        const bool branch_taken_0x309074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309074) {
            ctx->pc = 0x309100u;
            goto label_309100;
        }
    }
    ctx->pc = 0x30907Cu;
    // 0x30907c: 0x0  nop
    ctx->pc = 0x30907cu;
    // NOP
label_309080:
    // 0x309080: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x309080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309084: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x309084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x309088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30908c: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30908cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x309090: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x309090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x309094: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x309094u;
    {
        const bool branch_taken_0x309094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x309094) {
            ctx->pc = 0x3090D0u;
            goto label_3090d0;
        }
    }
    ctx->pc = 0x30909Cu;
    // 0x30909c: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x30909cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3090a0: 0x28827ff0  slti        $v0, $a0, 0x7FF0
    ctx->pc = 0x3090a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3090a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3090A4u;
    {
        const bool branch_taken_0x3090a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3090A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090A4u;
        // 0x3090a8: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090a4) {
            ctx->pc = 0x3090F8u;
            goto label_3090f8;
        }
    }
    ctx->pc = 0x3090ACu;
    // 0x3090ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3090acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090b0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3090b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3090b4: 0x0  nop
    ctx->pc = 0x3090b4u;
    // NOP
    // 0x3090b8: 0x0  nop
    ctx->pc = 0x3090b8u;
    // NOP
    // 0x3090bc: 0x1810  mfhi        $v1
    ctx->pc = 0x3090bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3090c0: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x3090c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x3090c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3090C4u;
    {
        const bool branch_taken_0x3090c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090C4u;
        // 0x3090c8: 0xa2020514  sb          $v0, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090c4) {
            ctx->pc = 0x3090F8u;
            goto label_3090f8;
        }
    }
    ctx->pc = 0x3090CCu;
    // 0x3090cc: 0x0  nop
    ctx->pc = 0x3090ccu;
    // NOP
label_3090d0:
    // 0x3090d0: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x3090d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3090d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3090d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3090d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3090D8u;
    {
        const bool branch_taken_0x3090d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3090d8) {
            ctx->pc = 0x3090F8u;
            goto label_3090f8;
        }
    }
    ctx->pc = 0x3090E0u;
    // 0x3090e0: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x3090e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x3090e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3090e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090e8: 0xa2020515  sb          $v0, 0x515($s0)
    ctx->pc = 0x3090e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 2));
    // 0x3090ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3090ECu;
    {
        const bool branch_taken_0x3090ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090ECu;
        // 0x3090f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090ec) {
            ctx->pc = 0x309100u;
            goto label_309100;
        }
    }
    ctx->pc = 0x3090F4u;
    // 0x3090f4: 0x0  nop
    ctx->pc = 0x3090f4u;
    // NOP
label_3090f8:
    // 0x3090f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090fc: 0x0  nop
    ctx->pc = 0x3090fcu;
    // NOP
label_309100:
    // 0x309100: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x309100u;
    {
        const bool branch_taken_0x309100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309100) {
            ctx->pc = 0x309170u;
            goto label_309170;
        }
    }
    ctx->pc = 0x309108u;
    // 0x309108: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x309108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x30910c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309110: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x309110u;
    {
        const bool branch_taken_0x309110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x309110) {
            ctx->pc = 0x309150u;
            goto label_309150;
        }
    }
    ctx->pc = 0x309118u;
    // 0x309118: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x309118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x30911c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30911cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x309120: 0x3c022300  lui         $v0, 0x2300
    ctx->pc = 0x309120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
    // 0x309124: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x309124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x309128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30912c: 0x34456a02  ori         $a1, $v0, 0x6A02
    ctx->pc = 0x30912cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27138);
    // 0x309130: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x309130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x309134: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309138: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30913c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30913cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309140: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x309140u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309144: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x309144u;
    SET_GPR_U32(ctx, 31, 0x30914Cu);
    ctx->pc = 0x309148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309144u;
    // 0x309148: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x309144u, 0x30914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30914Cu;
label_30914c:
    // 0x30914c: 0x0  nop
    ctx->pc = 0x30914cu;
    // NOP
label_309150:
    // 0x309150: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x309150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x309154: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x309154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x309158: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x309158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30915c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309160: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x309160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x309164: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x309164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x309168: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x309168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x30916c: 0x0  nop
    ctx->pc = 0x30916cu;
    // NOP
label_309170:
    // 0x309170: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x309170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309174: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x309174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309178: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x309178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30917c: 0x27b101e8  addiu       $s1, $sp, 0x1E8
    ctx->pc = 0x30917cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_309180:
    // 0x309180: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x309180u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x309184: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x309184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x309188: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x309188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30918c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x30918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x309190: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x309190u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x309194: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x309194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x309198: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x309198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x30919c: 0x7fa401e0  sq          $a0, 0x1E0($sp)
    ctx->pc = 0x30919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 4));
    // 0x3091a0: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x3091a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x3091a4: 0x2010  mfhi        $a0
    ctx->pc = 0x3091a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3091a8: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x3091a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3091ac: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x3091acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3091b0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3091b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3091b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3091b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3091b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3091b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3091bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3091bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3091c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3091c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3091c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3091c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3091c8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x3091c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3091cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3091ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3091d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3091d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3091d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3091d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3091d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3091dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3091dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3091e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3091e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3091e4: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x3091e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x3091e8: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x3091e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x3091ec: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x3091ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3091f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3091f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3091f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3091f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3091f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3091fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3091fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309200: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x309200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x309204: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30920c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309210: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309214: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x309214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30921c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x30921cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309220: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309220u;
    SET_GPR_U32(ctx, 31, 0x309228u);
    ctx->pc = 0x309224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309220u;
    // 0x309224: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309220u, 0x309228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309228u;
label_309228:
    // 0x309228: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309228u;
    {
        const bool branch_taken_0x309228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309228) {
            ctx->pc = 0x309238u;
            goto label_309238;
        }
    }
    ctx->pc = 0x309230u;
    // 0x309230: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x309230u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x309234: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x309234u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_309238:
    // 0x309238: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x309238u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30923c: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x30923cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309240: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x309240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x309244: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x309244u;
    {
        const bool branch_taken_0x309244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309244u;
        // 0x309248: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309244) {
            ctx->pc = 0x309180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309180;
        }
    }
    ctx->pc = 0x30924Cu;
    // 0x30924c: 0x10000550  b           . + 4 + (0x550 << 2)
    ctx->pc = 0x30924Cu;
    {
        const bool branch_taken_0x30924c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30924c) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x309254u;
    // 0x309254: 0x0  nop
    ctx->pc = 0x309254u;
    // NOP
label_309258:
    // 0x309258: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x309258u;
    {
        const bool branch_taken_0x309258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309258u;
        // 0x30925c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309258) {
            ctx->pc = 0x309270u;
            goto label_309270;
        }
    }
    ctx->pc = 0x309260u;
    // 0x309260: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x309260u;
    SET_GPR_U32(ctx, 31, 0x309268u);
    ctx->pc = 0x309264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309260u;
    // 0x309264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x309260u, 0x309268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309268u;
label_309268:
    // 0x309268: 0x10000549  b           . + 4 + (0x549 << 2)
    ctx->pc = 0x309268u;
    {
        const bool branch_taken_0x309268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309268) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x309270u;
label_309270:
    // 0x309270: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x309270u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x309274: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x309274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x309278: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x309278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x30927c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x30927cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x309280: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x309280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x309284: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x309284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309288: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x309288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x30928c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30928cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x309290: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x309290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x309294: 0x7fa701d0  sq          $a3, 0x1D0($sp)
    ctx->pc = 0x309294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 7));
    // 0x309298: 0xc60c05a0  lwc1        $f12, 0x5A0($s0)
    ctx->pc = 0x309298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30929c: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x30929Cu;
    SET_GPR_U32(ctx, 31, 0x3092A4u);
    ctx->pc = 0x3092A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30929Cu;
    // 0x3092a0: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x30929Cu, 0x3092A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092A4u;
label_3092a4:
    // 0x3092a4: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x3092a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3092a8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3092a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3092ac: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3092acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3092b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3092b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3092b4: 0x0  nop
    ctx->pc = 0x3092b4u;
    // NOP
    // 0x3092b8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x3092b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3092bc: 0xc60005a0  lwc1        $f0, 0x5A0($s0)
    ctx->pc = 0x3092bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3092c0: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x3092c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3092c4: 0xc60d0554  lwc1        $f13, 0x554($s0)
    ctx->pc = 0x3092c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3092c8: 0xc097480  jal         func_25D200
    ctx->pc = 0x3092C8u;
    SET_GPR_U32(ctx, 31, 0x3092D0u);
    ctx->pc = 0x3092CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092C8u;
    // 0x3092cc: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x3092C8u, 0x3092D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092D0u;
label_3092d0:
    // 0x3092d0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3092d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3092d4: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x3092d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3092d8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x3092d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3092dc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3092dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3092e0: 0xc076664  jal         func_1D9990
    ctx->pc = 0x3092E0u;
    SET_GPR_U32(ctx, 31, 0x3092E8u);
    ctx->pc = 0x3092E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092E0u;
    // 0x3092e4: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x3092E0u, 0x3092E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092E8u;
label_3092e8:
    // 0x3092e8: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x3092e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3092ec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3092ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3092f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3092f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3092f4: 0xc600059c  lwc1        $f0, 0x59C($s0)
    ctx->pc = 0x3092f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3092f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3092f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3092fc: 0x0  nop
    ctx->pc = 0x3092fcu;
    // NOP
    // 0x309300: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x309300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x309304: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x309304u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x309308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30930c: 0xe600059c  swc1        $f0, 0x59C($s0)
    ctx->pc = 0x30930cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1436), bits); }
    // 0x309310: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x309310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x309314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309314u;
    {
        const bool branch_taken_0x309314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309314u;
        // 0x309318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309314) {
            ctx->pc = 0x309328u;
            goto label_309328;
        }
    }
    ctx->pc = 0x30931Cu;
    // 0x30931c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30931Cu;
    {
        const bool branch_taken_0x30931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30931c) {
            ctx->pc = 0x3093A8u;
            goto label_3093a8;
        }
    }
    ctx->pc = 0x309324u;
    // 0x309324: 0x0  nop
    ctx->pc = 0x309324u;
    // NOP
label_309328:
    // 0x309328: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x309328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30932c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x30932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x309330: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309334: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x309334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x309338: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x309338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x30933c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30933Cu;
    {
        const bool branch_taken_0x30933c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30933c) {
            ctx->pc = 0x309378u;
            goto label_309378;
        }
    }
    ctx->pc = 0x309344u;
    // 0x309344: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x309344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309348: 0x28827ff0  slti        $v0, $a0, 0x7FF0
    ctx->pc = 0x309348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30934c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30934Cu;
    {
        const bool branch_taken_0x30934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30934Cu;
        // 0x309350: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30934c) {
            ctx->pc = 0x3093A0u;
            goto label_3093a0;
        }
    }
    ctx->pc = 0x309354u;
    // 0x309354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309358: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x309358u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30935c: 0x0  nop
    ctx->pc = 0x30935cu;
    // NOP
    // 0x309360: 0x0  nop
    ctx->pc = 0x309360u;
    // NOP
    // 0x309364: 0x1810  mfhi        $v1
    ctx->pc = 0x309364u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x309368: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x309368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30936c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30936Cu;
    {
        const bool branch_taken_0x30936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30936Cu;
        // 0x309370: 0xa2020514  sb          $v0, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30936c) {
            ctx->pc = 0x3093A0u;
            goto label_3093a0;
        }
    }
    ctx->pc = 0x309374u;
    // 0x309374: 0x0  nop
    ctx->pc = 0x309374u;
    // NOP
label_309378:
    // 0x309378: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x309378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30937c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30937cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x309380: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309380u;
    {
        const bool branch_taken_0x309380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309380) {
            ctx->pc = 0x3093A0u;
            goto label_3093a0;
        }
    }
    ctx->pc = 0x309388u;
    // 0x309388: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x309388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30938c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309390: 0xa2020515  sb          $v0, 0x515($s0)
    ctx->pc = 0x309390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 2));
    // 0x309394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x309394u;
    {
        const bool branch_taken_0x309394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309394u;
        // 0x309398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309394) {
            ctx->pc = 0x3093A8u;
            goto label_3093a8;
        }
    }
    ctx->pc = 0x30939Cu;
    // 0x30939c: 0x0  nop
    ctx->pc = 0x30939cu;
    // NOP
label_3093a0:
    // 0x3093a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3093a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3093a4: 0x0  nop
    ctx->pc = 0x3093a4u;
    // NOP
label_3093a8:
    // 0x3093a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3093A8u;
    {
        const bool branch_taken_0x3093a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3093a8) {
            ctx->pc = 0x3093C8u;
            goto label_3093c8;
        }
    }
    ctx->pc = 0x3093B0u;
    // 0x3093b0: 0xa6000512  sh          $zero, 0x512($s0)
    ctx->pc = 0x3093b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 0));
    // 0x3093b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3093b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3093b8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3093b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3093bc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3093bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3093c0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3093c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3093c4: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3093c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3093c8:
    // 0x3093c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3093c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3093ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093d0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3093d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093d4: 0x27b101c8  addiu       $s1, $sp, 0x1C8
    ctx->pc = 0x3093d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_3093d8:
    // 0x3093d8: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x3093d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3093dc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3093dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3093e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3093e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3093e4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3093e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3093e8: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x3093e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x3093ec: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x3093ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3093f0: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x3093f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x3093f4: 0x7fa401c0  sq          $a0, 0x1C0($sp)
    ctx->pc = 0x3093f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 4));
    // 0x3093f8: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x3093f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x3093fc: 0x2010  mfhi        $a0
    ctx->pc = 0x3093fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x309400: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x309400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309404: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x309404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309408: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x309408u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30940c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x309410: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x309410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309414: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309418: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x309418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30941c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30941cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x309420: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x309420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x309424: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30942c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309430: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309434: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x309434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30943c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x30943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x309440: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x309444: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x309444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309448: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30944c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309450: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309454: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x309454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309458: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x309458u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30945c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x309464: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309468: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30946c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30946cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309474: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x309474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309478: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309478u;
    SET_GPR_U32(ctx, 31, 0x309480u);
    ctx->pc = 0x30947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309478u;
    // 0x30947c: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309478u, 0x309480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309480u;
label_309480:
    // 0x309480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309480u;
    {
        const bool branch_taken_0x309480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309480) {
            ctx->pc = 0x309490u;
            goto label_309490;
        }
    }
    ctx->pc = 0x309488u;
    // 0x309488: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x309488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x30948c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x30948cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_309490:
    // 0x309490: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x309490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x309494: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x309494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309498: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x309498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x30949c: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x30949Cu;
    {
        const bool branch_taken_0x30949c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3094A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30949Cu;
        // 0x3094a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30949c) {
            ctx->pc = 0x3093D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3093d8;
        }
    }
    ctx->pc = 0x3094A4u;
    // 0x3094a4: 0x100004ba  b           . + 4 + (0x4BA << 2)
    ctx->pc = 0x3094A4u;
    {
        const bool branch_taken_0x3094a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3094a4) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x3094ACu;
    // 0x3094ac: 0x0  nop
    ctx->pc = 0x3094acu;
    // NOP
label_3094b0:
    // 0x3094b0: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3094B0u;
    {
        const bool branch_taken_0x3094b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3094B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094B0u;
        // 0x3094b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094b0) {
            ctx->pc = 0x3095A8u;
            goto label_3095a8;
        }
    }
    ctx->pc = 0x3094B8u;
    // 0x3094b8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3094b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094bc: 0x27b10144  addiu       $s1, $sp, 0x144
    ctx->pc = 0x3094bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x3094c0: 0x27b60134  addiu       $s6, $sp, 0x134
    ctx->pc = 0x3094c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x3094c4: 0x0  nop
    ctx->pc = 0x3094c4u;
    // NOP
label_3094c8:
    // 0x3094c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3094cc: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3094CCu;
    {
        const bool branch_taken_0x3094cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3094D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094CCu;
        // 0x3094d0: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094cc) {
            ctx->pc = 0x3094D8u;
            goto label_3094d8;
        }
    }
    ctx->pc = 0x3094D4u;
    // 0x3094d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3094d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3094d8:
    // 0x3094d8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3094D8u;
    SET_GPR_U32(ctx, 31, 0x3094E0u);
    ctx->pc = 0x3094DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094D8u;
    // 0x3094dc: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3094D8u, 0x3094E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094E0u;
label_3094e0:
    // 0x3094e0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3094e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3094e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3094e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094e8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x3094e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3094ec: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3094ECu;
    SET_GPR_U32(ctx, 31, 0x3094F4u);
    ctx->pc = 0x3094F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094ECu;
    // 0x3094f0: 0x8c440570  lw          $a0, 0x570($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3094ECu, 0x3094F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094F4u;
label_3094f4:
    // 0x3094f4: 0x12800024  beqz        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x3094F4u;
    {
        const bool branch_taken_0x3094f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3094F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094F4u;
        // 0x3094f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094f4) {
            ctx->pc = 0x309588u;
            goto label_309588;
        }
    }
    ctx->pc = 0x3094FCu;
    // 0x3094fc: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x3094FCu;
    {
        const bool branch_taken_0x3094fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094FCu;
        // 0x309500: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094fc) {
            ctx->pc = 0x309588u;
            goto label_309588;
        }
    }
    ctx->pc = 0x309504u;
    // 0x309504: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x309504u;
    SET_GPR_U32(ctx, 31, 0x30950Cu);
    ctx->pc = 0x309508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309504u;
    // 0x309508: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x309504u, 0x30950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30950Cu;
label_30950c:
    // 0x30950c: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x30950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x309510: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x309510u;
    SET_GPR_U32(ctx, 31, 0x309518u);
    ctx->pc = 0x309514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309510u;
    // 0x309514: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x309510u, 0x309518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309518u;
label_309518:
    // 0x309518: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30951c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x30951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x309520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309524: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x309524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x309528: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x309528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x30952c: 0x2442c8f0  addiu       $v0, $v0, -0x3710
    ctx->pc = 0x30952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953200));
    // 0x309530: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309534: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x309534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309538: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x309538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30953c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30953cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309540: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x309540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x309544: 0x920305a9  lbu         $v1, 0x5A9($s0)
    ctx->pc = 0x309544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1449)));
    // 0x309548: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x309548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x30954c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x30954cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x309550: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x309550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x309554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x309558: 0x90460004  lbu         $a2, 0x4($v0)
    ctx->pc = 0x309558u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30955c: 0xc0a9c68  jal         func_2A71A0
    ctx->pc = 0x30955Cu;
    SET_GPR_U32(ctx, 31, 0x309564u);
    ctx->pc = 0x309560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30955Cu;
    // 0x309560: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71A0u, 0x30955Cu, 0x309564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309564u;
label_309564:
    // 0x309564: 0xae420584  sw          $v0, 0x584($s2)
    ctx->pc = 0x309564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1412), GPR_U32(ctx, 2));
    // 0x309568: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309568u;
    SET_GPR_U32(ctx, 31, 0x309570u);
    ctx->pc = 0x30956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309568u;
    // 0x30956c: 0x8e440584  lw          $a0, 0x584($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309568u, 0x309570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309570u;
label_309570:
    // 0x309570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x309570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309574: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309574u;
    {
        const bool branch_taken_0x309574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309574u;
        // 0x309578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309574) {
            ctx->pc = 0x309588u;
            goto label_309588;
        }
    }
    ctx->pc = 0x30957Cu;
    // 0x30957c: 0xc0c29f8  jal         func_30A7E0
    ctx->pc = 0x30957Cu;
    SET_GPR_U32(ctx, 31, 0x309584u);
    ctx->pc = 0x30A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7E0u, 0x30957Cu, 0x309584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309584u;
label_309584:
    // 0x309584: 0x0  nop
    ctx->pc = 0x309584u;
    // NOP
label_309588:
    // 0x309588: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x309588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30958c: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x30958cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309590: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x309590u;
    {
        const bool branch_taken_0x309590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309590u;
        // 0x309594: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309590) {
            ctx->pc = 0x3094C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3094c8;
        }
    }
    ctx->pc = 0x309598u;
    // 0x309598: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x309598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30959c: 0x1000047c  b           . + 4 + (0x47C << 2)
    ctx->pc = 0x30959Cu;
    {
        const bool branch_taken_0x30959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3095A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30959Cu;
        // 0x3095a0: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30959c) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x3095A4u;
    // 0x3095a4: 0x0  nop
    ctx->pc = 0x3095a4u;
    // NOP
label_3095a8:
    // 0x3095a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3095a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095ac: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3095ACu;
    SET_GPR_U32(ctx, 31, 0x3095B4u);
    ctx->pc = 0x3095B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3095ACu;
    // 0x3095b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3095ACu, 0x3095B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095B4u;
label_3095b4:
    // 0x3095b4: 0x10000476  b           . + 4 + (0x476 << 2)
    ctx->pc = 0x3095B4u;
    {
        const bool branch_taken_0x3095b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3095b4) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x3095BCu;
    // 0x3095bc: 0x0  nop
    ctx->pc = 0x3095bcu;
    // NOP
label_3095c0:
    // 0x3095c0: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x3095c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3095c4: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x3095c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x3095c8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3095c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3095cc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3095ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3095d0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3095d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3095d4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3095d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3095d8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3095d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3095dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3095dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3095e0: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3095e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3095e4: 0x7fa701b0  sq          $a3, 0x1B0($sp)
    ctx->pc = 0x3095e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 7));
    // 0x3095e8: 0xc60c05a0  lwc1        $f12, 0x5A0($s0)
    ctx->pc = 0x3095e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3095ec: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x3095ECu;
    SET_GPR_U32(ctx, 31, 0x3095F4u);
    ctx->pc = 0x3095F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3095ECu;
    // 0x3095f0: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3095ECu, 0x3095F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095F4u;
label_3095f4:
    // 0x3095f4: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x3095f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3095f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3095f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3095fc: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3095fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x309600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309604: 0x0  nop
    ctx->pc = 0x309604u;
    // NOP
    // 0x309608: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x309608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x30960c: 0xc60005a0  lwc1        $f0, 0x5A0($s0)
    ctx->pc = 0x30960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309610: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x309610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309614: 0xc60d0554  lwc1        $f13, 0x554($s0)
    ctx->pc = 0x309614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x309618: 0xc097480  jal         func_25D200
    ctx->pc = 0x309618u;
    SET_GPR_U32(ctx, 31, 0x309620u);
    ctx->pc = 0x30961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309618u;
    // 0x30961c: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x309618u, 0x309620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309620u;
label_309620:
    // 0x309620: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x309620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x309624: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x309624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x309628: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x309628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30962c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x30962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x309630: 0xc076664  jal         func_1D9990
    ctx->pc = 0x309630u;
    SET_GPR_U32(ctx, 31, 0x309638u);
    ctx->pc = 0x309634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309630u;
    // 0x309634: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x309630u, 0x309638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309638u;
label_309638:
    // 0x309638: 0x860205a6  lh          $v0, 0x5A6($s0)
    ctx->pc = 0x309638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1446)));
    // 0x30963c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x309640: 0xa60205a6  sh          $v0, 0x5A6($s0)
    ctx->pc = 0x309640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1446), (uint16_t)GPR_U32(ctx, 2));
    // 0x309644: 0x860205a6  lh          $v0, 0x5A6($s0)
    ctx->pc = 0x309644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1446)));
    // 0x309648: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x309648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30964c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30964Cu;
    {
        const bool branch_taken_0x30964c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30964Cu;
        // 0x309650: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30964c) {
            ctx->pc = 0x309688u;
            goto label_309688;
        }
    }
    ctx->pc = 0x309654u;
    // 0x309654: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x309654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x309658: 0xa60205a6  sh          $v0, 0x5A6($s0)
    ctx->pc = 0x309658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1446), (uint16_t)GPR_U32(ctx, 2));
    // 0x30965c: 0x2463c8d8  addiu       $v1, $v1, -0x3728
    ctx->pc = 0x30965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953176));
    // 0x309660: 0x920405aa  lbu         $a0, 0x5AA($s0)
    ctx->pc = 0x309660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1450)));
    // 0x309664: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x309664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x309668: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x309668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30966c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x309670: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x309670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309674: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x309674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x309678: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x309678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30967c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x30967cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x309680: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x309680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x309684: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x309684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_309688:
    // 0x309688: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x309688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30968c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30968cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309690: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x309690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309694: 0x27b101a8  addiu       $s1, $sp, 0x1A8
    ctx->pc = 0x309694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_309698:
    // 0x309698: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x309698u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30969c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x30969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3096a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3096a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3096a4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3096a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3096a8: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x3096a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x3096ac: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x3096acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3096b0: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x3096b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x3096b4: 0x7fa401a0  sq          $a0, 0x1A0($sp)
    ctx->pc = 0x3096b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 4));
    // 0x3096b8: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x3096b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x3096bc: 0x2010  mfhi        $a0
    ctx->pc = 0x3096bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3096c0: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x3096c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3096c4: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x3096c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3096c8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3096c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3096cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3096ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3096d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3096d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3096d4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3096d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3096d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3096d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3096dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3096dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3096e0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x3096e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3096e4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3096e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3096e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3096e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3096ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3096ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3096f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3096f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3096f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3096f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3096f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3096f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3096fc: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x3096fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x309700: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x309700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x309704: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x309704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309708: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30970c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309710: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309714: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x309714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309718: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x309718u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30971c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x309724: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309728: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30972c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30972cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309734: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x309734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309738: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309738u;
    SET_GPR_U32(ctx, 31, 0x309740u);
    ctx->pc = 0x30973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309738u;
    // 0x30973c: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309738u, 0x309740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309740u;
label_309740:
    // 0x309740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309740u;
    {
        const bool branch_taken_0x309740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309740) {
            ctx->pc = 0x309750u;
            goto label_309750;
        }
    }
    ctx->pc = 0x309748u;
    // 0x309748: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x309748u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30974c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x30974cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_309750:
    // 0x309750: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x309750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x309754: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x309754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309758: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x309758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x30975c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x30975Cu;
    {
        const bool branch_taken_0x30975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30975Cu;
        // 0x309760: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30975c) {
            ctx->pc = 0x309698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309698;
        }
    }
    ctx->pc = 0x309764u;
    // 0x309764: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x309764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309768: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x309768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30976c: 0x27b10124  addiu       $s1, $sp, 0x124
    ctx->pc = 0x30976cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x309770: 0x27b60114  addiu       $s6, $sp, 0x114
    ctx->pc = 0x309770u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x309774: 0x0  nop
    ctx->pc = 0x309774u;
    // NOP
label_309778:
    // 0x309778: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x309778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30977c: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30977Cu;
    {
        const bool branch_taken_0x30977c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x309780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30977Cu;
        // 0x309780: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30977c) {
            ctx->pc = 0x309788u;
            goto label_309788;
        }
    }
    ctx->pc = 0x309784u;
    // 0x309784: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x309784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309788:
    // 0x309788: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309788u;
    SET_GPR_U32(ctx, 31, 0x309790u);
    ctx->pc = 0x30978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309788u;
    // 0x30978c: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309788u, 0x309790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309790u;
label_309790:
    // 0x309790: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x309790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x309794: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x309794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309798: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x309798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30979c: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30979Cu;
    SET_GPR_U32(ctx, 31, 0x3097A4u);
    ctx->pc = 0x3097A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30979Cu;
    // 0x3097a0: 0x8c440570  lw          $a0, 0x570($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30979Cu, 0x3097A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097A4u;
label_3097a4:
    // 0x3097a4: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x3097A4u;
    {
        const bool branch_taken_0x3097a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097A4u;
        // 0x3097a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097a4) {
            ctx->pc = 0x309820u;
            goto label_309820;
        }
    }
    ctx->pc = 0x3097ACu;
    // 0x3097ac: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3097ACu;
    {
        const bool branch_taken_0x3097ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097ACu;
        // 0x3097b0: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097ac) {
            ctx->pc = 0x309820u;
            goto label_309820;
        }
    }
    ctx->pc = 0x3097B4u;
    // 0x3097b4: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3097B4u;
    SET_GPR_U32(ctx, 31, 0x3097BCu);
    ctx->pc = 0x3097B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097B4u;
    // 0x3097b8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3097B4u, 0x3097BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097BCu;
label_3097bc:
    // 0x3097bc: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x3097bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x3097c0: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x3097C0u;
    SET_GPR_U32(ctx, 31, 0x3097C8u);
    ctx->pc = 0x3097C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097C0u;
    // 0x3097c4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x3097C0u, 0x3097C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097C8u;
label_3097c8:
    // 0x3097c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3097c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3097cc: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x3097ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x3097d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3097d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3097d4: 0x0  nop
    ctx->pc = 0x3097d4u;
    // NOP
    // 0x3097d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3097d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3097dc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3097dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3097e0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3097e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3097e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3097e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3097e8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x3097e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x3097ec: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3097ECu;
    SET_GPR_U32(ctx, 31, 0x3097F4u);
    ctx->pc = 0x3097F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097ECu;
    // 0x3097f0: 0x8e440584  lw          $a0, 0x584($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3097ECu, 0x3097F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097F4u;
label_3097f4:
    // 0x3097f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3097f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3097f8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3097F8u;
    {
        const bool branch_taken_0x3097f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097F8u;
        // 0x3097fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097f8) {
            ctx->pc = 0x309820u;
            goto label_309820;
        }
    }
    ctx->pc = 0x309800u;
    // 0x309800: 0xc0c29f4  jal         func_30A7D0
    ctx->pc = 0x309800u;
    SET_GPR_U32(ctx, 31, 0x309808u);
    ctx->pc = 0x309804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309800u;
    // 0x309804: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7D0u, 0x309800u, 0x309808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309808u;
label_309808:
    // 0x309808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x309808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30980c: 0xc0c29f0  jal         func_30A7C0
    ctx->pc = 0x30980Cu;
    SET_GPR_U32(ctx, 31, 0x309814u);
    ctx->pc = 0x309810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30980Cu;
    // 0x309810: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7C0u, 0x30980Cu, 0x309814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309814u;
label_309814:
    // 0x309814: 0x860505a6  lh          $a1, 0x5A6($s0)
    ctx->pc = 0x309814u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1446)));
    // 0x309818: 0xc0c29f8  jal         func_30A7E0
    ctx->pc = 0x309818u;
    SET_GPR_U32(ctx, 31, 0x309820u);
    ctx->pc = 0x30981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309818u;
    // 0x30981c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7E0u, 0x309818u, 0x309820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309820u;
label_309820:
    // 0x309820: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x309820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x309824: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x309824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309828: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x309828u;
    {
        const bool branch_taken_0x309828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309828u;
        // 0x30982c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309828) {
            ctx->pc = 0x309778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309778;
        }
    }
    ctx->pc = 0x309830u;
    // 0x309830: 0x100003d7  b           . + 4 + (0x3D7 << 2)
    ctx->pc = 0x309830u;
    {
        const bool branch_taken_0x309830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309830) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x309838u;
label_309838:
    // 0x309838: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x309838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x30983c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x309840: 0xa60205a4  sh          $v0, 0x5A4($s0)
    ctx->pc = 0x309840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 2));
    // 0x309844: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x309844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x309848: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x309848u;
    {
        const bool branch_taken_0x309848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309848) {
            ctx->pc = 0x3098C0u;
            goto label_3098c0;
        }
    }
    ctx->pc = 0x309850u;
    // 0x309850: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x309850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309854: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x309854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x309858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30985c: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30985cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x309860: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x309860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x309864: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x309864u;
    {
        const bool branch_taken_0x309864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x309864) {
            ctx->pc = 0x3098A0u;
            goto label_3098a0;
        }
    }
    ctx->pc = 0x30986Cu;
    // 0x30986c: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x30986cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309870: 0x28827ff0  slti        $v0, $a0, 0x7FF0
    ctx->pc = 0x309870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x309874: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x309874u;
    {
        const bool branch_taken_0x309874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309874u;
        // 0x309878: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309874) {
            ctx->pc = 0x3098C0u;
            goto label_3098c0;
        }
    }
    ctx->pc = 0x30987Cu;
    // 0x30987c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309880: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x309880u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x309884: 0x0  nop
    ctx->pc = 0x309884u;
    // NOP
    // 0x309888: 0x0  nop
    ctx->pc = 0x309888u;
    // NOP
    // 0x30988c: 0x1810  mfhi        $v1
    ctx->pc = 0x30988cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x309890: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x309890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x309894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x309894u;
    {
        const bool branch_taken_0x309894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309894u;
        // 0x309898: 0xa2020514  sb          $v0, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309894) {
            ctx->pc = 0x3098C0u;
            goto label_3098c0;
        }
    }
    ctx->pc = 0x30989Cu;
    // 0x30989c: 0x0  nop
    ctx->pc = 0x30989cu;
    // NOP
label_3098a0:
    // 0x3098a0: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x3098a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3098a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3098a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3098a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3098A8u;
    {
        const bool branch_taken_0x3098a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3098a8) {
            ctx->pc = 0x3098C0u;
            goto label_3098c0;
        }
    }
    ctx->pc = 0x3098B0u;
    // 0x3098b0: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x3098b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x3098b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3098b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3098b8: 0xa2020515  sb          $v0, 0x515($s0)
    ctx->pc = 0x3098b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 2));
    // 0x3098bc: 0x0  nop
    ctx->pc = 0x3098bcu;
    // NOP
label_3098c0:
    // 0x3098c0: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x3098c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3098c4: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x3098c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x3098c8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3098c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3098cc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3098ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3098d0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3098d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3098d4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3098d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3098d8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3098d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3098dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3098dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3098e0: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3098e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3098e4: 0x7fa70190  sq          $a3, 0x190($sp)
    ctx->pc = 0x3098e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 7));
    // 0x3098e8: 0xc60c05a0  lwc1        $f12, 0x5A0($s0)
    ctx->pc = 0x3098e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3098ec: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x3098ECu;
    SET_GPR_U32(ctx, 31, 0x3098F4u);
    ctx->pc = 0x3098F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3098ECu;
    // 0x3098f0: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3098ECu, 0x3098F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3098F4u;
label_3098f4:
    // 0x3098f4: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x3098f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3098f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3098f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3098fc: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3098fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x309900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309904: 0x0  nop
    ctx->pc = 0x309904u;
    // NOP
    // 0x309908: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x309908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x30990c: 0xc60005a0  lwc1        $f0, 0x5A0($s0)
    ctx->pc = 0x30990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309910: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x309910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309914: 0xc60d0554  lwc1        $f13, 0x554($s0)
    ctx->pc = 0x309914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x309918: 0xc097480  jal         func_25D200
    ctx->pc = 0x309918u;
    SET_GPR_U32(ctx, 31, 0x309920u);
    ctx->pc = 0x30991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309918u;
    // 0x30991c: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x309918u, 0x309920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309920u;
label_309920:
    // 0x309920: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x309920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x309924: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x309924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x309928: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x309928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30992c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x30992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x309930: 0xc076664  jal         func_1D9990
    ctx->pc = 0x309930u;
    SET_GPR_U32(ctx, 31, 0x309938u);
    ctx->pc = 0x309934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309930u;
    // 0x309934: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x309930u, 0x309938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309938u;
label_309938:
    // 0x309938: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x309938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
    // 0x30993c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30993cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309940: 0x0  nop
    ctx->pc = 0x309940u;
    // NOP
    // 0x309944: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309948: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x309948u;
    {
        const bool branch_taken_0x309948 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309948u;
        // 0x30994c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309948) {
            ctx->pc = 0x309954u;
            goto label_309954;
        }
    }
    ctx->pc = 0x309950u;
    // 0x309950: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309954:
    // 0x309954: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x309954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x309958: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x309958u;
    {
        const bool branch_taken_0x309958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309958) {
            ctx->pc = 0x309980u;
            goto label_309980;
        }
    }
    ctx->pc = 0x309960u;
    // 0x309960: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x309960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x309964: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x309964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x309968: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x309968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x30996c: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x30996cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x309970: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x309970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x309974: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x309974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x309978: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x309978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x30997c: 0x0  nop
    ctx->pc = 0x30997cu;
    // NOP
label_309980:
    // 0x309980: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x309980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x309984: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309984u;
    {
        const bool branch_taken_0x309984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309984u;
        // 0x309988: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309984) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x30998Cu;
    // 0x30998c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x309990: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x309990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x309994: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x309994u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x309998: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x309998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x30999c: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x30999cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3099a0: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3099a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3099a4: 0x0  nop
    ctx->pc = 0x3099a4u;
    // NOP
label_3099a8:
    // 0x3099a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3099a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3099acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3099b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099b4: 0x27b10188  addiu       $s1, $sp, 0x188
    ctx->pc = 0x3099b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_3099b8:
    // 0x3099b8: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x3099b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3099bc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3099bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3099c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3099c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3099c4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3099c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3099c8: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x3099c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x3099cc: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x3099ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3099d0: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x3099d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x3099d4: 0x7fa40180  sq          $a0, 0x180($sp)
    ctx->pc = 0x3099d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 4));
    // 0x3099d8: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x3099d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x3099dc: 0x2010  mfhi        $a0
    ctx->pc = 0x3099dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3099e0: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x3099e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3099e4: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x3099e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3099e8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3099e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3099ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3099ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3099f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3099f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3099f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3099f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3099f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3099f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3099fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3099fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x309a00: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x309a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x309a04: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309a08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x309a0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309a10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a14: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x309a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309a18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309a1c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x309a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x309a20: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x309a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x309a24: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x309a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309a28: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309a2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x309a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309a30: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309a34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x309a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309a38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x309a38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x309a3c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x309a44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309a48: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x309a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309a54: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x309a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309a58: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309A58u;
    SET_GPR_U32(ctx, 31, 0x309A60u);
    ctx->pc = 0x309A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A58u;
    // 0x309a5c: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309A58u, 0x309A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A60u;
label_309a60:
    // 0x309a60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309A60u;
    {
        const bool branch_taken_0x309a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309a60) {
            ctx->pc = 0x309A70u;
            goto label_309a70;
        }
    }
    ctx->pc = 0x309A68u;
    // 0x309a68: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x309a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x309a6c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x309a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_309a70:
    // 0x309a70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x309a70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x309a74: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x309a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309a78: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x309a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x309a7c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x309A7Cu;
    {
        const bool branch_taken_0x309a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A7Cu;
        // 0x309a80: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a7c) {
            ctx->pc = 0x3099B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3099b8;
        }
    }
    ctx->pc = 0x309A84u;
    // 0x309a84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x309a84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a88: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x309a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a8c: 0x27b10104  addiu       $s1, $sp, 0x104
    ctx->pc = 0x309a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x309a90: 0x27b600f4  addiu       $s6, $sp, 0xF4
    ctx->pc = 0x309a90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x309a94: 0x0  nop
    ctx->pc = 0x309a94u;
    // NOP
label_309a98:
    // 0x309a98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x309a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309a9c: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x309A9Cu;
    {
        const bool branch_taken_0x309a9c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x309AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A9Cu;
        // 0x309aa0: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a9c) {
            ctx->pc = 0x309AA8u;
            goto label_309aa8;
        }
    }
    ctx->pc = 0x309AA4u;
    // 0x309aa4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x309aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309aa8:
    // 0x309aa8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309AA8u;
    SET_GPR_U32(ctx, 31, 0x309AB0u);
    ctx->pc = 0x309AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AA8u;
    // 0x309aac: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309AA8u, 0x309AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309AB0u;
label_309ab0:
    // 0x309ab0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x309ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x309ab4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x309ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ab8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x309ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x309abc: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309ABCu;
    SET_GPR_U32(ctx, 31, 0x309AC4u);
    ctx->pc = 0x309AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309ABCu;
    // 0x309ac0: 0x8c440570  lw          $a0, 0x570($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309ABCu, 0x309AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309AC4u;
label_309ac4:
    // 0x309ac4: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x309AC4u;
    {
        const bool branch_taken_0x309ac4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AC4u;
        // 0x309ac8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ac4) {
            ctx->pc = 0x309B40u;
            goto label_309b40;
        }
    }
    ctx->pc = 0x309ACCu;
    // 0x309acc: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x309ACCu;
    {
        const bool branch_taken_0x309acc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ACCu;
        // 0x309ad0: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309acc) {
            ctx->pc = 0x309B40u;
            goto label_309b40;
        }
    }
    ctx->pc = 0x309AD4u;
    // 0x309ad4: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x309AD4u;
    SET_GPR_U32(ctx, 31, 0x309ADCu);
    ctx->pc = 0x309AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AD4u;
    // 0x309ad8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x309AD4u, 0x309ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309ADCu;
label_309adc:
    // 0x309adc: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x309adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x309ae0: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x309AE0u;
    SET_GPR_U32(ctx, 31, 0x309AE8u);
    ctx->pc = 0x309AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AE0u;
    // 0x309ae4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x309AE0u, 0x309AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309AE8u;
label_309ae8:
    // 0x309ae8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309aec: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x309aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x309af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309af4: 0x0  nop
    ctx->pc = 0x309af4u;
    // NOP
    // 0x309af8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309afc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x309afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309b00: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x309b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309b04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309b08: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x309b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x309b0c: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309B0Cu;
    SET_GPR_U32(ctx, 31, 0x309B14u);
    ctx->pc = 0x309B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B0Cu;
    // 0x309b10: 0x8e440584  lw          $a0, 0x584($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309B0Cu, 0x309B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B14u;
label_309b14:
    // 0x309b14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x309b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b18: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x309B18u;
    {
        const bool branch_taken_0x309b18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B18u;
        // 0x309b1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b18) {
            ctx->pc = 0x309B40u;
            goto label_309b40;
        }
    }
    ctx->pc = 0x309B20u;
    // 0x309b20: 0xc0c29f4  jal         func_30A7D0
    ctx->pc = 0x309B20u;
    SET_GPR_U32(ctx, 31, 0x309B28u);
    ctx->pc = 0x309B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B20u;
    // 0x309b24: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7D0u, 0x309B20u, 0x309B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B28u;
label_309b28:
    // 0x309b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x309b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b2c: 0xc0c29f0  jal         func_30A7C0
    ctx->pc = 0x309B2Cu;
    SET_GPR_U32(ctx, 31, 0x309B34u);
    ctx->pc = 0x309B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B2Cu;
    // 0x309b30: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7C0u, 0x309B2Cu, 0x309B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B34u;
label_309b34:
    // 0x309b34: 0x860505a6  lh          $a1, 0x5A6($s0)
    ctx->pc = 0x309b34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1446)));
    // 0x309b38: 0xc0c29f8  jal         func_30A7E0
    ctx->pc = 0x309B38u;
    SET_GPR_U32(ctx, 31, 0x309B40u);
    ctx->pc = 0x309B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B38u;
    // 0x309b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7E0u, 0x309B38u, 0x309B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B40u;
label_309b40:
    // 0x309b40: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x309b40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x309b44: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x309b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309b48: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x309B48u;
    {
        const bool branch_taken_0x309b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B48u;
        // 0x309b4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309b48) {
            ctx->pc = 0x309A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309a98;
        }
    }
    ctx->pc = 0x309B50u;
    // 0x309b50: 0x1000030f  b           . + 4 + (0x30F << 2)
    ctx->pc = 0x309B50u;
    {
        const bool branch_taken_0x309b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b50) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x309B58u;
label_309b58:
    // 0x309b58: 0x92020514  lbu         $v0, 0x514($s0)
    ctx->pc = 0x309b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1300)));
    // 0x309b5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x309b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x309b60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309B60u;
    {
        const bool branch_taken_0x309b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309b60) {
            ctx->pc = 0x309B70u;
            goto label_309b70;
        }
    }
    ctx->pc = 0x309B68u;
    // 0x309b68: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x309b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x309b6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x309b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_309b70:
    // 0x309b70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x309b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x309b74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309B74u;
    {
        const bool branch_taken_0x309b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b74) {
            ctx->pc = 0x309B88u;
            goto label_309b88;
        }
    }
    ctx->pc = 0x309B7Cu;
    // 0x309b7c: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x309b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309b80: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x309b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x309b84: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x309b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_309b88:
    // 0x309b88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x309b8c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x309B8Cu;
    {
        const bool branch_taken_0x309b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b8c) {
            ctx->pc = 0x309C00u;
            goto label_309c00;
        }
    }
    ctx->pc = 0x309B94u;
    // 0x309b94: 0x920305a9  lbu         $v1, 0x5A9($s0)
    ctx->pc = 0x309b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1449)));
    // 0x309b98: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x309b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x309b9c: 0x2442c8f5  addiu       $v0, $v0, -0x370B
    ctx->pc = 0x309b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953205));
    // 0x309ba0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x309ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x309ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x309ba8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x309ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309bac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x309BACu;
    {
        const bool branch_taken_0x309bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309bac) {
            ctx->pc = 0x309C00u;
            goto label_309c00;
        }
    }
    ctx->pc = 0x309BB4u;
    // 0x309bb4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x309bb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x309bb8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x309bb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x309bbc: 0xc0a9d5c  jal         func_2A7570
    ctx->pc = 0x309BBCu;
    SET_GPR_U32(ctx, 31, 0x309BC4u);
    ctx->pc = 0x309BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309BBCu;
    // 0x309bc0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7570u, 0x309BBCu, 0x309BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BC4u;
label_309bc4:
    // 0x309bc4: 0xae020598  sw          $v0, 0x598($s0)
    ctx->pc = 0x309bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 2));
    // 0x309bc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x309bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x309bcc: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x309bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x309bd0: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x309bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x309bd4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x309bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x309bd8: 0x34456a02  ori         $a1, $v0, 0x6A02
    ctx->pc = 0x309bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27138);
    // 0x309bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309be0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x309be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x309be4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309be8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309be8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x309becu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bf0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x309bf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bf4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x309BF4u;
    SET_GPR_U32(ctx, 31, 0x309BFCu);
    ctx->pc = 0x309BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309BF4u;
    // 0x309bf8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x309BF4u, 0x309BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BFCu;
label_309bfc:
    // 0x309bfc: 0x0  nop
    ctx->pc = 0x309bfcu;
    // NOP
label_309c00:
    // 0x309c00: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x309c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x309c04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x309C04u;
    {
        const bool branch_taken_0x309c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C04u;
        // 0x309c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c04) {
            ctx->pc = 0x309C18u;
            goto label_309c18;
        }
    }
    ctx->pc = 0x309C0Cu;
    // 0x309c0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x309C0Cu;
    {
        const bool branch_taken_0x309c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309c0c) {
            ctx->pc = 0x309C98u;
            goto label_309c98;
        }
    }
    ctx->pc = 0x309C14u;
    // 0x309c14: 0x0  nop
    ctx->pc = 0x309c14u;
    // NOP
label_309c18:
    // 0x309c18: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x309c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309c1c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x309c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x309c20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309c24: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x309c24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x309c28: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x309c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x309c2c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x309C2Cu;
    {
        const bool branch_taken_0x309c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x309c2c) {
            ctx->pc = 0x309C68u;
            goto label_309c68;
        }
    }
    ctx->pc = 0x309C34u;
    // 0x309c34: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x309c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309c38: 0x28827ff0  slti        $v0, $a0, 0x7FF0
    ctx->pc = 0x309c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x309c3c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x309C3Cu;
    {
        const bool branch_taken_0x309c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C3Cu;
        // 0x309c40: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c3c) {
            ctx->pc = 0x309C90u;
            goto label_309c90;
        }
    }
    ctx->pc = 0x309C44u;
    // 0x309c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309c48: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x309c48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x309c4c: 0x0  nop
    ctx->pc = 0x309c4cu;
    // NOP
    // 0x309c50: 0x0  nop
    ctx->pc = 0x309c50u;
    // NOP
    // 0x309c54: 0x1810  mfhi        $v1
    ctx->pc = 0x309c54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x309c58: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x309c58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x309c5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x309C5Cu;
    {
        const bool branch_taken_0x309c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C5Cu;
        // 0x309c60: 0xa2020514  sb          $v0, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c5c) {
            ctx->pc = 0x309C90u;
            goto label_309c90;
        }
    }
    ctx->pc = 0x309C64u;
    // 0x309c64: 0x0  nop
    ctx->pc = 0x309c64u;
    // NOP
label_309c68:
    // 0x309c68: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x309c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309c6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x309c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x309c70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309C70u;
    {
        const bool branch_taken_0x309c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309c70) {
            ctx->pc = 0x309C90u;
            goto label_309c90;
        }
    }
    ctx->pc = 0x309C78u;
    // 0x309c78: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x309c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x309c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309c80: 0xa2020515  sb          $v0, 0x515($s0)
    ctx->pc = 0x309c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 2));
    // 0x309c84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x309C84u;
    {
        const bool branch_taken_0x309c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C84u;
        // 0x309c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c84) {
            ctx->pc = 0x309C98u;
            goto label_309c98;
        }
    }
    ctx->pc = 0x309C8Cu;
    // 0x309c8c: 0x0  nop
    ctx->pc = 0x309c8cu;
    // NOP
label_309c90:
    // 0x309c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309c94: 0x0  nop
    ctx->pc = 0x309c94u;
    // NOP
label_309c98:
    // 0x309c98: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x309C98u;
    {
        const bool branch_taken_0x309c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C98u;
        // 0x309c9c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c98) {
            ctx->pc = 0x309CF8u;
            goto label_309cf8;
        }
    }
    ctx->pc = 0x309CA0u;
    // 0x309ca0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x309ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x309ca4: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x309ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x309ca8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x309ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x309cac: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x309cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x309cb0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x309cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x309cb4: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x309cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x309cb8: 0xa20005ab  sb          $zero, 0x5AB($s0)
    ctx->pc = 0x309cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1451), (uint8_t)GPR_U32(ctx, 0));
    // 0x309cbc: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x309CBCu;
    SET_GPR_U32(ctx, 31, 0x309CC4u);
    ctx->pc = 0x309CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309CBCu;
    // 0x309cc0: 0x8e040598  lw          $a0, 0x598($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x309CBCu, 0x309CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309CC4u;
label_309cc4:
    // 0x309cc4: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x309cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x309cc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x309cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x309ccc: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x309cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x309cd0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x309cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x309cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cd8: 0x34456a02  ori         $a1, $v0, 0x6A02
    ctx->pc = 0x309cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27138);
    // 0x309cdc: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x309cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x309ce0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309ce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ce8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x309ce8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x309cecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cf0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x309CF0u;
    SET_GPR_U32(ctx, 31, 0x309CF8u);
    ctx->pc = 0x309CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309CF0u;
    // 0x309cf4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x309CF0u, 0x309CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309CF8u;
label_309cf8:
    // 0x309cf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x309cf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x309cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309d00: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x309d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309d04: 0x27b10178  addiu       $s1, $sp, 0x178
    ctx->pc = 0x309d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_309d08:
    // 0x309d08: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x309d08u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x309d0c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x309d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x309d10: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x309d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x309d14: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x309d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x309d18: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x309d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x309d1c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x309d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x309d20: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x309d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x309d24: 0x7fa40170  sq          $a0, 0x170($sp)
    ctx->pc = 0x309d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 4));
    // 0x309d28: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x309d28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x309d2c: 0x2010  mfhi        $a0
    ctx->pc = 0x309d2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x309d30: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x309d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d34: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x309d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309d38: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x309d38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x309d3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x309d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x309d40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x309d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309d44: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309d48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x309d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309d4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x309d4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x309d50: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x309d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x309d54: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309d58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x309d5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309d60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d64: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x309d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309d68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309d6c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x309d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x309d70: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x309d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x309d74: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x309d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309d78: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309d7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x309d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309d80: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309d84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x309d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x309d88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x309d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x309d8c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x309d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x309d90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x309d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x309d94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309d98: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x309d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d9c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x309d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x309da0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309da4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x309da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309da8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309DA8u;
    SET_GPR_U32(ctx, 31, 0x309DB0u);
    ctx->pc = 0x309DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309DA8u;
    // 0x309dac: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309DA8u, 0x309DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DB0u;
label_309db0:
    // 0x309db0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309DB0u;
    {
        const bool branch_taken_0x309db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309db0) {
            ctx->pc = 0x309DC0u;
            goto label_309dc0;
        }
    }
    ctx->pc = 0x309DB8u;
    // 0x309db8: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x309db8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x309dbc: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x309dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_309dc0:
    // 0x309dc0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x309dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x309dc4: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x309dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309dc8: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x309dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x309dcc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x309DCCu;
    {
        const bool branch_taken_0x309dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DCCu;
        // 0x309dd0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dcc) {
            ctx->pc = 0x309D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309d08;
        }
    }
    ctx->pc = 0x309DD4u;
    // 0x309dd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x309dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dd8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x309dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ddc: 0x27b100e4  addiu       $s1, $sp, 0xE4
    ctx->pc = 0x309ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x309de0: 0x27b600d4  addiu       $s6, $sp, 0xD4
    ctx->pc = 0x309de0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x309de4: 0x0  nop
    ctx->pc = 0x309de4u;
    // NOP
label_309de8:
    // 0x309de8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x309de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309dec: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x309DECu;
    {
        const bool branch_taken_0x309dec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x309DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DECu;
        // 0x309df0: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dec) {
            ctx->pc = 0x309DF8u;
            goto label_309df8;
        }
    }
    ctx->pc = 0x309DF4u;
    // 0x309df4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x309df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309df8:
    // 0x309df8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309DF8u;
    SET_GPR_U32(ctx, 31, 0x309E00u);
    ctx->pc = 0x309DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309DF8u;
    // 0x309dfc: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309DF8u, 0x309E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E00u;
label_309e00:
    // 0x309e00: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x309e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x309e04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x309e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e08: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x309e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x309e0c: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309E0Cu;
    SET_GPR_U32(ctx, 31, 0x309E14u);
    ctx->pc = 0x309E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E0Cu;
    // 0x309e10: 0x8c440570  lw          $a0, 0x570($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309E0Cu, 0x309E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E14u;
label_309e14:
    // 0x309e14: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x309E14u;
    {
        const bool branch_taken_0x309e14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E14u;
        // 0x309e18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e14) {
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E1Cu;
    // 0x309e1c: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x309E1Cu;
    {
        const bool branch_taken_0x309e1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E1Cu;
        // 0x309e20: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e1c) {
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E24u;
    // 0x309e24: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x309E24u;
    SET_GPR_U32(ctx, 31, 0x309E2Cu);
    ctx->pc = 0x309E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E24u;
    // 0x309e28: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x309E24u, 0x309E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E2Cu;
label_309e2c:
    // 0x309e2c: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x309e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x309e30: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x309E30u;
    SET_GPR_U32(ctx, 31, 0x309E38u);
    ctx->pc = 0x309E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E30u;
    // 0x309e34: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x309E30u, 0x309E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E38u;
label_309e38:
    // 0x309e38: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x309e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309e3c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x309e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x309e40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x309e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309e44: 0x0  nop
    ctx->pc = 0x309e44u;
    // NOP
    // 0x309e48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309e4c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x309e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x309e50: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x309e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309e54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309e58: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x309e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x309e5c: 0xc096c80  jal         func_25B200
    ctx->pc = 0x309E5Cu;
    SET_GPR_U32(ctx, 31, 0x309E64u);
    ctx->pc = 0x309E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E5Cu;
    // 0x309e60: 0x8e440584  lw          $a0, 0x584($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x309E5Cu, 0x309E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E64u;
label_309e64:
    // 0x309e64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x309e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e68: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x309E68u;
    {
        const bool branch_taken_0x309e68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E68u;
        // 0x309e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e68) {
            ctx->pc = 0x309E90u;
            goto label_309e90;
        }
    }
    ctx->pc = 0x309E70u;
    // 0x309e70: 0xc0c29f4  jal         func_30A7D0
    ctx->pc = 0x309E70u;
    SET_GPR_U32(ctx, 31, 0x309E78u);
    ctx->pc = 0x309E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E70u;
    // 0x309e74: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7D0u, 0x309E70u, 0x309E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E78u;
label_309e78:
    // 0x309e78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x309e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e7c: 0xc0c29f0  jal         func_30A7C0
    ctx->pc = 0x309E7Cu;
    SET_GPR_U32(ctx, 31, 0x309E84u);
    ctx->pc = 0x309E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E7Cu;
    // 0x309e80: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7C0u, 0x309E7Cu, 0x309E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E84u;
label_309e84:
    // 0x309e84: 0x860505a6  lh          $a1, 0x5A6($s0)
    ctx->pc = 0x309e84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1446)));
    // 0x309e88: 0xc0c29f8  jal         func_30A7E0
    ctx->pc = 0x309E88u;
    SET_GPR_U32(ctx, 31, 0x309E90u);
    ctx->pc = 0x309E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E88u;
    // 0x309e8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7E0u, 0x309E88u, 0x309E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E90u;
label_309e90:
    // 0x309e90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x309e90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x309e94: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x309e94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x309e98: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x309E98u;
    {
        const bool branch_taken_0x309e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E98u;
        // 0x309e9c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e98) {
            ctx->pc = 0x309DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309de8;
        }
    }
    ctx->pc = 0x309EA0u;
    // 0x309ea0: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x309EA0u;
    {
        const bool branch_taken_0x309ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ea0) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x309EA8u;
label_309ea8:
    // 0x309ea8: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x309ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x309eac: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x309eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x309eb0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x309EB0u;
    SET_GPR_U32(ctx, 31, 0x309EB8u);
    ctx->pc = 0x309EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309EB0u;
    // 0x309eb4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x309EB0u, 0x309EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EB8u;
label_309eb8:
    // 0x309eb8: 0x920205ab  lbu         $v0, 0x5AB($s0)
    ctx->pc = 0x309eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1451)));
    // 0x309ebc: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x309EBCu;
    {
        const bool branch_taken_0x309ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309ebc) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309EC4u;
    // 0x309ec4: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x309ec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309ec8: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x309ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x309ecc: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x309ECCu;
    {
        const bool branch_taken_0x309ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ECCu;
        // 0x309ed0: 0x2861012d  slti        $at, $v1, 0x12D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ecc) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309ED4u;
    // 0x309ed4: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x309ED4u;
    {
        const bool branch_taken_0x309ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x309ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ED4u;
        // 0x309ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ed4) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309EDCu;
    // 0x309edc: 0xc0c0818  jal         func_302060
    ctx->pc = 0x309EDCu;
    SET_GPR_U32(ctx, 31, 0x309EE4u);
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x309EDCu, 0x309EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EE4u;
label_309ee4:
    // 0x309ee4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x309EE4u;
    {
        const bool branch_taken_0x309ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EE4u;
        // 0x309ee8: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ee4) {
            ctx->pc = 0x309F68u;
            goto label_309f68;
        }
    }
    ctx->pc = 0x309EECu;
    // 0x309eec: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x309eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x309ef0: 0x78255c20  lq          $a1, 0x5C20($at)
    ctx->pc = 0x309ef0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x309ef4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x309ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x309ef8: 0x7fa50210  sq          $a1, 0x210($sp)
    ctx->pc = 0x309ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 5));
    // 0x309efc: 0x78245c30  lq          $a0, 0x5C30($at)
    ctx->pc = 0x309efcu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C30u));
    // 0x309f00: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x309f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x309f04: 0x7fa40220  sq          $a0, 0x220($sp)
    ctx->pc = 0x309f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 4));
    // 0x309f08: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x309f08u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x309f0c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x309f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x309f10: 0x7fa30230  sq          $v1, 0x230($sp)
    ctx->pc = 0x309f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
    // 0x309f14: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x309f14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x309f18: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x309f18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x309f1c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x309f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x309f20: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x309f20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x309f24: 0x86020512  lh          $v0, 0x512($s0)
    ctx->pc = 0x309f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x309f28: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x309f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x309f2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x309f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x309f30: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x309f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x309f34: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x309F34u;
    {
        const bool branch_taken_0x309f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f34) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309F3Cu;
    // 0x309f3c: 0x920605a8  lbu         $a2, 0x5A8($s0)
    ctx->pc = 0x309f3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1448)));
    // 0x309f40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x309f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x309f44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x309f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x309f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309f4c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x309f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x309f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309f54: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x309F54u;
    SET_GPR_U32(ctx, 31, 0x309F5Cu);
    ctx->pc = 0x309F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F54u;
    // 0x309f58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x309F54u, 0x309F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F5Cu;
label_309f5c:
    // 0x309f5c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x309F5Cu;
    {
        const bool branch_taken_0x309f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f5c) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309F64u;
    // 0x309f64: 0x0  nop
    ctx->pc = 0x309f64u;
    // NOP
label_309f68:
    // 0x309f68: 0x920305a9  lbu         $v1, 0x5A9($s0)
    ctx->pc = 0x309f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1449)));
    // 0x309f6c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x309f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x309f70: 0x2442c8f5  addiu       $v0, $v0, -0x370B
    ctx->pc = 0x309f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953205));
    // 0x309f74: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x309f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x309f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x309f7c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x309f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309f80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x309F80u;
    {
        const bool branch_taken_0x309f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f80) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309F88u;
    // 0x309f88: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x309f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x309f8c: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x309f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x309f90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x309f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309f94: 0xc097184  jal         func_25C610
    ctx->pc = 0x309F94u;
    SET_GPR_U32(ctx, 31, 0x309F9Cu);
    ctx->pc = 0x309F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F94u;
    // 0x309f98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x309F94u, 0x309F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F9Cu;
label_309f9c:
    // 0x309f9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x309f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309fa0: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x309FA0u;
    {
        const bool branch_taken_0x309fa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x309fa0) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309FA8u;
    // 0x309fa8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x309FA8u;
    {
        const bool branch_taken_0x309fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x309fa8) {
            ctx->pc = 0x309FD8u;
            goto label_309fd8;
        }
    }
    ctx->pc = 0x309FB0u;
    // 0x309fb0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x309FB0u;
    {
        const bool branch_taken_0x309fb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FB0u;
        // 0x309fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fb0) {
            ctx->pc = 0x309FD8u;
            goto label_309fd8;
        }
    }
    ctx->pc = 0x309FB8u;
    // 0x309fb8: 0xc0c085c  jal         func_302170
    ctx->pc = 0x309FB8u;
    SET_GPR_U32(ctx, 31, 0x309FC0u);
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x309FB8u, 0x309FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FC0u;
label_309fc0:
    // 0x309fc0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x309fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x309fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x309fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309fc8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x309fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x309fcc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x309fd0: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x309FD0u;
    SET_GPR_U32(ctx, 31, 0x309FD8u);
    ctx->pc = 0x309FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309FD0u;
    // 0x309fd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x309FD0u, 0x309FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FD8u;
label_309fd8:
    // 0x309fd8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x309fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x309fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309fe0: 0xae030518  sw          $v1, 0x518($s0)
    ctx->pc = 0x309fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 3));
    // 0x309fe4: 0xa20205ab  sb          $v0, 0x5AB($s0)
    ctx->pc = 0x309fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1451), (uint8_t)GPR_U32(ctx, 2));
label_309fe8:
    // 0x309fe8: 0x860405a4  lh          $a0, 0x5A4($s0)
    ctx->pc = 0x309fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x309fec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x309fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x309ff0: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x309ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x309ff4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x309ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x309ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309ffc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x309ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30a000: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x30a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x30a004: 0xa60205a4  sh          $v0, 0x5A4($s0)
    ctx->pc = 0x30a004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 2));
    // 0x30a008: 0x86020512  lh          $v0, 0x512($s0)
    ctx->pc = 0x30a008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x30a00c: 0xc601059c  lwc1        $f1, 0x59C($s0)
    ctx->pc = 0x30a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a010: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30a010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30a014: 0x0  nop
    ctx->pc = 0x30a014u;
    // NOP
    // 0x30a018: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x30a018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x30a01c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x30a01cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x30a020: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30a020u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30a024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30a024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a028: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30A028u;
    {
        const bool branch_taken_0x30a028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A028u;
        // 0x30a02c: 0xe601059c  swc1        $f1, 0x59C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1436), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a028) {
            ctx->pc = 0x30A038u;
            goto label_30a038;
        }
    }
    ctx->pc = 0x30A030u;
    // 0x30a030: 0xe600059c  swc1        $f0, 0x59C($s0)
    ctx->pc = 0x30a030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1436), bits); }
    // 0x30a034: 0x0  nop
    ctx->pc = 0x30a034u;
    // NOP
label_30a038:
    // 0x30a038: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x30a038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x30a03c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A03Cu;
    {
        const bool branch_taken_0x30a03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A03Cu;
        // 0x30a040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a03c) {
            ctx->pc = 0x30A050u;
            goto label_30a050;
        }
    }
    ctx->pc = 0x30A044u;
    // 0x30a044: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30A044u;
    {
        const bool branch_taken_0x30a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a044) {
            ctx->pc = 0x30A0D0u;
            goto label_30a0d0;
        }
    }
    ctx->pc = 0x30A04Cu;
    // 0x30a04c: 0x0  nop
    ctx->pc = 0x30a04cu;
    // NOP
label_30a050:
    // 0x30a050: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x30a050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30a054: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x30a058: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30a05c: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30a05cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a060: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x30a060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x30a064: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30A064u;
    {
        const bool branch_taken_0x30a064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a064) {
            ctx->pc = 0x30A0A0u;
            goto label_30a0a0;
        }
    }
    ctx->pc = 0x30A06Cu;
    // 0x30a06c: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30a070: 0x28827ff0  slti        $v0, $a0, 0x7FF0
    ctx->pc = 0x30a070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30a074: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A074u;
    {
        const bool branch_taken_0x30a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A074u;
        // 0x30a078: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a074) {
            ctx->pc = 0x30A0C8u;
            goto label_30a0c8;
        }
    }
    ctx->pc = 0x30A07Cu;
    // 0x30a07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a080: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x30a080u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30a084: 0x0  nop
    ctx->pc = 0x30a084u;
    // NOP
    // 0x30a088: 0x0  nop
    ctx->pc = 0x30a088u;
    // NOP
    // 0x30a08c: 0x1810  mfhi        $v1
    ctx->pc = 0x30a08cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x30a090: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30a090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a094: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30A094u;
    {
        const bool branch_taken_0x30a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A094u;
        // 0x30a098: 0xa2020514  sb          $v0, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a094) {
            ctx->pc = 0x30A0C8u;
            goto label_30a0c8;
        }
    }
    ctx->pc = 0x30A09Cu;
    // 0x30a09c: 0x0  nop
    ctx->pc = 0x30a09cu;
    // NOP
label_30a0a0:
    // 0x30a0a0: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x30a0a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30a0a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30a0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30a0a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A0A8u;
    {
        const bool branch_taken_0x30a0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a0a8) {
            ctx->pc = 0x30A0C8u;
            goto label_30a0c8;
        }
    }
    ctx->pc = 0x30A0B0u;
    // 0x30a0b0: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30a0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a0b8: 0xa2020515  sb          $v0, 0x515($s0)
    ctx->pc = 0x30a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a0bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30A0BCu;
    {
        const bool branch_taken_0x30a0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0BCu;
        // 0x30a0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0bc) {
            ctx->pc = 0x30A0D0u;
            goto label_30a0d0;
        }
    }
    ctx->pc = 0x30A0C4u;
    // 0x30a0c4: 0x0  nop
    ctx->pc = 0x30a0c4u;
    // NOP
label_30a0c8:
    // 0x30a0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a0cc: 0x0  nop
    ctx->pc = 0x30a0ccu;
    // NOP
label_30a0d0:
    // 0x30a0d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A0D0u;
    {
        const bool branch_taken_0x30a0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0D0u;
        // 0x30a0d4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0d0) {
            ctx->pc = 0x30A0F0u;
            goto label_30a0f0;
        }
    }
    ctx->pc = 0x30A0D8u;
    // 0x30a0d8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x30a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30a0dc: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x30a0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a0e0: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x30a0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a0e4: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x30a0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a0e8: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x30a0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a0ec: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x30a0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_30a0f0:
    // 0x30a0f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30a0f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30a0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0f8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x30a0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0fc: 0x27b10168  addiu       $s1, $sp, 0x168
    ctx->pc = 0x30a0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_30a100:
    // 0x30a100: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x30a100u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30a104: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x30a108: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30a108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30a10c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x30a10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x30a110: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x30a110u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x30a114: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x30a114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30a118: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x30a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x30a11c: 0x7fa40160  sq          $a0, 0x160($sp)
    ctx->pc = 0x30a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 4));
    // 0x30a120: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x30a120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x30a124: 0x2010  mfhi        $a0
    ctx->pc = 0x30a124u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x30a128: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x30a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a12c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x30a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a130: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30a130u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30a134: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30a134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30a138: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30a13c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a140: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30a144: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30a144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30a148: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x30a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x30a14c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30a150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30a154: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a158: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a15c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30a15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30a160: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a164: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x30a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x30a168: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x30a168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x30a16c: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x30a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a170: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x30a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a174: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30a178: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a17c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30a17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30a180: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30a180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30a184: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30a188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30a18c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a190: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30a190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a194: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30a194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30a198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a19c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x30a19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x30a1a0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A1A0u;
    SET_GPR_U32(ctx, 31, 0x30A1A8u);
    ctx->pc = 0x30A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1A0u;
    // 0x30a1a4: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A1A0u, 0x30A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1A8u;
label_30a1a8:
    // 0x30a1a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A1A8u;
    {
        const bool branch_taken_0x30a1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1a8) {
            ctx->pc = 0x30A1B8u;
            goto label_30a1b8;
        }
    }
    ctx->pc = 0x30A1B0u;
    // 0x30a1b0: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x30a1b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30a1b4: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x30a1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_30a1b8:
    // 0x30a1b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30a1b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30a1bc: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x30a1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30a1c0: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x30a1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x30a1c4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x30A1C4u;
    {
        const bool branch_taken_0x30a1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1C4u;
        // 0x30a1c8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1c4) {
            ctx->pc = 0x30A100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a100;
        }
    }
    ctx->pc = 0x30A1CCu;
    // 0x30a1cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30a1ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a1d0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x30a1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a1d4: 0x27b100c4  addiu       $s1, $sp, 0xC4
    ctx->pc = 0x30a1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x30a1d8: 0x27b600b4  addiu       $s6, $sp, 0xB4
    ctx->pc = 0x30a1d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x30a1dc: 0x0  nop
    ctx->pc = 0x30a1dcu;
    // NOP
label_30a1e0:
    // 0x30a1e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a1e4: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A1E4u;
    {
        const bool branch_taken_0x30a1e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1E4u;
        // 0x30a1e8: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1e4) {
            ctx->pc = 0x30A1F0u;
            goto label_30a1f0;
        }
    }
    ctx->pc = 0x30A1ECu;
    // 0x30a1ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30a1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a1f0:
    // 0x30a1f0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A1F0u;
    SET_GPR_U32(ctx, 31, 0x30A1F8u);
    ctx->pc = 0x30A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A1F0u;
    // 0x30a1f4: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A1F0u, 0x30A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1F8u;
label_30a1f8:
    // 0x30a1f8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x30a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x30a1fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30a1fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a200: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x30a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30a204: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A204u;
    SET_GPR_U32(ctx, 31, 0x30A20Cu);
    ctx->pc = 0x30A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A204u;
    // 0x30a208: 0x8c440570  lw          $a0, 0x570($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A204u, 0x30A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A20Cu;
label_30a20c:
    // 0x30a20c: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x30A20Cu;
    {
        const bool branch_taken_0x30a20c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A20Cu;
        // 0x30a210: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a20c) {
            ctx->pc = 0x30A288u;
            goto label_30a288;
        }
    }
    ctx->pc = 0x30A214u;
    // 0x30a214: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x30A214u;
    {
        const bool branch_taken_0x30a214 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A214u;
        // 0x30a218: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a214) {
            ctx->pc = 0x30A288u;
            goto label_30a288;
        }
    }
    ctx->pc = 0x30A21Cu;
    // 0x30a21c: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x30A21Cu;
    SET_GPR_U32(ctx, 31, 0x30A224u);
    ctx->pc = 0x30A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A21Cu;
    // 0x30a220: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x30A21Cu, 0x30A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A224u;
label_30a224:
    // 0x30a224: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x30a224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x30a228: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x30A228u;
    SET_GPR_U32(ctx, 31, 0x30A230u);
    ctx->pc = 0x30A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A228u;
    // 0x30a22c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x30A228u, 0x30A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A230u;
label_30a230:
    // 0x30a230: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x30a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a234: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x30a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x30a238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a23c: 0x0  nop
    ctx->pc = 0x30a23cu;
    // NOP
    // 0x30a240: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a244: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x30a244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x30a248: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x30a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a24c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a24cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a250: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x30a250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x30a254: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A254u;
    SET_GPR_U32(ctx, 31, 0x30A25Cu);
    ctx->pc = 0x30A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A254u;
    // 0x30a258: 0x8e440584  lw          $a0, 0x584($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A254u, 0x30A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A25Cu;
label_30a25c:
    // 0x30a25c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30a25cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a260: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A260u;
    {
        const bool branch_taken_0x30a260 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A260u;
        // 0x30a264: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a260) {
            ctx->pc = 0x30A288u;
            goto label_30a288;
        }
    }
    ctx->pc = 0x30A268u;
    // 0x30a268: 0xc0c29f4  jal         func_30A7D0
    ctx->pc = 0x30A268u;
    SET_GPR_U32(ctx, 31, 0x30A270u);
    ctx->pc = 0x30A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A268u;
    // 0x30a26c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7D0u, 0x30A268u, 0x30A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A270u;
label_30a270:
    // 0x30a270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a274: 0xc0c29f0  jal         func_30A7C0
    ctx->pc = 0x30A274u;
    SET_GPR_U32(ctx, 31, 0x30A27Cu);
    ctx->pc = 0x30A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A274u;
    // 0x30a278: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7C0u, 0x30A274u, 0x30A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A27Cu;
label_30a27c:
    // 0x30a27c: 0x860505a6  lh          $a1, 0x5A6($s0)
    ctx->pc = 0x30a27cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1446)));
    // 0x30a280: 0xc0c29f8  jal         func_30A7E0
    ctx->pc = 0x30A280u;
    SET_GPR_U32(ctx, 31, 0x30A288u);
    ctx->pc = 0x30A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A280u;
    // 0x30a284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7E0u, 0x30A280u, 0x30A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A288u;
label_30a288:
    // 0x30a288: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30a288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30a28c: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x30a28cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30a290: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x30A290u;
    {
        const bool branch_taken_0x30a290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A290u;
        // 0x30a294: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a290) {
            ctx->pc = 0x30A1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a1e0;
        }
    }
    ctx->pc = 0x30A298u;
    // 0x30a298: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x30A298u;
    {
        const bool branch_taken_0x30a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a298) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x30A2A0u;
label_30a2a0:
    // 0x30a2a0: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x30a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x30a2a4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x30a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x30a2a8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x30A2A8u;
    SET_GPR_U32(ctx, 31, 0x30A2B0u);
    ctx->pc = 0x30A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A2A8u;
    // 0x30a2ac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x30A2A8u, 0x30A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A2B0u;
label_30a2b0:
    // 0x30a2b0: 0x860305a4  lh          $v1, 0x5A4($s0)
    ctx->pc = 0x30a2b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x30a2b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30a2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a2b8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x30a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x30a2bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x30a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x30a2c0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x30a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x30a2c4: 0xa60305a4  sh          $v1, 0x5A4($s0)
    ctx->pc = 0x30a2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a2c8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A2C8u;
    {
        const bool branch_taken_0x30a2c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2C8u;
        // 0x30a2cc: 0xae02059c  sw          $v0, 0x59C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2c8) {
            ctx->pc = 0x30A2D8u;
            goto label_30a2d8;
        }
    }
    ctx->pc = 0x30A2D0u;
    // 0x30a2d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30A2D0u;
    {
        const bool branch_taken_0x30a2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2D0u;
        // 0x30a2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2d0) {
            ctx->pc = 0x30A310u;
            goto label_30a310;
        }
    }
    ctx->pc = 0x30A2D8u;
label_30a2d8:
    // 0x30a2d8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x30a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x30a2dc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x30a2dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a2e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A2E0u;
    {
        const bool branch_taken_0x30a2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2E0u;
        // 0x30a2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2e0) {
            ctx->pc = 0x30A2F0u;
            goto label_30a2f0;
        }
    }
    ctx->pc = 0x30A2E8u;
    // 0x30a2e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30A2E8u;
    {
        const bool branch_taken_0x30a2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a2e8) {
            ctx->pc = 0x30A310u;
            goto label_30a310;
        }
    }
    ctx->pc = 0x30A2F0u;
label_30a2f0:
    // 0x30a2f0: 0xc0c085c  jal         func_302170
    ctx->pc = 0x30A2F0u;
    SET_GPR_U32(ctx, 31, 0x30A2F8u);
    ctx->pc = 0x30A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A2F0u;
    // 0x30a2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x30A2F0u, 0x30A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A2F8u;
label_30a2f8:
    // 0x30a2f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x30a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a2fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a300: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x30a300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30a304: 0xc0976ac  jal         func_25DAB0
    ctx->pc = 0x30A304u;
    SET_GPR_U32(ctx, 31, 0x30A30Cu);
    ctx->pc = 0x30A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A304u;
    // 0x30a308: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DAB0u, 0x30A304u, 0x30A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A30Cu;
label_30a30c:
    // 0x30a30c: 0x0  nop
    ctx->pc = 0x30a30cu;
    // NOP
label_30a310:
    // 0x30a310: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A310u;
    {
        const bool branch_taken_0x30a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A310u;
        // 0x30a314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a310) {
            ctx->pc = 0x30A328u;
            goto label_30a328;
        }
    }
    ctx->pc = 0x30A318u;
    // 0x30a318: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30A318u;
    SET_GPR_U32(ctx, 31, 0x30A320u);
    ctx->pc = 0x30A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A318u;
    // 0x30a31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30A318u, 0x30A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A320u;
label_30a320:
    // 0x30a320: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x30A320u;
    {
        const bool branch_taken_0x30a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a320) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x30A328u;
label_30a328:
    // 0x30a328: 0x920205ab  lbu         $v0, 0x5AB($s0)
    ctx->pc = 0x30a328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1451)));
    // 0x30a32c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x30A32Cu;
    {
        const bool branch_taken_0x30a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a32c) {
            ctx->pc = 0x30A480u;
            goto label_30a480;
        }
    }
    ctx->pc = 0x30A334u;
    // 0x30a334: 0x12200052  beqz        $s1, . + 4 + (0x52 << 2)
    ctx->pc = 0x30A334u;
    {
        const bool branch_taken_0x30a334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a334) {
            ctx->pc = 0x30A480u;
            goto label_30a480;
        }
    }
    ctx->pc = 0x30A33Cu;
    // 0x30a33c: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x30a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x30a340: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x30a340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a344: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x30A344u;
    {
        const bool branch_taken_0x30a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a344) {
            ctx->pc = 0x30A480u;
            goto label_30a480;
        }
    }
    ctx->pc = 0x30A34Cu;
    // 0x30a34c: 0xc097864  jal         func_25E190
    ctx->pc = 0x30A34Cu;
    SET_GPR_U32(ctx, 31, 0x30A354u);
    ctx->pc = 0x30A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A34Cu;
    // 0x30a350: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x30A34Cu, 0x30A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A354u;
label_30a354:
    // 0x30a354: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x30A354u;
    {
        const bool branch_taken_0x30a354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a354) {
            ctx->pc = 0x30A480u;
            goto label_30a480;
        }
    }
    ctx->pc = 0x30A35Cu;
    // 0x30a35c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x30a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x30a360: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x30a360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x30a364: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x30a364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x30a368: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x30a368u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x30a36c: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x30a36cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x30a370: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x30a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x30a374: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x30A374u;
    {
        const bool branch_taken_0x30a374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a374) {
            ctx->pc = 0x30A498u;
            goto label_30a498;
        }
    }
    ctx->pc = 0x30A37Cu;
    // 0x30a37c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x30a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x30a380: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30a380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30a384: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x30a384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x30a388: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x30a388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30a38c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a390: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x30a390u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x30a394: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x30a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x30a398: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x30a39c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A39Cu;
    {
        const bool branch_taken_0x30a39c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A39Cu;
        // 0x30a3a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a39c) {
            ctx->pc = 0x30A3B0u;
            goto label_30a3b0;
        }
    }
    ctx->pc = 0x30A3A4u;
    // 0x30a3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a3a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A3A8u;
    {
        const bool branch_taken_0x30a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3A8u;
        // 0x30a3ac: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3a8) {
            ctx->pc = 0x30A3C8u;
            goto label_30a3c8;
        }
    }
    ctx->pc = 0x30A3B0u;
label_30a3b0:
    // 0x30a3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30a3b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30a3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30a3b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a3bc: 0x0  nop
    ctx->pc = 0x30a3bcu;
    // NOP
    // 0x30a3c0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x30a3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x30a3c4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x30a3c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_30a3c8:
    // 0x30a3c8: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x30a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x30a3cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30a3d0: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x30a3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x30a3d4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x30a3d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30a3d8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x30a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x30a3dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a3e0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x30a3e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x30a3e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30a3e8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x30a3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x30a3ec: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x30a3ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30a3f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30a3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a3f4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x30a3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a3f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30a3f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30a3fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a3fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a400: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x30a400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x30a404: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x30a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x30a408: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x30a408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30a40c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a410: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x30a410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x30a414: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x30a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x30a418: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x30a418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x30a41c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A41Cu;
    {
        const bool branch_taken_0x30a41c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A41Cu;
        // 0x30a420: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a41c) {
            ctx->pc = 0x30A430u;
            goto label_30a430;
        }
    }
    ctx->pc = 0x30A424u;
    // 0x30a424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a428: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A428u;
    {
        const bool branch_taken_0x30a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A428u;
        // 0x30a42c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a428) {
            ctx->pc = 0x30A448u;
            goto label_30a448;
        }
    }
    ctx->pc = 0x30A430u;
label_30a430:
    // 0x30a430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30a434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30a434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30a438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a43c: 0x0  nop
    ctx->pc = 0x30a43cu;
    // NOP
    // 0x30a440: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x30a440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x30a444: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x30a444u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_30a448:
    // 0x30a448: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x30a448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x30a44c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30a450: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x30a450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x30a454: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x30a454u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30a458: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30a458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x30a45c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30a45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a460: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x30a460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x30a464: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x30a464u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x30a468: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a46c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x30a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a470: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30a470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30a474: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a478: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A478u;
    {
        const bool branch_taken_0x30a478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A478u;
        // 0x30a47c: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a478) {
            ctx->pc = 0x30A498u;
            goto label_30a498;
        }
    }
    ctx->pc = 0x30A480u;
label_30a480:
    // 0x30a480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a484: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30A484u;
    SET_GPR_U32(ctx, 31, 0x30A48Cu);
    ctx->pc = 0x30A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A484u;
    // 0x30a488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30A484u, 0x30A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A48Cu;
label_30a48c:
    // 0x30a48c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x30A48Cu;
    {
        const bool branch_taken_0x30a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a48c) {
            ctx->pc = 0x30A790u;
            goto label_30a790;
        }
    }
    ctx->pc = 0x30A494u;
    // 0x30a494: 0x0  nop
    ctx->pc = 0x30a494u;
    // NOP
label_30a498:
    // 0x30a498: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x30a498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30a49c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a4a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A4A0u;
    {
        const bool branch_taken_0x30a4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4A0u;
        // 0x30a4a4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4a0) {
            ctx->pc = 0x30A4B8u;
            goto label_30a4b8;
        }
    }
    ctx->pc = 0x30A4A8u;
    // 0x30a4a8: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x30a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x30a4ac: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x30a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x30a4b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A4B0u;
    {
        const bool branch_taken_0x30a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a4b0) {
            ctx->pc = 0x30A4D8u;
            goto label_30a4d8;
        }
    }
    ctx->pc = 0x30A4B8u;
label_30a4b8:
    // 0x30a4b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a4bc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30A4BCu;
    {
        const bool branch_taken_0x30a4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4BCu;
        // 0x30a4c0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4bc) {
            ctx->pc = 0x30A518u;
            goto label_30a518;
        }
    }
    ctx->pc = 0x30A4C4u;
    // 0x30a4c4: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x30a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x30a4c8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x30a4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x30a4cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30A4CCu;
    {
        const bool branch_taken_0x30a4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a4cc) {
            ctx->pc = 0x30A518u;
            goto label_30a518;
        }
    }
    ctx->pc = 0x30A4D4u;
    // 0x30a4d4: 0x0  nop
    ctx->pc = 0x30a4d4u;
    // NOP
label_30a4d8:
    // 0x30a4d8: 0x8e040598  lw          $a0, 0x598($s0)
    ctx->pc = 0x30a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x30a4dc: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x30A4DCu;
    SET_GPR_U32(ctx, 31, 0x30A4E4u);
    ctx->pc = 0x30A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4DCu;
    // 0x30a4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x30A4DCu, 0x30A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4E4u;
label_30a4e4:
    // 0x30a4e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30a4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x30a4e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4ec: 0x0  nop
    ctx->pc = 0x30a4ecu;
    // NOP
label_30a4f0:
    // 0x30a4f0: 0x8e240570  lw          $a0, 0x570($s1)
    ctx->pc = 0x30a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x30a4f4: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x30A4F4u;
    SET_GPR_U32(ctx, 31, 0x30A4FCu);
    ctx->pc = 0x30A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4F4u;
    // 0x30a4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x30A4F4u, 0x30A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4FCu;
label_30a4fc:
    // 0x30a4fc: 0x8e240584  lw          $a0, 0x584($s1)
    ctx->pc = 0x30a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x30a500: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x30A500u;
    SET_GPR_U32(ctx, 31, 0x30A508u);
    ctx->pc = 0x30A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A500u;
    // 0x30a504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x30A500u, 0x30A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A508u;
label_30a508:
    // 0x30a508: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30a508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30a50c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x30a50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30a510: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30A510u;
    {
        const bool branch_taken_0x30a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A510u;
        // 0x30a514: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a510) {
            ctx->pc = 0x30A4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a4f0;
        }
    }
    ctx->pc = 0x30A518u;
label_30a518:
    // 0x30a518: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x30a518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30a51c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x30a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x30a520: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x30a520u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30a524: 0x0  nop
    ctx->pc = 0x30a524u;
    // NOP
    // 0x30a528: 0x0  nop
    ctx->pc = 0x30a528u;
    // NOP
    // 0x30a52c: 0x1010  mfhi        $v0
    ctx->pc = 0x30a52cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30a530: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30A530u;
    {
        const bool branch_taken_0x30a530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a530) {
            ctx->pc = 0x30A570u;
            goto label_30a570;
        }
    }
    ctx->pc = 0x30A538u;
    // 0x30a538: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x30a538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x30a53c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30a540: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x30a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
    // 0x30a544: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30a544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30a548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a54c: 0x34456a02  ori         $a1, $v0, 0x6A02
    ctx->pc = 0x30a54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27138);
    // 0x30a550: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x30a550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30a554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30a554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30a558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a55c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30a55cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a560: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30a560u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a564: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30A564u;
    SET_GPR_U32(ctx, 31, 0x30A56Cu);
    ctx->pc = 0x30A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A564u;
    // 0x30a568: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30A564u, 0x30A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A56Cu;
label_30a56c:
    // 0x30a56c: 0x0  nop
    ctx->pc = 0x30a56cu;
    // NOP
label_30a570:
    // 0x30a570: 0x92020515  lbu         $v0, 0x515($s0)
    ctx->pc = 0x30a570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x30a574: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30A574u;
    {
        const bool branch_taken_0x30a574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a574) {
            ctx->pc = 0x30A5E8u;
            goto label_30a5e8;
        }
    }
    ctx->pc = 0x30A57Cu;
    // 0x30a57c: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x30a57cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30a580: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x30a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x30a584: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30a588: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30a588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a58c: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x30a58cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x30a590: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30A590u;
    {
        const bool branch_taken_0x30a590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a590) {
            ctx->pc = 0x30A5C8u;
            goto label_30a5c8;
        }
    }
    ctx->pc = 0x30A598u;
    // 0x30a598: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x30a598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30a59c: 0x28827ff0  slti        $v0, $a0, 0x7FF0
    ctx->pc = 0x30a59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30a5a0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A5A0u;
    {
        const bool branch_taken_0x30a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5A0u;
        // 0x30a5a4: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5a0) {
            ctx->pc = 0x30A5E8u;
            goto label_30a5e8;
        }
    }
    ctx->pc = 0x30A5A8u;
    // 0x30a5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a5ac: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x30a5acu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30a5b0: 0x0  nop
    ctx->pc = 0x30a5b0u;
    // NOP
    // 0x30a5b4: 0x0  nop
    ctx->pc = 0x30a5b4u;
    // NOP
    // 0x30a5b8: 0x1810  mfhi        $v1
    ctx->pc = 0x30a5b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x30a5bc: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30a5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a5c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30A5C0u;
    {
        const bool branch_taken_0x30a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5C0u;
        // 0x30a5c4: 0xa2020514  sb          $v0, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5c0) {
            ctx->pc = 0x30A5E8u;
            goto label_30a5e8;
        }
    }
    ctx->pc = 0x30A5C8u;
label_30a5c8:
    // 0x30a5c8: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x30a5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30a5cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30a5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30a5d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A5D0u;
    {
        const bool branch_taken_0x30a5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a5d0) {
            ctx->pc = 0x30A5E8u;
            goto label_30a5e8;
        }
    }
    ctx->pc = 0x30A5D8u;
    // 0x30a5d8: 0xa6030510  sh          $v1, 0x510($s0)
    ctx->pc = 0x30a5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a5e0: 0xa2020515  sb          $v0, 0x515($s0)
    ctx->pc = 0x30a5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a5e4: 0x0  nop
    ctx->pc = 0x30a5e4u;
    // NOP
label_30a5e8:
    // 0x30a5e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30a5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30a5ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5f0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x30a5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5f4: 0x27b10158  addiu       $s1, $sp, 0x158
    ctx->pc = 0x30a5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_30a5f8:
    // 0x30a5f8: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x30a5f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30a5fc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x30a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x30a600: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30a600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30a604: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x30a604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x30a608: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x30a608u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x30a60c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x30a60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30a610: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x30a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x30a614: 0x7fa40150  sq          $a0, 0x150($sp)
    ctx->pc = 0x30a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 4));
    // 0x30a618: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x30a618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x30a61c: 0x2010  mfhi        $a0
    ctx->pc = 0x30a61cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x30a620: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x30a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a624: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x30a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a628: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30a628u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30a62c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30a630: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30a634: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a638: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30a638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30a63c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30a63cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30a640: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x30a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x30a644: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30a648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30a64c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a650: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a654: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30a654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30a658: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a65c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x30a65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x30a660: 0x860205a4  lh          $v0, 0x5A4($s0)
    ctx->pc = 0x30a660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x30a664: 0xc602059c  lwc1        $f2, 0x59C($s0)
    ctx->pc = 0x30a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a668: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x30a668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a66c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30a670: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a674: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30a674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30a678: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30a678u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30a67c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30a680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30a680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30a684: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a688: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a68c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30a68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30a690: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a694: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x30a694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x30a698: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A698u;
    SET_GPR_U32(ctx, 31, 0x30A6A0u);
    ctx->pc = 0x30A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A698u;
    // 0x30a69c: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A698u, 0x30A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6A0u;
label_30a6a0:
    // 0x30a6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A6A0u;
    {
        const bool branch_taken_0x30a6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a6a0) {
            ctx->pc = 0x30A6B0u;
            goto label_30a6b0;
        }
    }
    ctx->pc = 0x30A6A8u;
    // 0x30a6a8: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x30a6a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30a6ac: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x30a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_30a6b0:
    // 0x30a6b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30a6b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30a6b4: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x30a6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30a6b8: 0x26731000  addiu       $s3, $s3, 0x1000
    ctx->pc = 0x30a6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x30a6bc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x30A6BCu;
    {
        const bool branch_taken_0x30a6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6BCu;
        // 0x30a6c0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6bc) {
            ctx->pc = 0x30A5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a5f8;
        }
    }
    ctx->pc = 0x30A6C4u;
    // 0x30a6c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30a6c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a6c8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x30a6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a6cc: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x30a6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x30a6d0: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x30a6d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x30a6d4: 0x0  nop
    ctx->pc = 0x30a6d4u;
    // NOP
label_30a6d8:
    // 0x30a6d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a6dc: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A6DCu;
    {
        const bool branch_taken_0x30a6dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6DCu;
        // 0x30a6e0: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6dc) {
            ctx->pc = 0x30A6E8u;
            goto label_30a6e8;
        }
    }
    ctx->pc = 0x30A6E4u;
    // 0x30a6e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30a6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a6e8:
    // 0x30a6e8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A6E8u;
    SET_GPR_U32(ctx, 31, 0x30A6F0u);
    ctx->pc = 0x30A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6E8u;
    // 0x30a6ec: 0x8e440570  lw          $a0, 0x570($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A6E8u, 0x30A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6F0u;
label_30a6f0:
    // 0x30a6f0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x30a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x30a6f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30a6f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a6f8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x30a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30a6fc: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A6FCu;
    SET_GPR_U32(ctx, 31, 0x30A704u);
    ctx->pc = 0x30A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6FCu;
    // 0x30a700: 0x8c440570  lw          $a0, 0x570($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A6FCu, 0x30A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A704u;
label_30a704:
    // 0x30a704: 0x1280001e  beqz        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x30A704u;
    {
        const bool branch_taken_0x30a704 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A704u;
        // 0x30a708: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a704) {
            ctx->pc = 0x30A780u;
            goto label_30a780;
        }
    }
    ctx->pc = 0x30A70Cu;
    // 0x30a70c: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x30A70Cu;
    {
        const bool branch_taken_0x30a70c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A70Cu;
        // 0x30a710: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a70c) {
            ctx->pc = 0x30A780u;
            goto label_30a780;
        }
    }
    ctx->pc = 0x30A714u;
    // 0x30a714: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x30A714u;
    SET_GPR_U32(ctx, 31, 0x30A71Cu);
    ctx->pc = 0x30A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A714u;
    // 0x30a718: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x30A714u, 0x30A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A71Cu;
label_30a71c:
    // 0x30a71c: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x30a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x30a720: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x30A720u;
    SET_GPR_U32(ctx, 31, 0x30A728u);
    ctx->pc = 0x30A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A720u;
    // 0x30a724: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x30A720u, 0x30A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A728u;
label_30a728:
    // 0x30a728: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x30a728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a72c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x30a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x30a730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a734: 0x0  nop
    ctx->pc = 0x30a734u;
    // NOP
    // 0x30a738: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a73c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x30a73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x30a740: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x30a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a748: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x30a748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x30a74c: 0xc096c80  jal         func_25B200
    ctx->pc = 0x30A74Cu;
    SET_GPR_U32(ctx, 31, 0x30A754u);
    ctx->pc = 0x30A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A74Cu;
    // 0x30a750: 0x8e440584  lw          $a0, 0x584($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x30A74Cu, 0x30A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A754u;
label_30a754:
    // 0x30a754: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30a754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a758: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x30A758u;
    {
        const bool branch_taken_0x30a758 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A758u;
        // 0x30a75c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a758) {
            ctx->pc = 0x30A780u;
            goto label_30a780;
        }
    }
    ctx->pc = 0x30A760u;
    // 0x30a760: 0xc0c29f4  jal         func_30A7D0
    ctx->pc = 0x30A760u;
    SET_GPR_U32(ctx, 31, 0x30A768u);
    ctx->pc = 0x30A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A760u;
    // 0x30a764: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7D0u, 0x30A760u, 0x30A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A768u;
label_30a768:
    // 0x30a768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a76c: 0xc0c29f0  jal         func_30A7C0
    ctx->pc = 0x30A76Cu;
    SET_GPR_U32(ctx, 31, 0x30A774u);
    ctx->pc = 0x30A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A76Cu;
    // 0x30a770: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7C0u, 0x30A76Cu, 0x30A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A774u;
label_30a774:
    // 0x30a774: 0x860505a6  lh          $a1, 0x5A6($s0)
    ctx->pc = 0x30a774u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1446)));
    // 0x30a778: 0xc0c29f8  jal         func_30A7E0
    ctx->pc = 0x30A778u;
    SET_GPR_U32(ctx, 31, 0x30A780u);
    ctx->pc = 0x30A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A778u;
    // 0x30a77c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7E0u, 0x30A778u, 0x30A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A780u;
label_30a780:
    // 0x30a780: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30a780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30a784: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x30a784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30a788: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x30A788u;
    {
        const bool branch_taken_0x30a788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A788u;
        // 0x30a78c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a788) {
            ctx->pc = 0x30A6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a6d8;
        }
    }
    ctx->pc = 0x30A790u;
label_30a790:
    // 0x30a790: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30a790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30a794: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x30a794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30a798: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30a798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30a79c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30a79cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a7a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30a7a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a7a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30a7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a7a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30a7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a7ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30a7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30A7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7B0u;
        // 0x30a7b4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A7B8u;
}
