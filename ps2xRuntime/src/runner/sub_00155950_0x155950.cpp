#include <cstdio>
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

// Function: sub_00155950
// Address: 0x155950 - 0x1562b8
void sub_00155950_0x155950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155950_0x155950");
#endif
    { static uint32_t n=0; ++n; if (n<=5 || (n%600)==0) fprintf(stderr,"[probe e155950] call %u a0=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x15596cu: goto label_15596c;
        case 0x155978u: goto label_155978;
        case 0x155980u: goto label_155980;
        case 0x1559ccu: goto label_1559cc;
        case 0x155a60u: goto label_155a60;
        case 0x155a68u: goto label_155a68;
        case 0x155b28u: goto label_155b28;
        case 0x155b30u: goto label_155b30;
        case 0x155b5cu: goto label_155b5c;
        case 0x155b64u: goto label_155b64;
        case 0x155b6cu: goto label_155b6c;
        case 0x155b78u: goto label_155b78;
        case 0x155b84u: goto label_155b84;
        case 0x155b8cu: goto label_155b8c;
        case 0x155b94u: goto label_155b94;
        case 0x155ba8u: goto label_155ba8;
        case 0x155bc0u: goto label_155bc0;
        case 0x155bc8u: goto label_155bc8;
        case 0x155bd4u: goto label_155bd4;
        case 0x155be0u: goto label_155be0;
        case 0x155becu: goto label_155bec;
        case 0x155bf4u: goto label_155bf4;
        case 0x155bfcu: goto label_155bfc;
        case 0x155c0cu: goto label_155c0c;
        case 0x155c18u: goto label_155c18;
        case 0x155c20u: goto label_155c20;
        case 0x155c28u: goto label_155c28;
        case 0x155c34u: goto label_155c34;
        case 0x155c40u: goto label_155c40;
        case 0x155c4cu: goto label_155c4c;
        case 0x155c58u: goto label_155c58;
        case 0x155c60u: goto label_155c60;
        case 0x155c68u: goto label_155c68;
        case 0x155c74u: goto label_155c74;
        case 0x155c84u: goto label_155c84;
        case 0x155c94u: goto label_155c94;
        case 0x155ca0u: goto label_155ca0;
        case 0x155cb0u: goto label_155cb0;
        case 0x155ce0u: goto label_155ce0;
        case 0x155d18u: goto label_155d18;
        case 0x155db0u: goto label_155db0;
        case 0x155f94u: goto label_155f94;
        case 0x155f9cu: goto label_155f9c;
        case 0x155fa4u: goto label_155fa4;
        case 0x155fb0u: goto label_155fb0;
        case 0x155fc8u: goto label_155fc8;
        case 0x155fd4u: goto label_155fd4;
        case 0x155fdcu: goto label_155fdc;
        case 0x156030u: goto label_156030;
        case 0x156068u: goto label_156068;
        case 0x156094u: goto label_156094;
        case 0x1560a4u: goto label_1560a4;
        case 0x1560acu: goto label_1560ac;
        case 0x1560b4u: goto label_1560b4;
        case 0x1560c0u: goto label_1560c0;
        case 0x1560e0u: goto label_1560e0;
        case 0x156100u: goto label_156100;
        case 0x156178u: goto label_156178;
        case 0x156190u: goto label_156190;
        case 0x15628cu: goto label_15628c;
        case 0x15629cu: goto label_15629c;
        case 0x1562a8u: goto label_1562a8;
        default: break;
    }

    ctx->pc = 0x155950u;

    // 0x155950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15595c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15595cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155960: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x155960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x155964: 0xc0ce574  jal         func_3395D0
    ctx->pc = 0x155964u;
    SET_GPR_U32(ctx, 31, 0x15596Cu);
    ctx->pc = 0x155968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155964u;
    // 0x155968: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395D0u, 0x155964u, 0x15596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15596Cu;
label_15596c:
    // 0x15596c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x15596cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x155970: 0xc0ce514  jal         func_339450
    ctx->pc = 0x155970u;
    SET_GPR_U32(ctx, 31, 0x155978u);
    ctx->pc = 0x155974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155970u;
    // 0x155974: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339450u, 0x155970u, 0x155978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155978u;
label_155978:
    // 0x155978: 0xc0c9a48  jal         func_326920
    ctx->pc = 0x155978u;
    SET_GPR_U32(ctx, 31, 0x155980u);
    ctx->pc = 0x326920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326920u, 0x155978u, 0x155980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155980u;
label_155980:
    // 0x155980: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x155980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x155984: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155988: 0xac20cebc  sw          $zero, -0x3144($at)
    ctx->pc = 0x155988u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x15598c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155990: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155994: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x155994u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x155998: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x15599c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x15599cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1559a0: 0x90230e70  lbu         $v1, 0xE70($at)
    ctx->pc = 0x1559a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B0E70u));
    // 0x1559a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559a8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1559A8u;
    {
        const bool branch_taken_0x1559a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1559ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559A8u;
        // 0x1559ac: 0xac24ceb8  sw          $a0, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559a8) {
            ctx->pc = 0x1559D0u;
            goto label_1559d0;
        }
    }
    ctx->pc = 0x1559B0u;
    // 0x1559b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1559b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1559b8: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x1559b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1559bc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1559bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1559c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559c4: 0xc0b34a0  jal         func_2CD280
    ctx->pc = 0x1559C4u;
    SET_GPR_U32(ctx, 31, 0x1559CCu);
    ctx->pc = 0x1559C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1559C4u;
    // 0x1559c8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD280u, 0x1559C4u, 0x1559CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559CCu;
label_1559cc:
    // 0x1559cc: 0x0  nop
    ctx->pc = 0x1559ccu;
    // NOP
label_1559d0:
    // 0x1559d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559d4: 0xac20cec4  sw          $zero, -0x313C($at)
    ctx->pc = 0x1559d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x1559d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1559d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1559dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1559e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1559e4: 0xac20cec8  sw          $zero, -0x3138($at)
    ctx->pc = 0x1559e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x1559e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559ec: 0xac20cecc  sw          $zero, -0x3134($at)
    ctx->pc = 0x1559ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CECCu, _value); } while (0);
    // 0x1559f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559f4: 0xac20ced0  sw          $zero, -0x3130($at)
    ctx->pc = 0x1559f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x1559f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1559fc: 0xac20ced4  sw          $zero, -0x312C($at)
    ctx->pc = 0x1559fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED4u, _value); } while (0);
    // 0x155a00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a04: 0xac20ced8  sw          $zero, -0x3128($at)
    ctx->pc = 0x155a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x155a08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a0c: 0xac20cedc  sw          $zero, -0x3124($at)
    ctx->pc = 0x155a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x81CEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEDCu, _value); } while (0);
    // 0x155a10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a14: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x155a18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a1c: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x155a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x155a20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a24: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x155a24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x155a28: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x155a2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a30: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x155a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x155a34: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x155a34u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x155a38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a3c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x155a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x155a40: 0x8c25ced8  lw          $a1, -0x3128($at)
    ctx->pc = 0x155a40u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED8u));
    // 0x155a44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a48: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x155a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x155a4c: 0x8c24cedc  lw          $a0, -0x3124($at)
    ctx->pc = 0x155a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x155a50: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x155a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x155a54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155a58: 0xac24cec0  sw          $a0, -0x3140($at)
    ctx->pc = 0x155a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x155a5c: 0x0  nop
    ctx->pc = 0x155a5cu;
    // NOP
label_155a60:
    // 0x155a60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a64: 0x0  nop
    ctx->pc = 0x155a64u;
    // NOP
label_155a68:
    // 0x155a68: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x155a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x155a6c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155a70: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x155a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x155a74: 0xa0c021c8  sb          $zero, 0x21C8($a2)
    ctx->pc = 0x155a74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a78: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x155a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x155a7c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x155a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155a80: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x155a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x155a84: 0xa0c021c8  sb          $zero, 0x21C8($a2)
    ctx->pc = 0x155a84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a88: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x155a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x155a8c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x155a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155a90: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x155a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x155a94: 0xa0c021c8  sb          $zero, 0x21C8($a2)
    ctx->pc = 0x155a94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155a98: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x155a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x155a9c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x155a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155aa0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x155aa4: 0xa0c021c8  sb          $zero, 0x21C8($a2)
    ctx->pc = 0x155aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155aa8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x155aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x155aac: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x155aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155ab0: 0x24850005  addiu       $a1, $a0, 0x5
    ctx->pc = 0x155ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x155ab4: 0xa0c021c8  sb          $zero, 0x21C8($a2)
    ctx->pc = 0x155ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155ab8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x155ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x155abc: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x155abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155ac0: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x155ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x155ac4: 0xa0c021c8  sb          $zero, 0x21C8($a2)
    ctx->pc = 0x155ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155ac8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x155ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x155acc: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x155accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155ad0: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x155ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x155ad4: 0xa0c021c8  sb          $zero, 0x21C8($a2)
    ctx->pc = 0x155ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155ad8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x155ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x155adc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x155adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x155ae0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x155ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155ae4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x155ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x155ae8: 0xa0a021c8  sb          $zero, 0x21C8($a1)
    ctx->pc = 0x155ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8648), (uint8_t)GPR_U32(ctx, 0));
    // 0x155aec: 0x28850100  slti        $a1, $a0, 0x100
    ctx->pc = 0x155aecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x155af0: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x155AF0u;
    {
        const bool branch_taken_0x155af0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x155af0) {
            ctx->pc = 0x155A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155a68;
        }
    }
    ctx->pc = 0x155AF8u;
    // 0x155af8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155afc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155b00: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x155b00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x155b04: 0x1480ffd6  bnez        $a0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x155B04u;
    {
        const bool branch_taken_0x155b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x155B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B04u;
        // 0x155b08: 0x244222b0  addiu       $v0, $v0, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b04) {
            ctx->pc = 0x155A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155a60;
        }
    }
    ctx->pc = 0x155B0Cu;
    // 0x155b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155b10: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x155b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x155b14: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x155b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x155b18: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x155b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x155b1c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x155b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x155b20: 0xc0bd34c  jal         func_2F4D30
    ctx->pc = 0x155B20u;
    SET_GPR_U32(ctx, 31, 0x155B28u);
    ctx->pc = 0x155B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B20u;
    // 0x155b24: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D30u, 0x155B20u, 0x155B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B28u;
label_155b28:
    // 0x155b28: 0xc09bedc  jal         func_26FB70
    ctx->pc = 0x155B28u;
    SET_GPR_U32(ctx, 31, 0x155B30u);
    ctx->pc = 0x26FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB70u, 0x155B28u, 0x155B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B30u;
label_155b30:
    // 0x155b30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x155b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x155b34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x155b38: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x155b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x155b3c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x155b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x155b40: 0xae007968  sw          $zero, 0x7968($s0)
    ctx->pc = 0x155b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31080), GPR_U32(ctx, 0));
    // 0x155b44: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x155b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x155b48: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x155b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x155b4c: 0xa0206b28  sb          $zero, 0x6B28($at)
    ctx->pc = 0x155b4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6B28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B28u, _value); } while (0);
    // 0x155b50: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x155b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x155b54: 0xc050ffc  jal         func_143FF0
    ctx->pc = 0x155B54u;
    SET_GPR_U32(ctx, 31, 0x155B5Cu);
    ctx->pc = 0x155B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B54u;
    // 0x155b58: 0xa0206b29  sb          $zero, 0x6B29($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27433), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FF0u, 0x155B54u, 0x155B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B5Cu;
label_155b5c:
    // 0x155b5c: 0xc050d64  jal         func_143590
    ctx->pc = 0x155B5Cu;
    SET_GPR_U32(ctx, 31, 0x155B64u);
    ctx->pc = 0x155B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B5Cu;
    // 0x155b60: 0x27848548  addiu       $a0, $gp, -0x7AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143590u, 0x155B5Cu, 0x155B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B64u;
label_155b64:
    // 0x155b64: 0xc05ee74  jal         func_17B9D0
    ctx->pc = 0x155B64u;
    SET_GPR_U32(ctx, 31, 0x155B6Cu);
    ctx->pc = 0x155B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B64u;
    // 0x155b68: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9D0u, 0x155B64u, 0x155B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B6Cu;
label_155b6c:
    // 0x155b6c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x155b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x155b70: 0xc09c3ac  jal         func_270EB0
    ctx->pc = 0x155B70u;
    SET_GPR_U32(ctx, 31, 0x155B78u);
    ctx->pc = 0x155B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B70u;
    // 0x155b74: 0x24840620  addiu       $a0, $a0, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EB0u, 0x155B70u, 0x155B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B78u;
label_155b78:
    // 0x155b78: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x155b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x155b7c: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x155B7Cu;
    SET_GPR_U32(ctx, 31, 0x155B84u);
    ctx->pc = 0x155B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B7Cu;
    // 0x155b80: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x155B7Cu, 0x155B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B84u;
label_155b84:
    // 0x155b84: 0xc0b3394  jal         func_2CCE50
    ctx->pc = 0x155B84u;
    SET_GPR_U32(ctx, 31, 0x155B8Cu);
    ctx->pc = 0x155B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B84u;
    // 0x155b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE50u, 0x155B84u, 0x155B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B8Cu;
label_155b8c:
    // 0x155b8c: 0xc0b3394  jal         func_2CCE50
    ctx->pc = 0x155B8Cu;
    SET_GPR_U32(ctx, 31, 0x155B94u);
    ctx->pc = 0x155B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B8Cu;
    // 0x155b90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE50u, 0x155B8Cu, 0x155B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B94u;
label_155b94:
    // 0x155b94: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x155b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x155b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b9c: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x155b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x155ba0: 0xc052da8  jal         func_14B6A0
    ctx->pc = 0x155BA0u;
    SET_GPR_U32(ctx, 31, 0x155BA8u);
    ctx->pc = 0x155BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BA0u;
    // 0x155ba4: 0x3c0600b5  lui         $a2, 0xB5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)181 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6A0u, 0x155BA0u, 0x155BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BA8u;
label_155ba8:
    // 0x155ba8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x155ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x155bac: 0x3c0200d2  lui         $v0, 0xD2
    ctx->pc = 0x155bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)210 << 16));
    // 0x155bb0: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x155bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x155bb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155bb8: 0xc052da8  jal         func_14B6A0
    ctx->pc = 0x155BB8u;
    SET_GPR_U32(ctx, 31, 0x155BC0u);
    ctx->pc = 0x155BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BB8u;
    // 0x155bbc: 0x3446b000  ori         $a2, $v0, 0xB000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6A0u, 0x155BB8u, 0x155BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BC0u;
label_155bc0:
    // 0x155bc0: 0xc0a2930  jal         func_28A4C0
    ctx->pc = 0x155BC0u;
    SET_GPR_U32(ctx, 31, 0x155BC8u);
    ctx->pc = 0x28A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A4C0u, 0x155BC0u, 0x155BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BC8u;
label_155bc8:
    // 0x155bc8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x155bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x155bcc: 0xc053868  jal         func_14E1A0
    ctx->pc = 0x155BCCu;
    SET_GPR_U32(ctx, 31, 0x155BD4u);
    ctx->pc = 0x155BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BCCu;
    // 0x155bd0: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E1A0u, 0x155BCCu, 0x155BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BD4u;
label_155bd4:
    // 0x155bd4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x155bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x155bd8: 0xc053874  jal         func_14E1D0
    ctx->pc = 0x155BD8u;
    SET_GPR_U32(ctx, 31, 0x155BE0u);
    ctx->pc = 0x155BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BD8u;
    // 0x155bdc: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E1D0u, 0x155BD8u, 0x155BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BE0u;
label_155be0:
    // 0x155be0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x155be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x155be4: 0xc052dc8  jal         func_14B720
    ctx->pc = 0x155BE4u;
    SET_GPR_U32(ctx, 31, 0x155BECu);
    ctx->pc = 0x155BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BE4u;
    // 0x155be8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B720u, 0x155BE4u, 0x155BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BECu;
label_155bec:
    // 0x155bec: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x155BECu;
    SET_GPR_U32(ctx, 31, 0x155BF4u);
    ctx->pc = 0x2CD290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD290u, 0x155BECu, 0x155BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BF4u;
label_155bf4:
    // 0x155bf4: 0xc0b3184  jal         func_2CC610
    ctx->pc = 0x155BF4u;
    SET_GPR_U32(ctx, 31, 0x155BFCu);
    ctx->pc = 0x2CC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC610u, 0x155BF4u, 0x155BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BFCu;
label_155bfc:
    // 0x155bfc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x155c00: 0xa3808a55  sb          $zero, -0x75AB($gp)
    ctx->pc = 0x155c00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c04: 0xc0d2590  jal         func_349640
    ctx->pc = 0x155C04u;
    SET_GPR_U32(ctx, 31, 0x155C0Cu);
    ctx->pc = 0x155C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C04u;
    // 0x155c08: 0xa3828a54  sb          $v0, -0x75AC($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349640u, 0x155C04u, 0x155C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C0Cu;
label_155c0c:
    // 0x155c0c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x155c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x155c10: 0xc0bcd5c  jal         func_2F3570
    ctx->pc = 0x155C10u;
    SET_GPR_U32(ctx, 31, 0x155C18u);
    ctx->pc = 0x155C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C10u;
    // 0x155c14: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3570u, 0x155C10u, 0x155C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C18u;
label_155c18:
    // 0x155c18: 0xc0bd340  jal         func_2F4D00
    ctx->pc = 0x155C18u;
    SET_GPR_U32(ctx, 31, 0x155C20u);
    ctx->pc = 0x2F4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D00u, 0x155C18u, 0x155C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C20u;
label_155c20:
    // 0x155c20: 0xc0d9048  jal         func_364120
    ctx->pc = 0x155C20u;
    SET_GPR_U32(ctx, 31, 0x155C28u);
    ctx->pc = 0x364120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364120u, 0x155C20u, 0x155C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C28u;
label_155c28:
    // 0x155c28: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x155c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x155c2c: 0xc0cdea4  jal         func_337A90
    ctx->pc = 0x155C2Cu;
    SET_GPR_U32(ctx, 31, 0x155C34u);
    ctx->pc = 0x155C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C2Cu;
    // 0x155c30: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A90u, 0x155C2Cu, 0x155C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C34u;
label_155c34:
    // 0x155c34: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x155c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x155c38: 0xc0d01a4  jal         func_340690
    ctx->pc = 0x155C38u;
    SET_GPR_U32(ctx, 31, 0x155C40u);
    ctx->pc = 0x155C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C38u;
    // 0x155c3c: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340690u, 0x155C38u, 0x155C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C40u;
label_155c40:
    // 0x155c40: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x155c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x155c44: 0xc0d7be8  jal         func_35EFA0
    ctx->pc = 0x155C44u;
    SET_GPR_U32(ctx, 31, 0x155C4Cu);
    ctx->pc = 0x155C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C44u;
    // 0x155c48: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EFA0u, 0x155C44u, 0x155C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C4Cu;
label_155c4c:
    // 0x155c4c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x155c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x155c50: 0xc0d3720  jal         func_34DC80
    ctx->pc = 0x155C50u;
    SET_GPR_U32(ctx, 31, 0x155C58u);
    ctx->pc = 0x155C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C50u;
    // 0x155c54: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DC80u, 0x155C50u, 0x155C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C58u;
label_155c58:
    // 0x155c58: 0xc0d8cd8  jal         func_363360
    ctx->pc = 0x155C58u;
    SET_GPR_U32(ctx, 31, 0x155C60u);
    ctx->pc = 0x363360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363360u, 0x155C58u, 0x155C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C60u;
label_155c60:
    // 0x155c60: 0xc0b9d88  jal         func_2E7620
    ctx->pc = 0x155C60u;
    SET_GPR_U32(ctx, 31, 0x155C68u);
    ctx->pc = 0x2E7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7620u, 0x155C60u, 0x155C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C68u;
label_155c68:
    // 0x155c68: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x155c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x155c6c: 0xc0caf60  jal         func_32BD80
    ctx->pc = 0x155C6Cu;
    SET_GPR_U32(ctx, 31, 0x155C74u);
    ctx->pc = 0x155C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C6Cu;
    // 0x155c70: 0x24841150  addiu       $a0, $a0, 0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BD80u, 0x155C6Cu, 0x155C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C74u;
label_155c74:
    // 0x155c74: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x155c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x155c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c7c: 0xc0b44cc  jal         func_2D1330
    ctx->pc = 0x155C7Cu;
    SET_GPR_U32(ctx, 31, 0x155C84u);
    ctx->pc = 0x155C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C7Cu;
    // 0x155c80: 0x24846cc0  addiu       $a0, $a0, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x155C7Cu, 0x155C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C84u;
label_155c84:
    // 0x155c84: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x155c88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c8c: 0xc0b44cc  jal         func_2D1330
    ctx->pc = 0x155C8Cu;
    SET_GPR_U32(ctx, 31, 0x155C94u);
    ctx->pc = 0x155C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C8Cu;
    // 0x155c90: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x155C8Cu, 0x155C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C94u;
label_155c94:
    // 0x155c94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x155c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x155c98: 0xc0b655c  jal         func_2D9570
    ctx->pc = 0x155C98u;
    SET_GPR_U32(ctx, 31, 0x155CA0u);
    ctx->pc = 0x155C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C98u;
    // 0x155c9c: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9570u, 0x155C98u, 0x155CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CA0u;
label_155ca0:
    // 0x155ca0: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x155ca4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x155ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x155ca8: 0xc07400c  jal         func_1D0030
    ctx->pc = 0x155CA8u;
    SET_GPR_U32(ctx, 31, 0x155CB0u);
    ctx->pc = 0x155CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CA8u;
    // 0x155cac: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0030u, 0x155CA8u, 0x155CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CB0u;
label_155cb0:
    // 0x155cb0: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x155cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x155cb4: 0x9023c638  lbu         $v1, -0x39C8($at)
    ctx->pc = 0x155cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x86C638u));
    // 0x155cb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155cbc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x155cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x155cc0: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x155cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x155cc4: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x155cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x155cc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x155cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x155ccc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x155CCCu;
    {
        const bool branch_taken_0x155ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CCCu;
        // 0x155cd0: 0xa023c638  sb          $v1, -0x39C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294952504), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ccc) {
            ctx->pc = 0x155D40u;
            goto label_155d40;
        }
    }
    ctx->pc = 0x155CD4u;
    // 0x155cd4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x155cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x155cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cdc: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x155cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
label_155ce0:
    // 0x155ce0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x155ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x155ce4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x155ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x155ce8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x155ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x155cec: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x155cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x155cf0: 0x28820200  slti        $v0, $a0, 0x200
    ctx->pc = 0x155cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x155cf4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x155cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x155cf8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x155cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x155cfc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x155cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x155d00: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x155d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x155d04: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x155d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x155d08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x155D08u;
    {
        const bool branch_taken_0x155d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D08u;
        // 0x155d0c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d08) {
            ctx->pc = 0x155CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155ce0;
        }
    }
    ctx->pc = 0x155D10u;
    // 0x155d10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d14: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x155d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155d18:
    // 0x155d18: 0xac6079f4  sw          $zero, 0x79F4($v1)
    ctx->pc = 0x155d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31220), GPR_U32(ctx, 0));
    // 0x155d1c: 0xac6079f8  sw          $zero, 0x79F8($v1)
    ctx->pc = 0x155d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31224), GPR_U32(ctx, 0));
    // 0x155d20: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x155d24: 0xac6079fc  sw          $zero, 0x79FC($v1)
    ctx->pc = 0x155d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31228), GPR_U32(ctx, 0));
    // 0x155d28: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x155d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x155d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x155D2Cu;
    {
        const bool branch_taken_0x155d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D2Cu;
        // 0x155d30: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d2c) {
            ctx->pc = 0x155D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155d18;
        }
    }
    ctx->pc = 0x155D34u;
    // 0x155d34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x155D34u;
    {
        const bool branch_taken_0x155d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155d34) {
            ctx->pc = 0x155D60u;
            goto label_155d60;
        }
    }
    ctx->pc = 0x155D3Cu;
    // 0x155d3c: 0x0  nop
    ctx->pc = 0x155d3cu;
    // NOP
label_155d40:
    // 0x155d40: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155d44: 0x90230e70  lbu         $v1, 0xE70($at)
    ctx->pc = 0x155d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B0E70u));
    // 0x155d48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x155d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x155d4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155D4Cu;
    {
        const bool branch_taken_0x155d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D4Cu;
        // 0x155d50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d4c) {
            ctx->pc = 0x155D60u;
            goto label_155d60;
        }
    }
    ctx->pc = 0x155D54u;
    // 0x155d54: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155d58: 0xa0220e70  sb          $v0, 0xE70($at)
    ctx->pc = 0x155d58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E70u, _value); } while (0);
    // 0x155d5c: 0x0  nop
    ctx->pc = 0x155d5cu;
    // NOP
label_155d60:
    // 0x155d60: 0xae007a20  sw          $zero, 0x7A20($s0)
    ctx->pc = 0x155d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31264), GPR_U32(ctx, 0));
    // 0x155d64: 0xae007a24  sw          $zero, 0x7A24($s0)
    ctx->pc = 0x155d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31268), GPR_U32(ctx, 0));
    // 0x155d68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x155d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155d6c: 0xae007a28  sw          $zero, 0x7A28($s0)
    ctx->pc = 0x155d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31272), GPR_U32(ctx, 0));
    // 0x155d70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155d74: 0xa2007a1a  sb          $zero, 0x7A1A($s0)
    ctx->pc = 0x155d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31258), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d78: 0xa2007a1b  sb          $zero, 0x7A1B($s0)
    ctx->pc = 0x155d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31259), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d7c: 0xa2007a1c  sb          $zero, 0x7A1C($s0)
    ctx->pc = 0x155d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31260), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d80: 0xa2047a18  sb          $a0, 0x7A18($s0)
    ctx->pc = 0x155d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31256), (uint8_t)GPR_U32(ctx, 4));
    // 0x155d84: 0xa2007a19  sb          $zero, 0x7A19($s0)
    ctx->pc = 0x155d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31257), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d88: 0x90220e70  lbu         $v0, 0xE70($at)
    ctx->pc = 0x155d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B0E70u));
    // 0x155d8c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x155d8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x155d90: 0x102000ff  beqz        $at, . + 4 + (0xFF << 2)
    ctx->pc = 0x155D90u;
    {
        const bool branch_taken_0x155d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D90u;
        // 0x155d94: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d90) {
            ctx->pc = 0x156190u;
            goto label_156190;
        }
    }
    ctx->pc = 0x155D98u;
    // 0x155d98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155d9c: 0x246350a0  addiu       $v1, $v1, 0x50A0
    ctx->pc = 0x155d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20640));
    // 0x155da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155da4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155da8: 0x400008  jr          $v0
    ctx->pc = 0x155DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155DB0u: goto label_155db0;
            case 0x155FB0u: goto label_155fb0;
            case 0x1560C0u: goto label_1560c0;
            case 0x1560E0u: goto label_1560e0;
            case 0x156100u: goto label_156100;
            case 0x156190u: goto label_156190;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155DA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x155DB0u;
label_155db0:
    // 0x155db0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155db4: 0x90220e71  lbu         $v0, 0xE71($at)
    ctx->pc = 0x155db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B0E71u));
    // 0x155db8: 0xa2027a1a  sb          $v0, 0x7A1A($s0)
    ctx->pc = 0x155db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31258), (uint8_t)GPR_U32(ctx, 2));
    // 0x155dbc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155dc0: 0x90220e72  lbu         $v0, 0xE72($at)
    ctx->pc = 0x155dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B0E72u));
    // 0x155dc4: 0xa2027a1b  sb          $v0, 0x7A1B($s0)
    ctx->pc = 0x155dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31259), (uint8_t)GPR_U32(ctx, 2));
    // 0x155dc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155dcc: 0x90220e73  lbu         $v0, 0xE73($at)
    ctx->pc = 0x155dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B0E73u));
    // 0x155dd0: 0xa2027a1c  sb          $v0, 0x7A1C($s0)
    ctx->pc = 0x155dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31260), (uint8_t)GPR_U32(ctx, 2));
    // 0x155dd4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155dd8: 0x90220e75  lbu         $v0, 0xE75($at)
    ctx->pc = 0x155dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B0E75u));
    // 0x155ddc: 0xae027a28  sw          $v0, 0x7A28($s0)
    ctx->pc = 0x155ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31272), GPR_U32(ctx, 2));
    // 0x155de0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155de4: 0x90220e74  lbu         $v0, 0xE74($at)
    ctx->pc = 0x155de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B0E74u));
    // 0x155de8: 0xa2027a18  sb          $v0, 0x7A18($s0)
    ctx->pc = 0x155de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31256), (uint8_t)GPR_U32(ctx, 2));
    // 0x155dec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155df0: 0xa2007a19  sb          $zero, 0x7A19($s0)
    ctx->pc = 0x155df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31257), (uint8_t)GPR_U32(ctx, 0));
    // 0x155df4: 0x90230e75  lbu         $v1, 0xE75($at)
    ctx->pc = 0x155df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B0E75u));
    // 0x155df8: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x155DF8u;
    {
        const bool branch_taken_0x155df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x155DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DF8u;
        // 0x155dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155df8) {
            ctx->pc = 0x155E30u;
            goto label_155e30;
        }
    }
    ctx->pc = 0x155E00u;
    // 0x155e00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155E00u;
    {
        const bool branch_taken_0x155e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155e00) {
            ctx->pc = 0x155E10u;
            goto label_155e10;
        }
    }
    ctx->pc = 0x155E08u;
    // 0x155e08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x155E08u;
    {
        const bool branch_taken_0x155e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e08) {
            ctx->pc = 0x155E50u;
            goto label_155e50;
        }
    }
    ctx->pc = 0x155E10u;
label_155e10:
    // 0x155e10: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155e14: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155e14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B0E78u));
    // 0x155e18: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x155e1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155e20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155e24: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155e28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x155E28u;
    {
        const bool branch_taken_0x155e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E28u;
        // 0x155e2c: 0xac220e78  sw          $v0, 0xE78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 3704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e28) {
            ctx->pc = 0x155E50u;
            goto label_155e50;
        }
    }
    ctx->pc = 0x155E30u;
label_155e30:
    // 0x155e30: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155e34: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155e34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B0E78u));
    // 0x155e38: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x155e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x155e3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155e40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155e44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155e48: 0xac220e78  sw          $v0, 0xE78($at)
    ctx->pc = 0x155e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E78u, _value); } while (0);
    // 0x155e4c: 0x0  nop
    ctx->pc = 0x155e4cu;
    // NOP
label_155e50:
    // 0x155e50: 0x92037a18  lbu         $v1, 0x7A18($s0)
    ctx->pc = 0x155e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31256)));
    // 0x155e54: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x155E54u;
    {
        const bool branch_taken_0x155e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E54u;
        // 0x155e58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e54) {
            ctx->pc = 0x155EB8u;
            goto label_155eb8;
        }
    }
    ctx->pc = 0x155E5Cu;
    // 0x155e5c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x155E5Cu;
    {
        const bool branch_taken_0x155e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155e5c) {
            ctx->pc = 0x155E98u;
            goto label_155e98;
        }
    }
    ctx->pc = 0x155E64u;
    // 0x155e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155e68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155E68u;
    {
        const bool branch_taken_0x155e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155e68) {
            ctx->pc = 0x155E78u;
            goto label_155e78;
        }
    }
    ctx->pc = 0x155E70u;
    // 0x155e70: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x155E70u;
    {
        const bool branch_taken_0x155e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155e70) {
            ctx->pc = 0x155ED8u;
            goto label_155ed8;
        }
    }
    ctx->pc = 0x155E78u;
label_155e78:
    // 0x155e78: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155e7c: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B0E78u));
    // 0x155e80: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x155e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x155e84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155e88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155e8c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155e90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x155E90u;
    {
        const bool branch_taken_0x155e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E90u;
        // 0x155e94: 0xac220e78  sw          $v0, 0xE78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 3704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155e90) {
            ctx->pc = 0x155ED8u;
            goto label_155ed8;
        }
    }
    ctx->pc = 0x155E98u;
label_155e98:
    // 0x155e98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155e9c: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B0E78u));
    // 0x155ea0: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x155ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x155ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155ea8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155eac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155eb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x155EB0u;
    {
        const bool branch_taken_0x155eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EB0u;
        // 0x155eb4: 0xac220e78  sw          $v0, 0xE78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 3704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155eb0) {
            ctx->pc = 0x155ED8u;
            goto label_155ed8;
        }
    }
    ctx->pc = 0x155EB8u;
label_155eb8:
    // 0x155eb8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155ebc: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B0E78u));
    // 0x155ec0: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x155ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x155ec4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155ec8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155ecc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155ed0: 0xac220e78  sw          $v0, 0xE78($at)
    ctx->pc = 0x155ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E78u, _value); } while (0);
    // 0x155ed4: 0x0  nop
    ctx->pc = 0x155ed4u;
    // NOP
label_155ed8:
    // 0x155ed8: 0x92037a1a  lbu         $v1, 0x7A1A($s0)
    ctx->pc = 0x155ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31258)));
    // 0x155edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155ee0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x155EE0u;
    {
        const bool branch_taken_0x155ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EE0u;
        // 0x155ee4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ee0) {
            ctx->pc = 0x155F18u;
            goto label_155f18;
        }
    }
    ctx->pc = 0x155EE8u;
    // 0x155ee8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155EE8u;
    {
        const bool branch_taken_0x155ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155ee8) {
            ctx->pc = 0x155EF8u;
            goto label_155ef8;
        }
    }
    ctx->pc = 0x155EF0u;
    // 0x155ef0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x155EF0u;
    {
        const bool branch_taken_0x155ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ef0) {
            ctx->pc = 0x155F38u;
            goto label_155f38;
        }
    }
    ctx->pc = 0x155EF8u;
label_155ef8:
    // 0x155ef8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155efc: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155efcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B0E78u));
    // 0x155f00: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x155f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x155f04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155f08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155f0c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155f10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x155F10u;
    {
        const bool branch_taken_0x155f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F10u;
        // 0x155f14: 0xac220e78  sw          $v0, 0xE78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 3704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f10) {
            ctx->pc = 0x155F38u;
            goto label_155f38;
        }
    }
    ctx->pc = 0x155F18u;
label_155f18:
    // 0x155f18: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155f1c: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B0E78u));
    // 0x155f20: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x155f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x155f24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155f28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155f2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155f30: 0xac220e78  sw          $v0, 0xE78($at)
    ctx->pc = 0x155f30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E78u, _value); } while (0);
    // 0x155f34: 0x0  nop
    ctx->pc = 0x155f34u;
    // NOP
label_155f38:
    // 0x155f38: 0x92037a1b  lbu         $v1, 0x7A1B($s0)
    ctx->pc = 0x155f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31259)));
    // 0x155f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155f40: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155F40u;
    {
        const bool branch_taken_0x155f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F40u;
        // 0x155f44: 0x3c01006b  lui         $at, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f40) {
            ctx->pc = 0x155F60u;
            goto label_155f60;
        }
    }
    ctx->pc = 0x155F48u;
    // 0x155f48: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x155f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x155f4c: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3704)));
    // 0x155f50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155f54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155f58: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155f5c: 0xac220e78  sw          $v0, 0xE78($at)
    ctx->pc = 0x155f5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E78u, _value); } while (0);
label_155f60:
    // 0x155f60: 0x92037a1c  lbu         $v1, 0x7A1C($s0)
    ctx->pc = 0x155f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31260)));
    // 0x155f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155f68: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155F68u;
    {
        const bool branch_taken_0x155f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F68u;
        // 0x155f6c: 0x3c01006b  lui         $at, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f68) {
            ctx->pc = 0x155F88u;
            goto label_155f88;
        }
    }
    ctx->pc = 0x155F70u;
    // 0x155f70: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x155f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x155f74: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x155f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3704)));
    // 0x155f78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155f7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155f80: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x155f84: 0xac220e78  sw          $v0, 0xE78($at)
    ctx->pc = 0x155f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E78u, _value); } while (0);
label_155f88:
    // 0x155f88: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x155f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x155f8c: 0xc0eb694  jal         func_3ADA50
    ctx->pc = 0x155F8Cu;
    SET_GPR_U32(ctx, 31, 0x155F94u);
    ctx->pc = 0x155F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F8Cu;
    // 0x155f90: 0x24843340  addiu       $a0, $a0, 0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADA50u, 0x155F8Cu, 0x155F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F94u;
label_155f94:
    // 0x155f94: 0xc05556c  jal         func_1555B0
    ctx->pc = 0x155F94u;
    SET_GPR_U32(ctx, 31, 0x155F9Cu);
    ctx->pc = 0x1555B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555B0u, 0x155F94u, 0x155F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F9Cu;
label_155f9c:
    // 0x155f9c: 0xc0d9350  jal         func_364D40
    ctx->pc = 0x155F9Cu;
    SET_GPR_U32(ctx, 31, 0x155FA4u);
    ctx->pc = 0x364D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364D40u, 0x155F9Cu, 0x155FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FA4u;
label_155fa4:
    // 0x155fa4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x155FA4u;
    {
        const bool branch_taken_0x155fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155fa4) {
            ctx->pc = 0x156190u;
            goto label_156190;
        }
    }
    ctx->pc = 0x155FACu;
    // 0x155fac: 0x0  nop
    ctx->pc = 0x155facu;
    // NOP
label_155fb0:
    // 0x155fb0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x155fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x155fb4: 0x8c223b30  lw          $v0, 0x3B30($at)
    ctx->pc = 0x155fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x923B30u));
    // 0x155fb8: 0xae027a20  sw          $v0, 0x7A20($s0)
    ctx->pc = 0x155fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31264), GPR_U32(ctx, 2));
    // 0x155fbc: 0x8e027a20  lw          $v0, 0x7A20($s0)
    ctx->pc = 0x155fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31264)));
    // 0x155fc0: 0xc0d2578  jal         func_3495E0
    ctx->pc = 0x155FC0u;
    SET_GPR_U32(ctx, 31, 0x155FC8u);
    ctx->pc = 0x155FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FC0u;
    // 0x155fc4: 0xae027a24  sw          $v0, 0x7A24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3495E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3495E0u, 0x155FC0u, 0x155FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FC8u;
label_155fc8:
    // 0x155fc8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x155fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x155fcc: 0xc0f55dc  jal         func_3D5770
    ctx->pc = 0x155FCCu;
    SET_GPR_U32(ctx, 31, 0x155FD4u);
    ctx->pc = 0x155FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FCCu;
    // 0x155fd0: 0x24840740  addiu       $a0, $a0, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5770u, 0x155FCCu, 0x155FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FD4u;
label_155fd4:
    // 0x155fd4: 0xc05556c  jal         func_1555B0
    ctx->pc = 0x155FD4u;
    SET_GPR_U32(ctx, 31, 0x155FDCu);
    ctx->pc = 0x1555B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555B0u, 0x155FD4u, 0x155FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FDCu;
label_155fdc:
    // 0x155fdc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x155fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x155fe0: 0x9423074c  lhu         $v1, 0x74C($at)
    ctx->pc = 0x155fe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x93074Cu));
    // 0x155fe4: 0x38620181  xori        $v0, $v1, 0x181
    ctx->pc = 0x155fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)385);
    // 0x155fe8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x155fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155fec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x155FECu;
    {
        const bool branch_taken_0x155fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FECu;
        // 0x155ff0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fec) {
            ctx->pc = 0x156020u;
            goto label_156020;
        }
    }
    ctx->pc = 0x155FF4u;
    // 0x155ff4: 0xa4236ac4  sh          $v1, 0x6AC4($at)
    ctx->pc = 0x155ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 27332), (uint16_t)GPR_U32(ctx, 3));
    // 0x155ff8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x155ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x155ffc: 0xa4236ace  sh          $v1, 0x6ACE($at)
    ctx->pc = 0x155ffcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6ACEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6ACEu, _value); } while (0);
    // 0x156000: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x156000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x156004: 0x9422074e  lhu         $v0, 0x74E($at)
    ctx->pc = 0x156004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x93074Eu));
    // 0x156008: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x156008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15600c: 0xa0226ac8  sb          $v0, 0x6AC8($at)
    ctx->pc = 0x15600cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC8u, _value); } while (0);
    // 0x156010: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x156010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x156014: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x156014u;
    {
        const bool branch_taken_0x156014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156014u;
        // 0x156018: 0xa0226ad0  sb          $v0, 0x6AD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 27344), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156014) {
            ctx->pc = 0x156098u;
            goto label_156098;
        }
    }
    ctx->pc = 0x15601Cu;
    // 0x15601c: 0x0  nop
    ctx->pc = 0x15601cu;
    // NOP
label_156020:
    // 0x156020: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x156020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x156024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156028: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x15602c: 0x0  nop
    ctx->pc = 0x15602cu;
    // NOP
label_156030:
    // 0x156030: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x156030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x156034: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x156034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x156038: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x156038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x15603c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15603cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x156040: 0x28820200  slti        $v0, $a0, 0x200
    ctx->pc = 0x156040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x156044: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x156044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x156048: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x156048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x15604c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x15604cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x156050: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x156050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x156054: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x156054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x156058: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x156058u;
    {
        const bool branch_taken_0x156058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156058u;
        // 0x15605c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156058) {
            ctx->pc = 0x156030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156030;
        }
    }
    ctx->pc = 0x156060u;
    // 0x156060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156064: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x156064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156068:
    // 0x156068: 0xac6079f4  sw          $zero, 0x79F4($v1)
    ctx->pc = 0x156068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31220), GPR_U32(ctx, 0));
    // 0x15606c: 0xac6079f8  sw          $zero, 0x79F8($v1)
    ctx->pc = 0x15606cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31224), GPR_U32(ctx, 0));
    // 0x156070: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x156074: 0xac6079fc  sw          $zero, 0x79FC($v1)
    ctx->pc = 0x156074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31228), GPR_U32(ctx, 0));
    // 0x156078: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x156078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15607c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15607Cu;
    {
        const bool branch_taken_0x15607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15607Cu;
        // 0x156080: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15607c) {
            ctx->pc = 0x156068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156068;
        }
    }
    ctx->pc = 0x156084u;
    // 0x156084: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x156084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156088: 0xa3808a55  sb          $zero, -0x75AB($gp)
    ctx->pc = 0x156088u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 0));
    // 0x15608c: 0xc0d9350  jal         func_364D40
    ctx->pc = 0x15608Cu;
    SET_GPR_U32(ctx, 31, 0x156094u);
    ctx->pc = 0x156090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15608Cu;
    // 0x156090: 0xa3828a54  sb          $v0, -0x75AC($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364D40u, 0x15608Cu, 0x156094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156094u;
label_156094:
    // 0x156094: 0x0  nop
    ctx->pc = 0x156094u;
    // NOP
label_156098:
    // 0x156098: 0x93858a55  lbu         $a1, -0x75AB($gp)
    ctx->pc = 0x156098u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
    // 0x15609c: 0xc0e0f10  jal         func_383C40
    ctx->pc = 0x15609Cu;
    SET_GPR_U32(ctx, 31, 0x1560A4u);
    ctx->pc = 0x1560A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15609Cu;
    // 0x1560a0: 0x93848a54  lbu         $a0, -0x75AC($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C40u, 0x15609Cu, 0x1560A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560A4u;
label_1560a4:
    // 0x1560a4: 0xc0d27e8  jal         func_349FA0
    ctx->pc = 0x1560A4u;
    SET_GPR_U32(ctx, 31, 0x1560ACu);
    ctx->pc = 0x349FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FA0u, 0x1560A4u, 0x1560ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560ACu;
label_1560ac:
    // 0x1560ac: 0xc0d2800  jal         func_34A000
    ctx->pc = 0x1560ACu;
    SET_GPR_U32(ctx, 31, 0x1560B4u);
    ctx->pc = 0x34A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A000u, 0x1560ACu, 0x1560B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560B4u;
label_1560b4:
    // 0x1560b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1560B4u;
    {
        const bool branch_taken_0x1560b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1560b4) {
            ctx->pc = 0x156190u;
            goto label_156190;
        }
    }
    ctx->pc = 0x1560BCu;
    // 0x1560bc: 0x0  nop
    ctx->pc = 0x1560bcu;
    // NOP
label_1560c0:
    // 0x1560c0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1560c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1560c4: 0xa0206ac9  sb          $zero, 0x6AC9($at)
    ctx->pc = 0x1560c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC9u, _value); } while (0);
    // 0x1560c8: 0x24020e01  addiu       $v0, $zero, 0xE01
    ctx->pc = 0x1560c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3585));
    // 0x1560cc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1560ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1560d0: 0xa0206ac8  sb          $zero, 0x6AC8($at)
    ctx->pc = 0x1560d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC8u, _value); } while (0);
    // 0x1560d4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1560d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1560d8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1560D8u;
    {
        const bool branch_taken_0x1560d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D8u;
        // 0x1560dc: 0xa4226ac4  sh          $v0, 0x6AC4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 27332), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560d8) {
            ctx->pc = 0x156190u;
            goto label_156190;
        }
    }
    ctx->pc = 0x1560E0u;
label_1560e0:
    // 0x1560e0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1560e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1560e4: 0xa0206ac9  sb          $zero, 0x6AC9($at)
    ctx->pc = 0x1560e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC9u, _value); } while (0);
    // 0x1560e8: 0x24020e02  addiu       $v0, $zero, 0xE02
    ctx->pc = 0x1560e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3586));
    // 0x1560ec: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1560ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1560f0: 0xa0206ac8  sb          $zero, 0x6AC8($at)
    ctx->pc = 0x1560f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC8u, _value); } while (0);
    // 0x1560f4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1560f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1560f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1560F8u;
    {
        const bool branch_taken_0x1560f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560F8u;
        // 0x1560fc: 0xa4226ac4  sh          $v0, 0x6AC4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 27332), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560f8) {
            ctx->pc = 0x156190u;
            goto label_156190;
        }
    }
    ctx->pc = 0x156100u;
label_156100:
    // 0x156100: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x156104: 0x90230e76  lbu         $v1, 0xE76($at)
    ctx->pc = 0x156104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B0E76u));
    // 0x156108: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x156108u;
    {
        const bool branch_taken_0x156108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x15610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156108u;
        // 0x15610c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156108) {
            ctx->pc = 0x156148u;
            goto label_156148;
        }
    }
    ctx->pc = 0x156110u;
    // 0x156110: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x156110u;
    {
        const bool branch_taken_0x156110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156110) {
            ctx->pc = 0x156138u;
            goto label_156138;
        }
    }
    ctx->pc = 0x156118u;
    // 0x156118: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156118u;
    {
        const bool branch_taken_0x156118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156118) {
            ctx->pc = 0x156128u;
            goto label_156128;
        }
    }
    ctx->pc = 0x156120u;
    // 0x156120: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x156120u;
    {
        const bool branch_taken_0x156120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156120) {
            ctx->pc = 0x156158u;
            goto label_156158;
        }
    }
    ctx->pc = 0x156128u;
label_156128:
    // 0x156128: 0x24020bb8  addiu       $v0, $zero, 0xBB8
    ctx->pc = 0x156128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x15612c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15612cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x156130: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x156130u;
    {
        const bool branch_taken_0x156130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156130u;
        // 0x156134: 0xa4226ac4  sh          $v0, 0x6AC4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 27332), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156130) {
            ctx->pc = 0x156158u;
            goto label_156158;
        }
    }
    ctx->pc = 0x156138u;
label_156138:
    // 0x156138: 0x24020bb4  addiu       $v0, $zero, 0xBB4
    ctx->pc = 0x156138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2996));
    // 0x15613c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15613cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x156140: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x156140u;
    {
        const bool branch_taken_0x156140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156140u;
        // 0x156144: 0xa4226ac4  sh          $v0, 0x6AC4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 27332), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156140) {
            ctx->pc = 0x156158u;
            goto label_156158;
        }
    }
    ctx->pc = 0x156148u;
label_156148:
    // 0x156148: 0x24020bb0  addiu       $v0, $zero, 0xBB0
    ctx->pc = 0x156148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2992));
    // 0x15614c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15614cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x156150: 0xa4226ac4  sh          $v0, 0x6AC4($at)
    ctx->pc = 0x156150u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6AC4u, _value); } while (0);
    // 0x156154: 0x0  nop
    ctx->pc = 0x156154u;
    // NOP
label_156158:
    // 0x156158: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15615c: 0xa0206ac9  sb          $zero, 0x6AC9($at)
    ctx->pc = 0x15615cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC9u, _value); } while (0);
    // 0x156160: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x156164: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x156164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x156168: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x156168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x15616c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x156170: 0xc056e04  jal         func_15B810
    ctx->pc = 0x156170u;
    SET_GPR_U32(ctx, 31, 0x156178u);
    ctx->pc = 0x156174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156170u;
    // 0x156174: 0xa0206ac8  sb          $zero, 0x6AC8($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27336), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x156170u, 0x156178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156178u;
label_156178:
    // 0x156178: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15617c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x156180: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x156180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x156184: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x156188: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x156188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x15618c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15618cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_156190:
    // 0x156190: 0x8e037a28  lw          $v1, 0x7A28($s0)
    ctx->pc = 0x156190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31272)));
    // 0x156194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156198: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156198u;
    {
        const bool branch_taken_0x156198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156198u;
        // 0x15619c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156198) {
            ctx->pc = 0x1561B0u;
            goto label_1561b0;
        }
    }
    ctx->pc = 0x1561A0u;
    // 0x1561a0: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x1561a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x1561a4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1561a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1561a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1561a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1561ac: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x1561acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_1561b0:
    // 0x1561b0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1561b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1561b4: 0xa20b7930  sb          $t3, 0x7930($s0)
    ctx->pc = 0x1561b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31024), (uint8_t)GPR_U32(ctx, 11));
    // 0x1561b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1561b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1561bc: 0xa6007928  sh          $zero, 0x7928($s0)
    ctx->pc = 0x1561bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31016), (uint16_t)GPR_U32(ctx, 0));
    // 0x1561c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1561c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1561c4: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x1561c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1561c8: 0xa200792a  sb          $zero, 0x792A($s0)
    ctx->pc = 0x1561c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31018), (uint8_t)GPR_U32(ctx, 0));
    // 0x1561cc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1561ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1561d0: 0xa20a792b  sb          $t2, 0x792B($s0)
    ctx->pc = 0x1561d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31019), (uint8_t)GPR_U32(ctx, 10));
    // 0x1561d4: 0xa209792c  sb          $t1, 0x792C($s0)
    ctx->pc = 0x1561d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31020), (uint8_t)GPR_U32(ctx, 9));
    // 0x1561d8: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1561d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1561dc: 0xa200792d  sb          $zero, 0x792D($s0)
    ctx->pc = 0x1561dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31021), (uint8_t)GPR_U32(ctx, 0));
    // 0x1561e0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1561e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1561e4: 0xa600792e  sh          $zero, 0x792E($s0)
    ctx->pc = 0x1561e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31022), (uint16_t)GPR_U32(ctx, 0));
    // 0x1561e8: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x1561e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1561ec: 0xa2007931  sb          $zero, 0x7931($s0)
    ctx->pc = 0x1561ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31025), (uint8_t)GPR_U32(ctx, 0));
    // 0x1561f0: 0x26077920  addiu       $a3, $s0, 0x7920
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 31008));
    // 0x1561f4: 0xa6007932  sh          $zero, 0x7932($s0)
    ctx->pc = 0x1561f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31026), (uint16_t)GPR_U32(ctx, 0));
    // 0x1561f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x1561f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x1561fc: 0xae007934  sw          $zero, 0x7934($s0)
    ctx->pc = 0x1561fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31028), GPR_U32(ctx, 0));
    // 0x156200: 0x26067938  addiu       $a2, $s0, 0x7938
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 31032));
    // 0x156204: 0xa20b7948  sb          $t3, 0x7948($s0)
    ctx->pc = 0x156204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31048), (uint8_t)GPR_U32(ctx, 11));
    // 0x156208: 0x26057950  addiu       $a1, $s0, 0x7950
    ctx->pc = 0x156208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 31056));
    // 0x15620c: 0xa6007940  sh          $zero, 0x7940($s0)
    ctx->pc = 0x15620cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31040), (uint16_t)GPR_U32(ctx, 0));
    // 0x156210: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x156210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156214: 0xa2007942  sb          $zero, 0x7942($s0)
    ctx->pc = 0x156214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31042), (uint8_t)GPR_U32(ctx, 0));
    // 0x156218: 0x2784861c  addiu       $a0, $gp, -0x79E4
    ctx->pc = 0x156218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936092));
    // 0x15621c: 0xa20a7943  sb          $t2, 0x7943($s0)
    ctx->pc = 0x15621cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31043), (uint8_t)GPR_U32(ctx, 10));
    // 0x156220: 0xa2097944  sb          $t1, 0x7944($s0)
    ctx->pc = 0x156220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31044), (uint8_t)GPR_U32(ctx, 9));
    // 0x156224: 0xa2007945  sb          $zero, 0x7945($s0)
    ctx->pc = 0x156224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31045), (uint8_t)GPR_U32(ctx, 0));
    // 0x156228: 0xa6007946  sh          $zero, 0x7946($s0)
    ctx->pc = 0x156228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31046), (uint16_t)GPR_U32(ctx, 0));
    // 0x15622c: 0xa2007949  sb          $zero, 0x7949($s0)
    ctx->pc = 0x15622cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31049), (uint8_t)GPR_U32(ctx, 0));
    // 0x156230: 0xa600794a  sh          $zero, 0x794A($s0)
    ctx->pc = 0x156230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31050), (uint16_t)GPR_U32(ctx, 0));
    // 0x156234: 0xae00794c  sw          $zero, 0x794C($s0)
    ctx->pc = 0x156234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31052), GPR_U32(ctx, 0));
    // 0x156238: 0xa20b7960  sb          $t3, 0x7960($s0)
    ctx->pc = 0x156238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31072), (uint8_t)GPR_U32(ctx, 11));
    // 0x15623c: 0xa6087958  sh          $t0, 0x7958($s0)
    ctx->pc = 0x15623cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31064), (uint16_t)GPR_U32(ctx, 8));
    // 0x156240: 0xa200795a  sb          $zero, 0x795A($s0)
    ctx->pc = 0x156240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31066), (uint8_t)GPR_U32(ctx, 0));
    // 0x156244: 0xa20a795b  sb          $t2, 0x795B($s0)
    ctx->pc = 0x156244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31067), (uint8_t)GPR_U32(ctx, 10));
    // 0x156248: 0xa209795c  sb          $t1, 0x795C($s0)
    ctx->pc = 0x156248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31068), (uint8_t)GPR_U32(ctx, 9));
    // 0x15624c: 0xa200795d  sb          $zero, 0x795D($s0)
    ctx->pc = 0x15624cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31069), (uint8_t)GPR_U32(ctx, 0));
    // 0x156250: 0xa600795e  sh          $zero, 0x795E($s0)
    ctx->pc = 0x156250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31070), (uint16_t)GPR_U32(ctx, 0));
    // 0x156254: 0xa2007961  sb          $zero, 0x7961($s0)
    ctx->pc = 0x156254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31073), (uint8_t)GPR_U32(ctx, 0));
    // 0x156258: 0xa6007962  sh          $zero, 0x7962($s0)
    ctx->pc = 0x156258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 31074), (uint16_t)GPR_U32(ctx, 0));
    // 0x15625c: 0xae007964  sw          $zero, 0x7964($s0)
    ctx->pc = 0x15625cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31076), GPR_U32(ctx, 0));
    // 0x156260: 0xac270e80  sw          $a3, 0xE80($at)
    ctx->pc = 0x156260u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6B0E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E80u, _value); } while (0);
    // 0x156264: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x156264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x156268: 0xac260e84  sw          $a2, 0xE84($at)
    ctx->pc = 0x156268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B0E84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E84u, _value); } while (0);
    // 0x15626c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x15626cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x156270: 0xac250e88  sw          $a1, 0xE88($at)
    ctx->pc = 0x156270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B0E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E88u, _value); } while (0);
    // 0x156274: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x156278: 0x8c220e88  lw          $v0, 0xE88($at)
    ctx->pc = 0x156278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B0E88u));
    // 0x15627c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x15627cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x156280: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x156284: 0xc05a060  jal         func_168180
    ctx->pc = 0x156284u;
    SET_GPR_U32(ctx, 31, 0x15628Cu);
    ctx->pc = 0x156288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156284u;
    // 0x156288: 0xa020cea9  sb          $zero, -0x3157($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954665), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168180u, 0x156284u, 0x15628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15628Cu;
label_15628c:
    // 0x15628c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15628cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x156290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x156290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156294: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x156294u;
    SET_GPR_U32(ctx, 31, 0x15629Cu);
    ctx->pc = 0x156298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156294u;
    // 0x156298: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x156294u, 0x15629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15629Cu;
label_15629c:
    // 0x15629c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1562a0: 0xc0cc928  jal         func_3324A0
    ctx->pc = 0x1562A0u;
    SET_GPR_U32(ctx, 31, 0x1562A8u);
    ctx->pc = 0x1562A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562A0u;
    // 0x1562a4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3324A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3324A0u, 0x1562A0u, 0x1562A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562A8u;
label_1562a8:
    // 0x1562a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1562a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1562ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1562acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1562b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1562B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1562B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562B0u;
        // 0x1562b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1562B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1562B8u;
}
