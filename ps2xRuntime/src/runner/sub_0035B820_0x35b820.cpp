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

// Function: sub_0035B820
// Address: 0x35b820 - 0x35c644
void sub_0035B820_0x35b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B820_0x35b820");
#endif

    switch (ctx->pc) {
        case 0x35b934u: goto label_35b934;
        case 0x35b9a0u: goto label_35b9a0;
        case 0x35b9f0u: goto label_35b9f0;
        case 0x35ba08u: goto label_35ba08;
        case 0x35bb84u: goto label_35bb84;
        case 0x35bbe8u: goto label_35bbe8;
        case 0x35bc38u: goto label_35bc38;
        case 0x35bc50u: goto label_35bc50;
        case 0x35bc74u: goto label_35bc74;
        case 0x35bd30u: goto label_35bd30;
        case 0x35bd80u: goto label_35bd80;
        case 0x35bd98u: goto label_35bd98;
        case 0x35be0cu: goto label_35be0c;
        case 0x35bec0u: goto label_35bec0;
        case 0x35bee0u: goto label_35bee0;
        case 0x35bf4cu: goto label_35bf4c;
        case 0x35bf64u: goto label_35bf64;
        case 0x35bff8u: goto label_35bff8;
        case 0x35c038u: goto label_35c038;
        case 0x35c044u: goto label_35c044;
        case 0x35c084u: goto label_35c084;
        case 0x35c0a4u: goto label_35c0a4;
        case 0x35c0e0u: goto label_35c0e0;
        case 0x35c0ecu: goto label_35c0ec;
        case 0x35c128u: goto label_35c128;
        case 0x35c1e4u: goto label_35c1e4;
        case 0x35c224u: goto label_35c224;
        case 0x35c230u: goto label_35c230;
        case 0x35c270u: goto label_35c270;
        case 0x35c28cu: goto label_35c28c;
        case 0x35c2c8u: goto label_35c2c8;
        case 0x35c2d4u: goto label_35c2d4;
        case 0x35c310u: goto label_35c310;
        case 0x35c360u: goto label_35c360;
        case 0x35c3bcu: goto label_35c3bc;
        case 0x35c408u: goto label_35c408;
        case 0x35c464u: goto label_35c464;
        case 0x35c470u: goto label_35c470;
        case 0x35c4ccu: goto label_35c4cc;
        case 0x35c4ecu: goto label_35c4ec;
        case 0x35c544u: goto label_35c544;
        case 0x35c550u: goto label_35c550;
        case 0x35c5a8u: goto label_35c5a8;
        default: break;
    }

    ctx->pc = 0x35b820u;

    // 0x35b820: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x35b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x35b824: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35b824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35b828: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35b82c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x35b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x35b830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b834: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35b834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35b838: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x35b838u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35b83c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35b83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35b840: 0x1460037b  bnez        $v1, . + 4 + (0x37B << 2)
    ctx->pc = 0x35B840u;
    {
        const bool branch_taken_0x35b840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B840u;
        // 0x35b844: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b840) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35B848u;
    // 0x35b848: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35b848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35b84c: 0x14600378  bnez        $v1, . + 4 + (0x378 << 2)
    ctx->pc = 0x35B84Cu;
    {
        const bool branch_taken_0x35b84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b84c) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35B854u;
    // 0x35b854: 0x8f868bb8  lw          $a2, -0x7448($gp)
    ctx->pc = 0x35b854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b858: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35b858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35b85c: 0x80c70390  lb          $a3, 0x390($a2)
    ctx->pc = 0x35b85cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 912)));
    // 0x35b860: 0x10e3017b  beq         $a3, $v1, . + 4 + (0x17B << 2)
    ctx->pc = 0x35B860u;
    {
        const bool branch_taken_0x35b860 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x35B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B860u;
        // 0x35b864: 0x24c50390  addiu       $a1, $a2, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b860) {
            ctx->pc = 0x35BE50u;
            goto label_35be50;
        }
    }
    ctx->pc = 0x35B868u;
    // 0x35b868: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35b86c: 0x10e30178  beq         $a3, $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x35B86Cu;
    {
        const bool branch_taken_0x35b86c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x35B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B86Cu;
        // 0x35b870: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b86c) {
            ctx->pc = 0x35BE50u;
            goto label_35be50;
        }
    }
    ctx->pc = 0x35B874u;
    // 0x35b874: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35B874u;
    {
        const bool branch_taken_0x35b874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b874) {
            ctx->pc = 0x35B898u;
            goto label_35b898;
        }
    }
    ctx->pc = 0x35B87Cu;
    // 0x35b87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b880: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B880u;
    {
        const bool branch_taken_0x35b880 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b880) {
            ctx->pc = 0x35B898u;
            goto label_35b898;
        }
    }
    ctx->pc = 0x35B888u;
    // 0x35b888: 0x10e00369  beqz        $a3, . + 4 + (0x369 << 2)
    ctx->pc = 0x35B888u;
    {
        const bool branch_taken_0x35b888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b888) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35B890u;
    // 0x35b890: 0x10000367  b           . + 4 + (0x367 << 2)
    ctx->pc = 0x35B890u;
    {
        const bool branch_taken_0x35b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b890) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35B898u;
label_35b898:
    // 0x35b898: 0x80c30391  lb          $v1, 0x391($a2)
    ctx->pc = 0x35b898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 913)));
    // 0x35b89c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x35b89cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x35b8a0: 0x10200363  beqz        $at, . + 4 + (0x363 << 2)
    ctx->pc = 0x35B8A0u;
    {
        const bool branch_taken_0x35b8a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8A0u;
        // 0x35b8a4: 0x24c70391  addiu       $a3, $a2, 0x391 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 913));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8a0) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35B8A8u;
    // 0x35b8a8: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x35b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x35b8ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35b8b0: 0x2484fae0  addiu       $a0, $a0, -0x520
    ctx->pc = 0x35b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965984));
    // 0x35b8b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b8b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b8bc: 0x600008  jr          $v1
    ctx->pc = 0x35B8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35B8C8u: goto label_35b8c8;
            case 0x35B8F0u: goto label_35b8f0;
            case 0x35B948u: goto label_35b948;
            case 0x35BAE0u: goto label_35bae0;
            case 0x35BC58u: goto label_35bc58;
            case 0x35BE28u: goto label_35be28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B8BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35B8C4u;
    // 0x35b8c4: 0x0  nop
    ctx->pc = 0x35b8c4u;
    // NOP
label_35b8c8:
    // 0x35b8c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35b8cc: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x35b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35b8d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x35b8d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35b8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35b8d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35b8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35b8dc: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x35b8dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x35b8e0: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x35b8e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35b8e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b8e8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x35b8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b8ec: 0x0  nop
    ctx->pc = 0x35b8ecu;
    // NOP
label_35b8f0:
    // 0x35b8f0: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b8f4: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x35b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x35b8f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b8fc: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x35b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x35b900: 0x28630037  slti        $v1, $v1, 0x37
    ctx->pc = 0x35b900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x35b904: 0x1460034a  bnez        $v1, . + 4 + (0x34A << 2)
    ctx->pc = 0x35B904u;
    {
        const bool branch_taken_0x35b904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b904) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35B90Cu;
    // 0x35b90c: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b910: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x35b910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x35b914: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x35b914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x35b918: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x35b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x35b91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b920: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x35b920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x35b924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35b928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b92c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x35B92Cu;
    SET_GPR_U32(ctx, 31, 0x35B934u);
    ctx->pc = 0x35B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B92Cu;
    // 0x35b930: 0xac600394  sw          $zero, 0x394($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x35B92Cu, 0x35B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B934u;
label_35b934:
    // 0x35b934: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b938: 0x80620391  lb          $v0, 0x391($v1)
    ctx->pc = 0x35b938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 913)));
    // 0x35b93c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b940: 0xa0620391  sb          $v0, 0x391($v1)
    ctx->pc = 0x35b940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 2));
    // 0x35b944: 0x0  nop
    ctx->pc = 0x35b944u;
    // NOP
label_35b948:
    // 0x35b948: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35b948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b950: 0x80850390  lb          $a1, 0x390($a0)
    ctx->pc = 0x35b950u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35b954: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B954u;
    {
        const bool branch_taken_0x35b954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35b954) {
            ctx->pc = 0x35B970u;
            goto label_35b970;
        }
    }
    ctx->pc = 0x35B95Cu;
    // 0x35b95c: 0x848303a0  lh          $v1, 0x3A0($a0)
    ctx->pc = 0x35b95cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x35b960: 0x848203a4  lh          $v0, 0x3A4($a0)
    ctx->pc = 0x35b960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x35b964: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x35b964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35b968: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x35b968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35b96c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x35b96cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_35b970:
    // 0x35b970: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b974: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35B974u;
    {
        const bool branch_taken_0x35b974 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35b974) {
            ctx->pc = 0x35B998u;
            goto label_35b998;
        }
    }
    ctx->pc = 0x35B97Cu;
    // 0x35b97c: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b980: 0x844303a0  lh          $v1, 0x3A0($v0)
    ctx->pc = 0x35b980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 928)));
    // 0x35b984: 0x844203a4  lh          $v0, 0x3A4($v0)
    ctx->pc = 0x35b984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x35b988: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35b98c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x35b98cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35b990: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x35b990u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x35b994: 0x0  nop
    ctx->pc = 0x35b994u;
    // NOP
label_35b998:
    // 0x35b998: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35B998u;
    SET_GPR_U32(ctx, 31, 0x35B9A0u);
    ctx->pc = 0x35B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B998u;
    // 0x35b99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35B998u, 0x35B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9A0u;
label_35b9a0:
    // 0x35b9a0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x35b9a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35b9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b9a8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x35b9a8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x35b9ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35b9b0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x35b9b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b9b4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x35b9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35b9b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35b9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b9bc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x35b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x35b9c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35b9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35b9c4: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b9c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x35b9c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35b9cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b9d0: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x35b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x35b9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35b9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b9d8: 0x0  nop
    ctx->pc = 0x35b9d8u;
    // NOP
    // 0x35b9dc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x35b9dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35b9e0: 0x0  nop
    ctx->pc = 0x35b9e0u;
    // NOP
    // 0x35b9e4: 0x0  nop
    ctx->pc = 0x35b9e4u;
    // NOP
    // 0x35b9e8: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35B9E8u;
    SET_GPR_U32(ctx, 31, 0x35B9F0u);
    ctx->pc = 0x35B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B9E8u;
    // 0x35b9ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35B9E8u, 0x35B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9F0u;
label_35b9f0:
    // 0x35b9f0: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b9f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35b9f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35b9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b9fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35ba00: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35BA00u;
    SET_GPR_U32(ctx, 31, 0x35BA08u);
    ctx->pc = 0x35BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA00u;
    // 0x35ba04: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35BA00u, 0x35BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA08u;
label_35ba08:
    // 0x35ba08: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ba0c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x35ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x35ba10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x35ba10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35ba14: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35ba18: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x35ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x35ba1c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x35ba1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x35ba20: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x35ba24: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35ba24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35ba28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ba28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ba2c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35ba2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35ba30: 0x24a60394  addiu       $a2, $a1, 0x394
    ctx->pc = 0x35ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 916));
    // 0x35ba34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35ba34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35ba38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35ba38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ba3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35BA3Cu;
    {
        const bool branch_taken_0x35ba3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA3Cu;
        // 0x35ba40: 0x8ca50394  lw          $a1, 0x394($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba3c) {
            ctx->pc = 0x35BA54u;
            goto label_35ba54;
        }
    }
    ctx->pc = 0x35BA44u;
    // 0x35ba44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35ba44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35ba48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x35ba48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35ba4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35BA4Cu;
    {
        const bool branch_taken_0x35ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba4c) {
            ctx->pc = 0x35BA6Cu;
            goto label_35ba6c;
        }
    }
    ctx->pc = 0x35BA54u;
label_35ba54:
    // 0x35ba54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35ba54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35ba58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35ba5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35ba5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35ba60: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x35ba60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35ba64: 0x0  nop
    ctx->pc = 0x35ba64u;
    // NOP
    // 0x35ba68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x35ba68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_35ba6c:
    // 0x35ba6c: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BA6Cu;
    {
        const bool branch_taken_0x35ba6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x35BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA6Cu;
        // 0x35ba70: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba6c) {
            ctx->pc = 0x35BA90u;
            goto label_35ba90;
        }
    }
    ctx->pc = 0x35BA74u;
    // 0x35ba74: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x35ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x35ba78: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35ba7c: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x35ba7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x35ba80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ba84: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x35BA84u;
    {
        const bool branch_taken_0x35ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA84u;
        // 0x35ba88: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba84) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BA8Cu;
    // 0x35ba8c: 0x0  nop
    ctx->pc = 0x35ba8cu;
    // NOP
label_35ba90:
    // 0x35ba90: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x35ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35ba94: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x35ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x35ba98: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35ba9c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x35ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x35baa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35baa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35baa4: 0xa51818  mult        $v1, $a1, $a1
    ctx->pc = 0x35baa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35baa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35baa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35baac: 0x0  nop
    ctx->pc = 0x35baacu;
    // NOP
    // 0x35bab0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35bab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35bab4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35bab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35bab8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35bab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35babc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x35babcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35bac0: 0x0  nop
    ctx->pc = 0x35bac0u;
    // NOP
    // 0x35bac4: 0xa48303a4  sh          $v1, 0x3A4($a0)
    ctx->pc = 0x35bac4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x35bac8: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bacc: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x35baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x35bad0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35bad4: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x35BAD4u;
    {
        const bool branch_taken_0x35bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAD4u;
        // 0x35bad8: 0xac830394  sw          $v1, 0x394($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bad4) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BADCu;
    // 0x35badc: 0x0  nop
    ctx->pc = 0x35badcu;
    // NOP
label_35bae0:
    // 0x35bae0: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bae4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x35bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x35bae8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x35bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x35baec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35baecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35baf0: 0x84a403a4  lh          $a0, 0x3A4($a1)
    ctx->pc = 0x35baf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x35baf4: 0x8ca20394  lw          $v0, 0x394($a1)
    ctx->pc = 0x35baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
    // 0x35baf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35baf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35bafc: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x35bafcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35bb00: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x35bb00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35bb04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35bb08: 0xaca20394  sw          $v0, 0x394($a1)
    ctx->pc = 0x35bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 916), GPR_U32(ctx, 2));
    // 0x35bb0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35bb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35bb10: 0x0  nop
    ctx->pc = 0x35bb10u;
    // NOP
    // 0x35bb14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35bb14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35bb18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35bb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35bb1c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x35bb1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x35bb20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35bb20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35bb24: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35bb24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35bb28: 0x0  nop
    ctx->pc = 0x35bb28u;
    // NOP
    // 0x35bb2c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x35bb2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35bb30: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x35bb30u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x35bb34: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x35bb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x35bb38: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35BB38u;
    {
        const bool branch_taken_0x35bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bb38) {
            ctx->pc = 0x35BB88u;
            goto label_35bb88;
        }
    }
    ctx->pc = 0x35BB40u;
    // 0x35bb40: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bb44: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x35bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x35bb48: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x35bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x35bb4c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x35bb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x35bb50: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x35bb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35bb54: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x35bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x35bb58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35bb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35bb60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bb64: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x35bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x35bb68: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bb6c: 0x80620391  lb          $v0, 0x391($v1)
    ctx->pc = 0x35bb6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 913)));
    // 0x35bb70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35bb74: 0xa0620391  sb          $v0, 0x391($v1)
    ctx->pc = 0x35bb74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 2));
    // 0x35bb78: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bb7c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x35BB7Cu;
    SET_GPR_U32(ctx, 31, 0x35BB84u);
    ctx->pc = 0x35BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB7Cu;
    // 0x35bb80: 0xa45003a4  sh          $s0, 0x3A4($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 932), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x35BB7Cu, 0x35BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB84u;
label_35bb84:
    // 0x35bb84: 0x0  nop
    ctx->pc = 0x35bb84u;
    // NOP
label_35bb88:
    // 0x35bb88: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bb8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bb90: 0x80850390  lb          $a1, 0x390($a0)
    ctx->pc = 0x35bb90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35bb94: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BB94u;
    {
        const bool branch_taken_0x35bb94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bb94) {
            ctx->pc = 0x35BBB8u;
            goto label_35bbb8;
        }
    }
    ctx->pc = 0x35BB9Cu;
    // 0x35bb9c: 0x848303a0  lh          $v1, 0x3A0($a0)
    ctx->pc = 0x35bb9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x35bba0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x35bba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x35bba4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35bba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35bba8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x35bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bbac: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x35bbacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35bbb0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x35bbb0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x35bbb4: 0x0  nop
    ctx->pc = 0x35bbb4u;
    // NOP
label_35bbb8:
    // 0x35bbb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bbbc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BBBCu;
    {
        const bool branch_taken_0x35bbbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bbbc) {
            ctx->pc = 0x35BBE0u;
            goto label_35bbe0;
        }
    }
    ctx->pc = 0x35BBC4u;
    // 0x35bbc4: 0x848303a0  lh          $v1, 0x3A0($a0)
    ctx->pc = 0x35bbc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x35bbc8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x35bbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x35bbcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35bbccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35bbd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bbd4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x35bbd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35bbd8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x35bbd8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x35bbdc: 0x0  nop
    ctx->pc = 0x35bbdcu;
    // NOP
label_35bbe0:
    // 0x35bbe0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35BBE0u;
    SET_GPR_U32(ctx, 31, 0x35BBE8u);
    ctx->pc = 0x35BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BBE0u;
    // 0x35bbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35BBE0u, 0x35BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BBE8u;
label_35bbe8:
    // 0x35bbe8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35bbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35bbec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbf0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35bbf0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35bbf4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35bbf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35bbf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35bbfc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x35bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35bc00: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35bc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35bc04: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x35bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x35bc08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35bc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35bc0c: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bc10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x35bc10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35bc14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35bc18: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x35bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x35bc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35bc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35bc20: 0x0  nop
    ctx->pc = 0x35bc20u;
    // NOP
    // 0x35bc24: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x35bc24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35bc28: 0x0  nop
    ctx->pc = 0x35bc28u;
    // NOP
    // 0x35bc2c: 0x0  nop
    ctx->pc = 0x35bc2cu;
    // NOP
    // 0x35bc30: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35BC30u;
    SET_GPR_U32(ctx, 31, 0x35BC38u);
    ctx->pc = 0x35BC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC30u;
    // 0x35bc34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35BC30u, 0x35BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC38u;
label_35bc38:
    // 0x35bc38: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bc3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35bc3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35bc40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35bc48: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35BC48u;
    SET_GPR_U32(ctx, 31, 0x35BC50u);
    ctx->pc = 0x35BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC48u;
    // 0x35bc4c: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35BC48u, 0x35BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC50u;
label_35bc50:
    // 0x35bc50: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x35BC50u;
    {
        const bool branch_taken_0x35bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bc50) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BC58u;
label_35bc58:
    // 0x35bc58: 0x8cc20394  lw          $v0, 0x394($a2)
    ctx->pc = 0x35bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 916)));
    // 0x35bc5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35BC5Cu;
    {
        const bool branch_taken_0x35bc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC5Cu;
        // 0x35bc60: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bc5c) {
            ctx->pc = 0x35BC78u;
            goto label_35bc78;
        }
    }
    ctx->pc = 0x35BC64u;
    // 0x35bc64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35bc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc68: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x35bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x35bc6c: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x35BC6Cu;
    SET_GPR_U32(ctx, 31, 0x35BC74u);
    ctx->pc = 0x35BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC6Cu;
    // 0x35bc70: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x35BC6Cu, 0x35BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC74u;
label_35bc74:
    // 0x35bc74: 0x0  nop
    ctx->pc = 0x35bc74u;
    // NOP
label_35bc78:
    // 0x35bc78: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x35bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x35bc7c: 0x24638670  addiu       $v1, $v1, -0x7990
    ctx->pc = 0x35bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936176));
    // 0x35bc80: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x35bc80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x35bc84: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x35bc84u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x658670u));
    // 0x35bc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bc8c: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x35bc8cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x658680u));
    // 0x35bc90: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x35bc90u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x658690u));
    // 0x35bc94: 0xdc630030  ld          $v1, 0x30($v1)
    ctx->pc = 0x35bc94u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6586A0u));
    // 0x35bc98: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x35bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x35bc9c: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x35bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x35bca0: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x35bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x35bca4: 0xfce30030  sd          $v1, 0x30($a3)
    ctx->pc = 0x35bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 3));
    // 0x35bca8: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bcac: 0x8ca40394  lw          $a0, 0x394($a1)
    ctx->pc = 0x35bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
    // 0x35bcb0: 0x84a303a4  lh          $v1, 0x3A4($a1)
    ctx->pc = 0x35bcb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x35bcb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35bcb8: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x35bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x35bcbc: 0x8c840180  lw          $a0, 0x180($a0)
    ctx->pc = 0x35bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x35bcc0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x35bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35bcc4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x35bcc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x35bcc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35bcc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35bccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35bcd0: 0xa4a303a4  sh          $v1, 0x3A4($a1)
    ctx->pc = 0x35bcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x35bcd4: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bcd8: 0x80a60390  lb          $a2, 0x390($a1)
    ctx->pc = 0x35bcd8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x35bcdc: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BCDCu;
    {
        const bool branch_taken_0x35bcdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x35BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCDCu;
        // 0x35bce0: 0x84a403a4  lh          $a0, 0x3A4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bcdc) {
            ctx->pc = 0x35BD00u;
            goto label_35bd00;
        }
    }
    ctx->pc = 0x35BCE4u;
    // 0x35bce4: 0x84a303a0  lh          $v1, 0x3A0($a1)
    ctx->pc = 0x35bce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 928)));
    // 0x35bce8: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x35bce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x35bcec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35bcecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35bcf0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x35bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bcf4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35bcf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35bcf8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35bcf8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35bcfc: 0x0  nop
    ctx->pc = 0x35bcfcu;
    // NOP
label_35bd00:
    // 0x35bd00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bd04: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BD04u;
    {
        const bool branch_taken_0x35bd04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bd04) {
            ctx->pc = 0x35BD28u;
            goto label_35bd28;
        }
    }
    ctx->pc = 0x35BD0Cu;
    // 0x35bd0c: 0x84a303a0  lh          $v1, 0x3A0($a1)
    ctx->pc = 0x35bd0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 928)));
    // 0x35bd10: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x35bd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x35bd14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35bd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35bd18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bd1c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35bd1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35bd20: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35bd20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35bd24: 0x0  nop
    ctx->pc = 0x35bd24u;
    // NOP
label_35bd28:
    // 0x35bd28: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35BD28u;
    SET_GPR_U32(ctx, 31, 0x35BD30u);
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35BD28u, 0x35BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD30u;
label_35bd30:
    // 0x35bd30: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35bd30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35bd34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd38: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35bd38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35bd3c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35bd40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35bd40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35bd44: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x35bd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35bd48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35bd48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35bd4c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x35bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x35bd50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35bd50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35bd54: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bd58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x35bd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35bd5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35bd60: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x35bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x35bd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35bd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35bd68: 0x0  nop
    ctx->pc = 0x35bd68u;
    // NOP
    // 0x35bd6c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x35bd6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35bd70: 0x0  nop
    ctx->pc = 0x35bd70u;
    // NOP
    // 0x35bd74: 0x0  nop
    ctx->pc = 0x35bd74u;
    // NOP
    // 0x35bd78: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35BD78u;
    SET_GPR_U32(ctx, 31, 0x35BD80u);
    ctx->pc = 0x35BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD78u;
    // 0x35bd7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35BD78u, 0x35BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD80u;
label_35bd80:
    // 0x35bd80: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bd84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35bd84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35bd88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35bd90: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35BD90u;
    SET_GPR_U32(ctx, 31, 0x35BD98u);
    ctx->pc = 0x35BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD90u;
    // 0x35bd94: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35BD90u, 0x35BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD98u;
label_35bd98:
    // 0x35bd98: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bd9c: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x35bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x35bda0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35bda4: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x35bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x35bda8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bdac: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x35bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35bdb0: 0x8c630180  lw          $v1, 0x180($v1)
    ctx->pc = 0x35bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x35bdb4: 0x1460021e  bnez        $v1, . + 4 + (0x21E << 2)
    ctx->pc = 0x35BDB4u;
    {
        const bool branch_taken_0x35bdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bdb4) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BDBCu;
    // 0x35bdbc: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bdc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bdc4: 0x80830390  lb          $v1, 0x390($a0)
    ctx->pc = 0x35bdc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35bdc8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BDC8u;
    {
        const bool branch_taken_0x35bdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bdc8) {
            ctx->pc = 0x35BDE0u;
            goto label_35bde0;
        }
    }
    ctx->pc = 0x35BDD0u;
    // 0x35bdd0: 0x848203a0  lh          $v0, 0x3A0($a0)
    ctx->pc = 0x35bdd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x35bdd4: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x35bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x35bdd8: 0xa48203a0  sh          $v0, 0x3A0($a0)
    ctx->pc = 0x35bdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 928), (uint16_t)GPR_U32(ctx, 2));
    // 0x35bddc: 0x0  nop
    ctx->pc = 0x35bddcu;
    // NOP
label_35bde0:
    // 0x35bde0: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bde4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bde8: 0x80830390  lb          $v1, 0x390($a0)
    ctx->pc = 0x35bde8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35bdec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BDECu;
    {
        const bool branch_taken_0x35bdec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bdec) {
            ctx->pc = 0x35BE00u;
            goto label_35be00;
        }
    }
    ctx->pc = 0x35BDF4u;
    // 0x35bdf4: 0x848203a0  lh          $v0, 0x3A0($a0)
    ctx->pc = 0x35bdf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x35bdf8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x35bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x35bdfc: 0xa48203a0  sh          $v0, 0x3A0($a0)
    ctx->pc = 0x35bdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 928), (uint16_t)GPR_U32(ctx, 2));
label_35be00:
    // 0x35be00: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35be04: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35BE04u;
    SET_GPR_U32(ctx, 31, 0x35BE0Cu);
    ctx->pc = 0x35BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE04u;
    // 0x35be08: 0x844403a0  lh          $a0, 0x3A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35BE04u, 0x35BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE0Cu;
label_35be0c:
    // 0x35be0c: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35be10: 0xa46203a0  sh          $v0, 0x3A0($v1)
    ctx->pc = 0x35be10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 928), (uint16_t)GPR_U32(ctx, 2));
    // 0x35be14: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35be18: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x35be18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x35be1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35be20: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x35BE20u;
    {
        const bool branch_taken_0x35be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE20u;
        // 0x35be24: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be20) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BE28u;
label_35be28:
    // 0x35be28: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x35be28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35be2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35be2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35be30: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x35be30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x35be34: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x35be34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35be38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35be3c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35be3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35be40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35be40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35be44: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x35BE44u;
    {
        const bool branch_taken_0x35be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE44u;
        // 0x35be48: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be44) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BE4Cu;
    // 0x35be4c: 0x0  nop
    ctx->pc = 0x35be4cu;
    // NOP
label_35be50:
    // 0x35be50: 0x80c50391  lb          $a1, 0x391($a2)
    ctx->pc = 0x35be50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 913)));
    // 0x35be54: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x35be54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x35be58: 0x102001f5  beqz        $at, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x35BE58u;
    {
        const bool branch_taken_0x35be58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BE58u;
        // 0x35be5c: 0x24c80391  addiu       $t0, $a2, 0x391 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 913));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35be58) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BE60u;
    // 0x35be60: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x35be60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x35be64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x35be64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x35be68: 0x2484fac0  addiu       $a0, $a0, -0x540
    ctx->pc = 0x35be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965952));
    // 0x35be6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35be70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35be70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35be74: 0x600008  jr          $v1
    ctx->pc = 0x35BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35BE80u: goto label_35be80;
            case 0x35BEC0u: goto label_35bec0;
            case 0x35BFB0u: goto label_35bfb0;
            case 0x35C1D0u: goto label_35c1d0;
            case 0x35C3A0u: goto label_35c3a0;
            case 0x35C5E0u: goto label_35c5e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BE74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35BE7Cu;
    // 0x35be7c: 0x0  nop
    ctx->pc = 0x35be7cu;
    // NOP
label_35be80:
    // 0x35be80: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x35be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35be84: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x35be84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x35be88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35be88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35be8c: 0x8c29cebc  lw          $t1, -0x3144($at)
    ctx->pc = 0x35be8cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35be90: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x35be90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x35be94: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x35be94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x35be98: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35be98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x35be9c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x35be9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x35bea0: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x35bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x35bea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35bea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35beac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35beacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35beb0: 0x1231025  or          $v0, $t1, $v1
    ctx->pc = 0x35beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x35beb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35beb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35beb8: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x35BEB8u;
    SET_GPR_U32(ctx, 31, 0x35BEC0u);
    ctx->pc = 0x35BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BEB8u;
    // 0x35bebc: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x35BEB8u, 0x35BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEC0u;
label_35bec0:
    // 0x35bec0: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bec4: 0x8c420394  lw          $v0, 0x394($v0)
    ctx->pc = 0x35bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
    // 0x35bec8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BEC8u;
    {
        const bool branch_taken_0x35bec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BEC8u;
        // 0x35becc: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bec8) {
            ctx->pc = 0x35BEE0u;
            goto label_35bee0;
        }
    }
    ctx->pc = 0x35BED0u;
    // 0x35bed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35bed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bed4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x35bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x35bed8: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x35BED8u;
    SET_GPR_U32(ctx, 31, 0x35BEE0u);
    ctx->pc = 0x35BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BED8u;
    // 0x35bedc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x35BED8u, 0x35BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEE0u;
label_35bee0:
    // 0x35bee0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x35bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x35bee4: 0x246386b0  addiu       $v1, $v1, -0x7950
    ctx->pc = 0x35bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936240));
    // 0x35bee8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35beec: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x35beecu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x6586B0u));
    // 0x35bef0: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x35bef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x35bef4: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x35bef4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6586C0u));
    // 0x35bef8: 0x244286f0  addiu       $v0, $v0, -0x7910
    ctx->pc = 0x35bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936304));
    // 0x35befc: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x35befcu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x6586D0u));
    // 0x35bf00: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x35bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x35bf04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35bf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf08: 0xdc630030  ld          $v1, 0x30($v1)
    ctx->pc = 0x35bf08u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6586E0u));
    // 0x35bf0c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x35bf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x35bf10: 0x7d250010  sq          $a1, 0x10($t1)
    ctx->pc = 0x35bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 5));
    // 0x35bf14: 0x7d240020  sq          $a0, 0x20($t1)
    ctx->pc = 0x35bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 4));
    // 0x35bf18: 0xfd230030  sd          $v1, 0x30($t1)
    ctx->pc = 0x35bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 48), GPR_U64(ctx, 3));
    // 0x35bf1c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35bf1cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x6586F0u));
    // 0x35bf20: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x35bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x35bf24: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bf28: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x35bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x35bf2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35bf30: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35bf34: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x35bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bf38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35bf38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35bf3c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x35bf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x35bf40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35bf44: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35BF44u;
    SET_GPR_U32(ctx, 31, 0x35BF4Cu);
    ctx->pc = 0x35BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF44u;
    // 0x35bf48: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35BF44u, 0x35BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF4Cu;
label_35bf4c:
    // 0x35bf4c: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bf50: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x35bf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x35bf54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35bf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bf58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35bf5c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35BF5Cu;
    SET_GPR_U32(ctx, 31, 0x35BF64u);
    ctx->pc = 0x35BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BF5Cu;
    // 0x35bf60: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35BF5Cu, 0x35BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BF64u;
label_35bf64:
    // 0x35bf64: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bf68: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x35bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x35bf6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35bf70: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x35bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x35bf74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bf78: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x35bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35bf7c: 0x8c630140  lw          $v1, 0x140($v1)
    ctx->pc = 0x35bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x35bf80: 0x146001ab  bnez        $v1, . + 4 + (0x1AB << 2)
    ctx->pc = 0x35BF80u;
    {
        const bool branch_taken_0x35bf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bf80) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BF88u;
    // 0x35bf88: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bf8c: 0xac60039c  sw          $zero, 0x39C($v1)
    ctx->pc = 0x35bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 924), GPR_U32(ctx, 0));
    // 0x35bf90: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bf94: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x35bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x35bf98: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bf9c: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x35bf9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x35bfa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35bfa4: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x35BFA4u;
    {
        const bool branch_taken_0x35bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFA4u;
        // 0x35bfa8: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfa4) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35BFACu;
    // 0x35bfac: 0x0  nop
    ctx->pc = 0x35bfacu;
    // NOP
label_35bfb0:
    // 0x35bfb0: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35bfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bfb4: 0x3c0438d1  lui         $a0, 0x38D1
    ctx->pc = 0x35bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14545 << 16));
    // 0x35bfb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35bfbc: 0x3484b717  ori         $a0, $a0, 0xB717
    ctx->pc = 0x35bfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46871);
    // 0x35bfc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x35bfc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35bfc4: 0x8ca40394  lw          $a0, 0x394($a1)
    ctx->pc = 0x35bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
    // 0x35bfc8: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x35bfc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x35bfcc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35bfccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35bfd0: 0x0  nop
    ctx->pc = 0x35bfd0u;
    // NOP
    // 0x35bfd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35bfd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35bfd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35bfd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35bfdc: 0xe4a00398  swc1        $f0, 0x398($a1)
    ctx->pc = 0x35bfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 920), bits); }
    // 0x35bfe0: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35bfe4: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x35bfe4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35bfe8: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x35BFE8u;
    {
        const bool branch_taken_0x35bfe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFE8u;
        // 0x35bfec: 0x27a300e0  addiu       $v1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bfe8) {
            ctx->pc = 0x35C088u;
            goto label_35c088;
        }
    }
    ctx->pc = 0x35BFF0u;
    // 0x35bff0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35BFF0u;
    {
        const bool branch_taken_0x35bff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BFF0u;
        // 0x35bff4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bff0) {
            ctx->pc = 0x35C014u;
            goto label_35c014;
        }
    }
    ctx->pc = 0x35BFF8u;
label_35bff8:
    // 0x35bff8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35bff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bffc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c000: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c004: 0x0  nop
    ctx->pc = 0x35c004u;
    // NOP
    // 0x35c008: 0x0  nop
    ctx->pc = 0x35c008u;
    // NOP
    // 0x35c00c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C00Cu;
    {
        const bool branch_taken_0x35c00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c00c) {
            ctx->pc = 0x35BFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bff8;
        }
    }
    ctx->pc = 0x35C014u;
label_35c014:
    // 0x35c014: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c018: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x35c018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x35c01c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c020: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c024: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35c024u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35c028: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x35c028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x35c02c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c030: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C030u;
    SET_GPR_U32(ctx, 31, 0x35C038u);
    ctx->pc = 0x35C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C030u;
    // 0x35c034: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C030u, 0x35C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C038u;
label_35c038:
    // 0x35c038: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x35c038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x35c03c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C03Cu;
    {
        const bool branch_taken_0x35c03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C03Cu;
        // 0x35c040: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c03c) {
            ctx->pc = 0x35C060u;
            goto label_35c060;
        }
    }
    ctx->pc = 0x35C044u;
label_35c044:
    // 0x35c044: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c048: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c04c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c050: 0x0  nop
    ctx->pc = 0x35c050u;
    // NOP
    // 0x35c054: 0x0  nop
    ctx->pc = 0x35c054u;
    // NOP
    // 0x35c058: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C058u;
    {
        const bool branch_taken_0x35c058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c058) {
            ctx->pc = 0x35C044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c044;
        }
    }
    ctx->pc = 0x35C060u;
label_35c060:
    // 0x35c060: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c064: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x35c064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x35c068: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c06c: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c070: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35c070u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35c074: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x35c074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x35c078: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35c07c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C07Cu;
    SET_GPR_U32(ctx, 31, 0x35C084u);
    ctx->pc = 0x35C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C07Cu;
    // 0x35c080: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C07Cu, 0x35C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C084u;
label_35c084:
    // 0x35c084: 0x0  nop
    ctx->pc = 0x35c084u;
    // NOP
label_35c088:
    // 0x35c088: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c08c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c090: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x35c090u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35c094: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x35C094u;
    {
        const bool branch_taken_0x35c094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C094u;
        // 0x35c098: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c094) {
            ctx->pc = 0x35C128u;
            goto label_35c128;
        }
    }
    ctx->pc = 0x35C09Cu;
    // 0x35c09c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C09Cu;
    {
        const bool branch_taken_0x35c09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C09Cu;
        // 0x35c0a0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c09c) {
            ctx->pc = 0x35C0C0u;
            goto label_35c0c0;
        }
    }
    ctx->pc = 0x35C0A4u;
label_35c0a4:
    // 0x35c0a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c0a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c0ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c0b0: 0x0  nop
    ctx->pc = 0x35c0b0u;
    // NOP
    // 0x35c0b4: 0x0  nop
    ctx->pc = 0x35c0b4u;
    // NOP
    // 0x35c0b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C0B8u;
    {
        const bool branch_taken_0x35c0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c0b8) {
            ctx->pc = 0x35C0A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c0a4;
        }
    }
    ctx->pc = 0x35C0C0u;
label_35c0c0:
    // 0x35c0c0: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c0c4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x35c0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35c0c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c0cc: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c0d0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x35c0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x35c0d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c0d8: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C0D8u;
    SET_GPR_U32(ctx, 31, 0x35C0E0u);
    ctx->pc = 0x35C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0D8u;
    // 0x35c0dc: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C0D8u, 0x35C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0E0u;
label_35c0e0:
    // 0x35c0e0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x35c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35c0e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C0E4u;
    {
        const bool branch_taken_0x35c0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C0E4u;
        // 0x35c0e8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c0e4) {
            ctx->pc = 0x35C108u;
            goto label_35c108;
        }
    }
    ctx->pc = 0x35C0ECu;
label_35c0ec:
    // 0x35c0ec: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c0f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c0f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c0f8: 0x0  nop
    ctx->pc = 0x35c0f8u;
    // NOP
    // 0x35c0fc: 0x0  nop
    ctx->pc = 0x35c0fcu;
    // NOP
    // 0x35c100: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C100u;
    {
        const bool branch_taken_0x35c100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c100) {
            ctx->pc = 0x35C0ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c0ec;
        }
    }
    ctx->pc = 0x35C108u;
label_35c108:
    // 0x35c108: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c10c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x35c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35c110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c114: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c118: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x35c118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x35c11c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35c120: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C120u;
    SET_GPR_U32(ctx, 31, 0x35C128u);
    ctx->pc = 0x35C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C120u;
    // 0x35c124: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C120u, 0x35C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C128u;
label_35c128:
    // 0x35c128: 0x8f868bb8  lw          $a2, -0x7448($gp)
    ctx->pc = 0x35c128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c12c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c130: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x35c130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x35c134: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x35c134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35c138: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x35c138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x35c13c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x35c13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x35c140: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35c140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x35c144: 0x8cc50394  lw          $a1, 0x394($a2)
    ctx->pc = 0x35c144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 916)));
    // 0x35c148: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35c148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35c14c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35c14cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35c150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35c150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c154: 0x0  nop
    ctx->pc = 0x35c154u;
    // NOP
    // 0x35c158: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35c158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35c15c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35c15cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c160: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35C160u;
    {
        const bool branch_taken_0x35c160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C160u;
        // 0x35c164: 0x24c70394  addiu       $a3, $a2, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 916));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c160) {
            ctx->pc = 0x35C178u;
            goto label_35c178;
        }
    }
    ctx->pc = 0x35C168u;
    // 0x35c168: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35c168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35c16c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x35c16cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35c170: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35C170u;
    {
        const bool branch_taken_0x35c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c170) {
            ctx->pc = 0x35C190u;
            goto label_35c190;
        }
    }
    ctx->pc = 0x35C178u;
label_35c178:
    // 0x35c178: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35c178u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35c17c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35c180: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35c180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35c184: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x35c184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35c188: 0x0  nop
    ctx->pc = 0x35c188u;
    // NOP
    // 0x35c18c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x35c18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_35c190:
    // 0x35c190: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C190u;
    {
        const bool branch_taken_0x35c190 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x35c190) {
            ctx->pc = 0x35C1A8u;
            goto label_35c1a8;
        }
    }
    ctx->pc = 0x35C198u;
    // 0x35c198: 0x80c30391  lb          $v1, 0x391($a2)
    ctx->pc = 0x35c198u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 913)));
    // 0x35c19c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c1a0: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x35C1A0u;
    {
        const bool branch_taken_0x35c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1A0u;
        // 0x35c1a4: 0xa0c30391  sb          $v1, 0x391($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c1a0) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35C1A8u;
label_35c1a8:
    // 0x35c1a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x35c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35c1ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c1b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x35c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x35c1b4: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c1b8: 0xc4610398  lwc1        $f1, 0x398($v1)
    ctx->pc = 0x35c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c1bc: 0xc460039c  lwc1        $f0, 0x39C($v1)
    ctx->pc = 0x35c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c1c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35c1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35c1c4: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x35C1C4u;
    {
        const bool branch_taken_0x35c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1C4u;
        // 0x35c1c8: 0xe460039c  swc1        $f0, 0x39C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c1c4) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35C1CCu;
    // 0x35c1cc: 0x0  nop
    ctx->pc = 0x35c1ccu;
    // NOP
label_35c1d0:
    // 0x35c1d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c1d4: 0x14e30026  bne         $a3, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x35C1D4u;
    {
        const bool branch_taken_0x35c1d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1D4u;
        // 0x35c1d8: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c1d4) {
            ctx->pc = 0x35C270u;
            goto label_35c270;
        }
    }
    ctx->pc = 0x35C1DCu;
    // 0x35c1dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C1DCu;
    {
        const bool branch_taken_0x35c1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1DCu;
        // 0x35c1e0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c1dc) {
            ctx->pc = 0x35C200u;
            goto label_35c200;
        }
    }
    ctx->pc = 0x35C1E4u;
label_35c1e4:
    // 0x35c1e4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c1e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c1ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c1f0: 0x0  nop
    ctx->pc = 0x35c1f0u;
    // NOP
    // 0x35c1f4: 0x0  nop
    ctx->pc = 0x35c1f4u;
    // NOP
    // 0x35c1f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C1F8u;
    {
        const bool branch_taken_0x35c1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c1f8) {
            ctx->pc = 0x35C1E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c1e4;
        }
    }
    ctx->pc = 0x35C200u;
label_35c200:
    // 0x35c200: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c204: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x35c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35c208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c20c: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c210: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35c210u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35c214: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x35c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x35c218: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35c218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c21c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C21Cu;
    SET_GPR_U32(ctx, 31, 0x35C224u);
    ctx->pc = 0x35C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C21Cu;
    // 0x35c220: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C21Cu, 0x35C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C224u;
label_35c224:
    // 0x35c224: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x35c224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35c228: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C228u;
    {
        const bool branch_taken_0x35c228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C228u;
        // 0x35c22c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c228) {
            ctx->pc = 0x35C24Cu;
            goto label_35c24c;
        }
    }
    ctx->pc = 0x35C230u;
label_35c230:
    // 0x35c230: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c234: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c23c: 0x0  nop
    ctx->pc = 0x35c23cu;
    // NOP
    // 0x35c240: 0x0  nop
    ctx->pc = 0x35c240u;
    // NOP
    // 0x35c244: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C244u;
    {
        const bool branch_taken_0x35c244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c244) {
            ctx->pc = 0x35C230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c230;
        }
    }
    ctx->pc = 0x35C24Cu;
label_35c24c:
    // 0x35c24c: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c250: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x35c250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35c254: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c258: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c25c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35c25cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35c260: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x35c260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x35c264: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35c268: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C268u;
    SET_GPR_U32(ctx, 31, 0x35C270u);
    ctx->pc = 0x35C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C268u;
    // 0x35c26c: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C268u, 0x35C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C270u;
label_35c270:
    // 0x35c270: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c274: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c278: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x35c278u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35c27c: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x35C27Cu;
    {
        const bool branch_taken_0x35c27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C27Cu;
        // 0x35c280: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c27c) {
            ctx->pc = 0x35C310u;
            goto label_35c310;
        }
    }
    ctx->pc = 0x35C284u;
    // 0x35c284: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C284u;
    {
        const bool branch_taken_0x35c284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C284u;
        // 0x35c288: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c284) {
            ctx->pc = 0x35C2A8u;
            goto label_35c2a8;
        }
    }
    ctx->pc = 0x35C28Cu;
label_35c28c:
    // 0x35c28c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c28cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c290: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c294: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c298: 0x0  nop
    ctx->pc = 0x35c298u;
    // NOP
    // 0x35c29c: 0x0  nop
    ctx->pc = 0x35c29cu;
    // NOP
    // 0x35c2a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C2A0u;
    {
        const bool branch_taken_0x35c2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c2a0) {
            ctx->pc = 0x35C28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c28c;
        }
    }
    ctx->pc = 0x35C2A8u;
label_35c2a8:
    // 0x35c2a8: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c2ac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x35c2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35c2b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c2b4: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c2b8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x35c2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x35c2bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c2c0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C2C0u;
    SET_GPR_U32(ctx, 31, 0x35C2C8u);
    ctx->pc = 0x35C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C2C0u;
    // 0x35c2c4: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C2C0u, 0x35C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C2C8u;
label_35c2c8:
    // 0x35c2c8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x35c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35c2cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C2CCu;
    {
        const bool branch_taken_0x35c2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2CCu;
        // 0x35c2d0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c2cc) {
            ctx->pc = 0x35C2F0u;
            goto label_35c2f0;
        }
    }
    ctx->pc = 0x35C2D4u;
label_35c2d4:
    // 0x35c2d4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c2d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c2dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c2e0: 0x0  nop
    ctx->pc = 0x35c2e0u;
    // NOP
    // 0x35c2e4: 0x0  nop
    ctx->pc = 0x35c2e4u;
    // NOP
    // 0x35c2e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C2E8u;
    {
        const bool branch_taken_0x35c2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c2e8) {
            ctx->pc = 0x35C2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c2d4;
        }
    }
    ctx->pc = 0x35C2F0u;
label_35c2f0:
    // 0x35c2f0: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c2f4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x35c2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35c2f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c2fc: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x35c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c300: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x35c300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x35c304: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35c308: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C308u;
    SET_GPR_U32(ctx, 31, 0x35C310u);
    ctx->pc = 0x35C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C308u;
    // 0x35c30c: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C308u, 0x35C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C310u;
label_35c310:
    // 0x35c310: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c314: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x35c314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x35c318: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35c318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35c31c: 0xc482039c  lwc1        $f2, 0x39C($a0)
    ctx->pc = 0x35c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c320: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x35c320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c324: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x35C324u;
    {
        const bool branch_taken_0x35c324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35c324) {
            ctx->pc = 0x35C368u;
            goto label_35c368;
        }
    }
    ctx->pc = 0x35C32Cu;
    // 0x35c32c: 0xac800394  sw          $zero, 0x394($a0)
    ctx->pc = 0x35c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 0));
    // 0x35c330: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x35c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x35c334: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c338: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x35c338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x35c33c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x35c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x35c340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c344: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x35c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x35c348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35c348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c34c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35c34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c350: 0x80620391  lb          $v0, 0x391($v1)
    ctx->pc = 0x35c350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 913)));
    // 0x35c354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35c358: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x35C358u;
    SET_GPR_U32(ctx, 31, 0x35C360u);
    ctx->pc = 0x35C35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C358u;
    // 0x35c35c: 0xa0620391  sb          $v0, 0x391($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x35C358u, 0x35C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C360u;
label_35c360:
    // 0x35c360: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x35C360u;
    {
        const bool branch_taken_0x35c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c360) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35C368u;
label_35c368:
    // 0x35c368: 0xc4800398  lwc1        $f0, 0x398($a0)
    ctx->pc = 0x35c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c36c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x35c36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x35c370: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35c370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c374: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x35C374u;
    {
        const bool branch_taken_0x35c374 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C374u;
        // 0x35c378: 0x24830398  addiu       $v1, $a0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c374) {
            ctx->pc = 0x35C388u;
            goto label_35c388;
        }
    }
    ctx->pc = 0x35C37Cu;
    // 0x35c37c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x35c37cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x35c380: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x35c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x35c384: 0x0  nop
    ctx->pc = 0x35c384u;
    // NOP
label_35c388:
    // 0x35c388: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c38c: 0xc4610398  lwc1        $f1, 0x398($v1)
    ctx->pc = 0x35c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c390: 0xc460039c  lwc1        $f0, 0x39C($v1)
    ctx->pc = 0x35c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c394: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35c394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35c398: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x35C398u;
    {
        const bool branch_taken_0x35c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C398u;
        // 0x35c39c: 0xe460039c  swc1        $f0, 0x39C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c398) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35C3A0u;
label_35c3a0:
    // 0x35c3a0: 0x8cc30394  lw          $v1, 0x394($a2)
    ctx->pc = 0x35c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 916)));
    // 0x35c3a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C3A4u;
    {
        const bool branch_taken_0x35c3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C3A4u;
        // 0x35c3a8: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c3a4) {
            ctx->pc = 0x35C3C0u;
            goto label_35c3c0;
        }
    }
    ctx->pc = 0x35C3ACu;
    // 0x35c3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c3b0: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x35c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x35c3b4: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x35C3B4u;
    SET_GPR_U32(ctx, 31, 0x35C3BCu);
    ctx->pc = 0x35C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C3B4u;
    // 0x35c3b8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x35C3B4u, 0x35C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C3BCu;
label_35c3bc:
    // 0x35c3bc: 0x0  nop
    ctx->pc = 0x35c3bcu;
    // NOP
label_35c3c0:
    // 0x35c3c0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x35c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x35c3c4: 0x24848700  addiu       $a0, $a0, -0x7900
    ctx->pc = 0x35c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936320));
    // 0x35c3c8: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x35c3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x35c3cc: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x35c3ccu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x658700u));
    // 0x35c3d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c3d4: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x35c3d4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x658710u));
    // 0x35c3d8: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x35c3d8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x658720u));
    // 0x35c3dc: 0xdc840030  ld          $a0, 0x30($a0)
    ctx->pc = 0x35c3dcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x658730u));
    // 0x35c3e0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x35c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x35c3e4: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x35c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x35c3e8: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x35c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
    // 0x35c3ec: 0xfd040030  sd          $a0, 0x30($t0)
    ctx->pc = 0x35c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 4));
    // 0x35c3f0: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c3f4: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x35c3f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35c3f8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x35C3F8u;
    {
        const bool branch_taken_0x35c3f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C3F8u;
        // 0x35c3fc: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c3f8) {
            ctx->pc = 0x35C4D0u;
            goto label_35c4d0;
        }
    }
    ctx->pc = 0x35C400u;
    // 0x35c400: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C400u;
    {
        const bool branch_taken_0x35c400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C400u;
        // 0x35c404: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c400) {
            ctx->pc = 0x35C424u;
            goto label_35c424;
        }
    }
    ctx->pc = 0x35C408u;
label_35c408:
    // 0x35c408: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c40c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c410: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c414: 0x0  nop
    ctx->pc = 0x35c414u;
    // NOP
    // 0x35c418: 0x0  nop
    ctx->pc = 0x35c418u;
    // NOP
    // 0x35c41c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C41Cu;
    {
        const bool branch_taken_0x35c41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c41c) {
            ctx->pc = 0x35C408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c408;
        }
    }
    ctx->pc = 0x35C424u;
label_35c424:
    // 0x35c424: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c428: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x35c428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35c42c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c430: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x35c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x35c434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c438: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35c43c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x35c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x35c440: 0x21023  negu        $v0, $v0
    ctx->pc = 0x35c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x35c444: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35c444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35c448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35c448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c44c: 0x0  nop
    ctx->pc = 0x35c44cu;
    // NOP
    // 0x35c450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35c450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35c454: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x35c454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x35c458: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35c458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35c45c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C45Cu;
    SET_GPR_U32(ctx, 31, 0x35C464u);
    ctx->pc = 0x35C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C45Cu;
    // 0x35c460: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C45Cu, 0x35C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C464u;
label_35c464:
    // 0x35c464: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x35c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35c468: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C468u;
    {
        const bool branch_taken_0x35c468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C468u;
        // 0x35c46c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c468) {
            ctx->pc = 0x35C48Cu;
            goto label_35c48c;
        }
    }
    ctx->pc = 0x35C470u;
label_35c470:
    // 0x35c470: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c474: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c47c: 0x0  nop
    ctx->pc = 0x35c47cu;
    // NOP
    // 0x35c480: 0x0  nop
    ctx->pc = 0x35c480u;
    // NOP
    // 0x35c484: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C484u;
    {
        const bool branch_taken_0x35c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c484) {
            ctx->pc = 0x35C470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c470;
        }
    }
    ctx->pc = 0x35C48Cu;
label_35c48c:
    // 0x35c48c: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c490: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x35c490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35c494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c498: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x35c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x35c49c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c4a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35c4a4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x35c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x35c4a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x35c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x35c4ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35c4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35c4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c4b4: 0x0  nop
    ctx->pc = 0x35c4b4u;
    // NOP
    // 0x35c4b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35c4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35c4bc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x35c4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x35c4c0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35c4c4: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C4C4u;
    SET_GPR_U32(ctx, 31, 0x35C4CCu);
    ctx->pc = 0x35C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C4C4u;
    // 0x35c4c8: 0x246502b0  addiu       $a1, $v1, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C4C4u, 0x35C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4CCu;
label_35c4cc:
    // 0x35c4cc: 0x0  nop
    ctx->pc = 0x35c4ccu;
    // NOP
label_35c4d0:
    // 0x35c4d0: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c4d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c4d8: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x35c4d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x35c4dc: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x35C4DCu;
    {
        const bool branch_taken_0x35c4dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4DCu;
        // 0x35c4e0: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c4dc) {
            ctx->pc = 0x35C5A8u;
            goto label_35c5a8;
        }
    }
    ctx->pc = 0x35C4E4u;
    // 0x35c4e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C4E4u;
    {
        const bool branch_taken_0x35c4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4E4u;
        // 0x35c4e8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c4e4) {
            ctx->pc = 0x35C508u;
            goto label_35c508;
        }
    }
    ctx->pc = 0x35C4ECu;
label_35c4ec:
    // 0x35c4ec: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c4f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c4f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c4f8: 0x0  nop
    ctx->pc = 0x35c4f8u;
    // NOP
    // 0x35c4fc: 0x0  nop
    ctx->pc = 0x35c4fcu;
    // NOP
    // 0x35c500: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C500u;
    {
        const bool branch_taken_0x35c500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c500) {
            ctx->pc = 0x35C4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c4ec;
        }
    }
    ctx->pc = 0x35C508u;
label_35c508:
    // 0x35c508: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c50c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35c50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35c510: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c514: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x35c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x35c518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c51c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35c520: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x35c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x35c524: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35c524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35c528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35c528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c52c: 0x0  nop
    ctx->pc = 0x35c52cu;
    // NOP
    // 0x35c530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35c530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35c534: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35c534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x35c538: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35c53c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C53Cu;
    SET_GPR_U32(ctx, 31, 0x35C544u);
    ctx->pc = 0x35C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C53Cu;
    // 0x35c540: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C53Cu, 0x35C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C544u;
label_35c544:
    // 0x35c544: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x35c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c548: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C548u;
    {
        const bool branch_taken_0x35c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C548u;
        // 0x35c54c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c548) {
            ctx->pc = 0x35C56Cu;
            goto label_35c56c;
        }
    }
    ctx->pc = 0x35C550u;
label_35c550:
    // 0x35c550: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35c550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c554: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35c558: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c55c: 0x0  nop
    ctx->pc = 0x35c55cu;
    // NOP
    // 0x35c560: 0x0  nop
    ctx->pc = 0x35c560u;
    // NOP
    // 0x35c564: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C564u;
    {
        const bool branch_taken_0x35c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c564) {
            ctx->pc = 0x35C550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c550;
        }
    }
    ctx->pc = 0x35C56Cu;
label_35c56c:
    // 0x35c56c: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c570: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35c570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c578: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x35c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x35c57c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c580: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35c584: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x35c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x35c588: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35c588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35c58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35c58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c590: 0x0  nop
    ctx->pc = 0x35c590u;
    // NOP
    // 0x35c594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35c594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35c598: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x35c598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x35c59c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35c5a0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35C5A0u;
    SET_GPR_U32(ctx, 31, 0x35C5A8u);
    ctx->pc = 0x35C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C5A0u;
    // 0x35c5a4: 0x246502b0  addiu       $a1, $v1, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35C5A0u, 0x35C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C5A8u;
label_35c5a8:
    // 0x35c5a8: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c5ac: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x35c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x35c5b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c5b4: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x35c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x35c5b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35c5bc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x35c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35c5c0: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x35c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x35c5c4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x35C5C4u;
    {
        const bool branch_taken_0x35c5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c5c4) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35C5CCu;
    // 0x35c5cc: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c5d0: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x35c5d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x35c5d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c5d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35C5D8u;
    {
        const bool branch_taken_0x35c5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C5D8u;
        // 0x35c5dc: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c5d8) {
            ctx->pc = 0x35C630u;
            goto label_35c630;
        }
    }
    ctx->pc = 0x35C5E0u;
label_35c5e0:
    // 0x35c5e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c5e4: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35C5E4u;
    {
        const bool branch_taken_0x35c5e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C5E4u;
        // 0x35c5e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c5e4) {
            ctx->pc = 0x35C5F0u;
            goto label_35c5f0;
        }
    }
    ctx->pc = 0x35C5ECu;
    // 0x35c5ec: 0xa0c303a2  sb          $v1, 0x3A2($a2)
    ctx->pc = 0x35c5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 930), (uint8_t)GPR_U32(ctx, 3));
label_35c5f0:
    // 0x35c5f0: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35c5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c5f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c5f8: 0x80a40390  lb          $a0, 0x390($a1)
    ctx->pc = 0x35c5f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x35c5fc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35C5FCu;
    {
        const bool branch_taken_0x35c5fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35c5fc) {
            ctx->pc = 0x35C608u;
            goto label_35c608;
        }
    }
    ctx->pc = 0x35C604u;
    // 0x35c604: 0xa0a003a2  sb          $zero, 0x3A2($a1)
    ctx->pc = 0x35c604u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 930), (uint8_t)GPR_U32(ctx, 0));
label_35c608:
    // 0x35c608: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35c608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35c60c: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x35c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x35c610: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35c610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35c614: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35c614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35c618: 0xa0800390  sb          $zero, 0x390($a0)
    ctx->pc = 0x35c618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c61c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x35c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35c620: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35c620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35c624: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35c624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35c628: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x35c628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x35c62c: 0x0  nop
    ctx->pc = 0x35c62cu;
    // NOP
label_35c630:
    // 0x35c630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35c630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35c634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c638: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35c63c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C63Cu;
        // 0x35c640: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C644u;
}
