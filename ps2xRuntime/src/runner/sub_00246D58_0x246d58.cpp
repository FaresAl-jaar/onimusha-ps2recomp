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

// Function: sub_00246D58
// Address: 0x246d58 - 0x2470bc
void sub_00246D58_0x246d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246D58_0x246d58");
#endif

    switch (ctx->pc) {
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd0u: goto label_246dd0;
        case 0x246dd4u: goto label_246dd4;
        case 0x246dd8u: goto label_246dd8;
        case 0x246ddcu: goto label_246ddc;
        case 0x246de0u: goto label_246de0;
        case 0x246de4u: goto label_246de4;
        case 0x246de8u: goto label_246de8;
        case 0x246decu: goto label_246dec;
        case 0x246df0u: goto label_246df0;
        case 0x246df4u: goto label_246df4;
        case 0x246df8u: goto label_246df8;
        case 0x246dfcu: goto label_246dfc;
        case 0x246e00u: goto label_246e00;
        case 0x246e04u: goto label_246e04;
        case 0x246e08u: goto label_246e08;
        case 0x246e0cu: goto label_246e0c;
        case 0x246e10u: goto label_246e10;
        case 0x246e14u: goto label_246e14;
        case 0x246e18u: goto label_246e18;
        case 0x246e1cu: goto label_246e1c;
        case 0x246e20u: goto label_246e20;
        case 0x246e24u: goto label_246e24;
        case 0x246e28u: goto label_246e28;
        case 0x246e2cu: goto label_246e2c;
        case 0x246e30u: goto label_246e30;
        case 0x246e34u: goto label_246e34;
        case 0x246e38u: goto label_246e38;
        case 0x246e3cu: goto label_246e3c;
        case 0x246e40u: goto label_246e40;
        case 0x246e44u: goto label_246e44;
        case 0x246e48u: goto label_246e48;
        case 0x246e4cu: goto label_246e4c;
        case 0x246e50u: goto label_246e50;
        case 0x246e54u: goto label_246e54;
        case 0x246e58u: goto label_246e58;
        case 0x246e5cu: goto label_246e5c;
        case 0x246e60u: goto label_246e60;
        case 0x246e64u: goto label_246e64;
        case 0x246e68u: goto label_246e68;
        case 0x246e6cu: goto label_246e6c;
        case 0x246e70u: goto label_246e70;
        case 0x246e74u: goto label_246e74;
        case 0x246e78u: goto label_246e78;
        case 0x246e7cu: goto label_246e7c;
        case 0x246e80u: goto label_246e80;
        case 0x246e84u: goto label_246e84;
        case 0x246e88u: goto label_246e88;
        case 0x246e8cu: goto label_246e8c;
        case 0x246e90u: goto label_246e90;
        case 0x246e94u: goto label_246e94;
        case 0x246e98u: goto label_246e98;
        case 0x246e9cu: goto label_246e9c;
        case 0x246ea0u: goto label_246ea0;
        case 0x246ea4u: goto label_246ea4;
        case 0x246ea8u: goto label_246ea8;
        case 0x246eacu: goto label_246eac;
        case 0x246eb0u: goto label_246eb0;
        case 0x246eb4u: goto label_246eb4;
        case 0x246eb8u: goto label_246eb8;
        case 0x246ebcu: goto label_246ebc;
        case 0x246ec0u: goto label_246ec0;
        case 0x246ec4u: goto label_246ec4;
        case 0x246ec8u: goto label_246ec8;
        case 0x246eccu: goto label_246ecc;
        case 0x246ed0u: goto label_246ed0;
        case 0x246ed4u: goto label_246ed4;
        case 0x246ed8u: goto label_246ed8;
        case 0x246edcu: goto label_246edc;
        case 0x246ee0u: goto label_246ee0;
        case 0x246ee4u: goto label_246ee4;
        case 0x246ee8u: goto label_246ee8;
        case 0x246eecu: goto label_246eec;
        case 0x246ef0u: goto label_246ef0;
        case 0x246ef4u: goto label_246ef4;
        case 0x246ef8u: goto label_246ef8;
        case 0x246efcu: goto label_246efc;
        case 0x246f00u: goto label_246f00;
        case 0x246f04u: goto label_246f04;
        case 0x246f08u: goto label_246f08;
        case 0x246f0cu: goto label_246f0c;
        case 0x246f10u: goto label_246f10;
        case 0x246f14u: goto label_246f14;
        case 0x246f18u: goto label_246f18;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f20u: goto label_246f20;
        case 0x246f24u: goto label_246f24;
        case 0x246f28u: goto label_246f28;
        case 0x246f2cu: goto label_246f2c;
        case 0x246f30u: goto label_246f30;
        case 0x246f34u: goto label_246f34;
        case 0x246f38u: goto label_246f38;
        case 0x246f3cu: goto label_246f3c;
        case 0x246f40u: goto label_246f40;
        case 0x246f44u: goto label_246f44;
        case 0x246f48u: goto label_246f48;
        case 0x246f4cu: goto label_246f4c;
        case 0x246f50u: goto label_246f50;
        case 0x246f54u: goto label_246f54;
        case 0x246f58u: goto label_246f58;
        case 0x246f5cu: goto label_246f5c;
        case 0x246f60u: goto label_246f60;
        case 0x246f64u: goto label_246f64;
        case 0x246f68u: goto label_246f68;
        case 0x246f6cu: goto label_246f6c;
        case 0x246f70u: goto label_246f70;
        case 0x246f74u: goto label_246f74;
        case 0x246f78u: goto label_246f78;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f80u: goto label_246f80;
        case 0x246f84u: goto label_246f84;
        case 0x246f88u: goto label_246f88;
        case 0x246f8cu: goto label_246f8c;
        case 0x246f90u: goto label_246f90;
        case 0x246f94u: goto label_246f94;
        case 0x246f98u: goto label_246f98;
        case 0x246f9cu: goto label_246f9c;
        case 0x246fa0u: goto label_246fa0;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fa8u: goto label_246fa8;
        case 0x246facu: goto label_246fac;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fb4u: goto label_246fb4;
        case 0x246fb8u: goto label_246fb8;
        case 0x246fbcu: goto label_246fbc;
        case 0x246fc0u: goto label_246fc0;
        case 0x246fc4u: goto label_246fc4;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fccu: goto label_246fcc;
        case 0x246fd0u: goto label_246fd0;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fd8u: goto label_246fd8;
        case 0x246fdcu: goto label_246fdc;
        case 0x246fe0u: goto label_246fe0;
        case 0x246fe4u: goto label_246fe4;
        case 0x246fe8u: goto label_246fe8;
        case 0x246fecu: goto label_246fec;
        case 0x246ff0u: goto label_246ff0;
        case 0x246ff4u: goto label_246ff4;
        case 0x246ff8u: goto label_246ff8;
        case 0x246ffcu: goto label_246ffc;
        case 0x247000u: goto label_247000;
        case 0x247004u: goto label_247004;
        case 0x247008u: goto label_247008;
        case 0x24700cu: goto label_24700c;
        case 0x247010u: goto label_247010;
        case 0x247014u: goto label_247014;
        case 0x247018u: goto label_247018;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247024u: goto label_247024;
        case 0x247028u: goto label_247028;
        case 0x24702cu: goto label_24702c;
        case 0x247030u: goto label_247030;
        case 0x247034u: goto label_247034;
        case 0x247038u: goto label_247038;
        case 0x24703cu: goto label_24703c;
        case 0x247040u: goto label_247040;
        case 0x247044u: goto label_247044;
        case 0x247048u: goto label_247048;
        case 0x24704cu: goto label_24704c;
        case 0x247050u: goto label_247050;
        case 0x247054u: goto label_247054;
        case 0x247058u: goto label_247058;
        case 0x24705cu: goto label_24705c;
        case 0x247060u: goto label_247060;
        case 0x247064u: goto label_247064;
        case 0x247068u: goto label_247068;
        case 0x24706cu: goto label_24706c;
        case 0x247070u: goto label_247070;
        case 0x247074u: goto label_247074;
        case 0x247078u: goto label_247078;
        case 0x24707cu: goto label_24707c;
        case 0x247080u: goto label_247080;
        case 0x247084u: goto label_247084;
        case 0x247088u: goto label_247088;
        case 0x24708cu: goto label_24708c;
        case 0x247090u: goto label_247090;
        case 0x247094u: goto label_247094;
        case 0x247098u: goto label_247098;
        case 0x24709cu: goto label_24709c;
        case 0x2470a0u: goto label_2470a0;
        case 0x2470a4u: goto label_2470a4;
        case 0x2470a8u: goto label_2470a8;
        case 0x2470acu: goto label_2470ac;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b4u: goto label_2470b4;
        case 0x2470b8u: goto label_2470b8;
        default: break;
    }

    ctx->pc = 0x246d58u;

label_246d58:
    // 0x246d58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x246d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_246d5c:
    // 0x246d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246d60:
    // 0x246d60: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x246d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_246d64:
    // 0x246d64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x246d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_246d68:
    // 0x246d68: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x246d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_246d6c:
    // 0x246d6c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x246d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_246d70:
    // 0x246d70: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x246d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_246d74:
    // 0x246d74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x246d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_246d78:
    // 0x246d78: 0x82440001  lb          $a0, 0x1($s2)
    ctx->pc = 0x246d78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_246d7c:
    // 0x246d7c: 0x148200c9  bne         $a0, $v0, . + 4 + (0xC9 << 2)
label_246d80:
    if (ctx->pc == 0x246D80u) {
        ctx->pc = 0x246D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D7Cu;
        // 0x246d80: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D84u;
        goto label_246d84;
    }
    ctx->pc = 0x246D7Cu;
    {
        const bool branch_taken_0x246d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x246D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D7Cu;
        // 0x246d80: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d7c) {
            ctx->pc = 0x2470A4u;
            goto label_2470a4;
        }
    }
    ctx->pc = 0x246D84u;
label_246d84:
    // 0x246d84: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x246d84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_246d88:
    // 0x246d88: 0x14440026  bne         $v0, $a0, . + 4 + (0x26 << 2)
label_246d8c:
    if (ctx->pc == 0x246D8Cu) {
        ctx->pc = 0x246D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D88u;
        // 0x246d8c: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D90u;
        goto label_246d90;
    }
    ctx->pc = 0x246D88u;
    {
        const bool branch_taken_0x246d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x246D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D88u;
        // 0x246d8c: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d88) {
            ctx->pc = 0x246E24u;
            goto label_246e24;
        }
    }
    ctx->pc = 0x246D90u;
label_246d90:
    // 0x246d90: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x246d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_246d94:
    // 0x246d94: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x246d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_246d98:
    // 0x246d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246d9c:
    // 0x246d9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x246d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246da0:
    // 0x246da0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246da4:
    // 0x246da4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x246da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_246da8:
    // 0x246da8: 0x40f809  jalr        $v0
label_246dac:
    if (ctx->pc == 0x246DACu) {
        ctx->pc = 0x246DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DA8u;
        // 0x246dac: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DB0u;
        goto label_246db0;
    }
    ctx->pc = 0x246DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246DB0u);
        ctx->pc = 0x246DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DA8u;
        // 0x246dac: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246DA8u, 0x246DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246DB0u;
label_246db0:
    // 0x246db0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x246db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_246db4:
    // 0x246db4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x246db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_246db8:
    // 0x246db8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246dbc:
    // 0x246dbc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x246dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_246dc0:
    // 0x246dc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246dc4:
    // 0x246dc4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x246dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_246dc8:
    // 0x246dc8: 0x40f809  jalr        $v0
label_246dcc:
    if (ctx->pc == 0x246DCCu) {
        ctx->pc = 0x246DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DC8u;
        // 0x246dcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DD0u;
        goto label_246dd0;
    }
    ctx->pc = 0x246DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246DD0u);
        ctx->pc = 0x246DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DC8u;
        // 0x246dcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246DC8u, 0x246DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246DD0u;
label_246dd0:
    // 0x246dd0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x246dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_246dd4:
    // 0x246dd4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x246dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_246dd8:
    // 0x246dd8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x246dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_246ddc:
    // 0x246ddc: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x246ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_246de0:
    // 0x246de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246de4:
    // 0x246de4: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x246de4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_246de8:
    // 0x246de8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_246dec:
    if (ctx->pc == 0x246DECu) {
        ctx->pc = 0x246DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DE8u;
        // 0x246dec: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DF0u;
        goto label_246df0;
    }
    ctx->pc = 0x246DE8u;
    {
        const bool branch_taken_0x246de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DE8u;
        // 0x246dec: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246de8) {
            ctx->pc = 0x246E20u;
            goto label_246e20;
        }
    }
    ctx->pc = 0x246DF0u;
label_246df0:
    // 0x246df0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_246df4:
    // 0x246df4: 0xc08d47e  jal         func_2351F8
label_246df8:
    if (ctx->pc == 0x246DF8u) {
        ctx->pc = 0x246DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DF4u;
        // 0x246df8: 0x2484cc00  addiu       $a0, $a0, -0x3400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DFCu;
        goto label_246dfc;
    }
    ctx->pc = 0x246DF4u;
    SET_GPR_U32(ctx, 31, 0x246DFCu);
    ctx->pc = 0x246DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246DF4u;
    // 0x246df8: 0x2484cc00  addiu       $a0, $a0, -0x3400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x246DF4u, 0x246DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DFCu;
label_246dfc:
    // 0x246dfc: 0x0  nop
    ctx->pc = 0x246dfcu;
    // NOP
label_246e00:
    // 0x246e00: 0x0  nop
    ctx->pc = 0x246e00u;
    // NOP
label_246e04:
    // 0x246e04: 0x0  nop
    ctx->pc = 0x246e04u;
    // NOP
label_246e08:
    // 0x246e08: 0x0  nop
    ctx->pc = 0x246e08u;
    // NOP
label_246e0c:
    // 0x246e0c: 0x0  nop
    ctx->pc = 0x246e0cu;
    // NOP
label_246e10:
    // 0x246e10: 0x0  nop
    ctx->pc = 0x246e10u;
    // NOP
label_246e14:
    // 0x246e14: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_246e18:
    if (ctx->pc == 0x246E18u) {
        ctx->pc = 0x246E1Cu;
        goto label_246e1c;
    }
    ctx->pc = 0x246E14u;
    {
        const bool branch_taken_0x246e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e14) {
            ctx->pc = 0x246E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246e00;
        }
    }
    ctx->pc = 0x246E1Cu;
label_246e1c:
    // 0x246e1c: 0x0  nop
    ctx->pc = 0x246e1cu;
    // NOP
label_246e20:
    // 0x246e20: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x246e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_246e24:
    // 0x246e24: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_246e28:
    if (ctx->pc == 0x246E28u) {
        ctx->pc = 0x246E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E24u;
        // 0x246e28: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E2Cu;
        goto label_246e2c;
    }
    ctx->pc = 0x246E24u;
    {
        const bool branch_taken_0x246e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E24u;
        // 0x246e28: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e24) {
            ctx->pc = 0x2470A4u;
            goto label_2470a4;
        }
    }
    ctx->pc = 0x246E2Cu;
label_246e2c:
    // 0x246e2c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x246e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_246e30:
    // 0x246e30: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x246e30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_246e34:
    // 0x246e34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x246e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246e38:
    // 0x246e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246e3c:
    // 0x246e3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246e40:
    // 0x246e40: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x246e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_246e44:
    // 0x246e44: 0x40f809  jalr        $v0
label_246e48:
    if (ctx->pc == 0x246E48u) {
        ctx->pc = 0x246E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E44u;
        // 0x246e48: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E4Cu;
        goto label_246e4c;
    }
    ctx->pc = 0x246E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246E4Cu);
        ctx->pc = 0x246E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E44u;
        // 0x246e48: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246E44u, 0x246E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246E4Cu;
label_246e4c:
    // 0x246e4c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x246e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_246e50:
    // 0x246e50: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x246e50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_246e54:
    // 0x246e54: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x246e54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_246e58:
    // 0x246e58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246e5c:
    // 0x246e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246e60:
    // 0x246e60: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x246e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_246e64:
    // 0x246e64: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x246e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_246e68:
    // 0x246e68: 0x40f809  jalr        $v0
label_246e6c:
    if (ctx->pc == 0x246E6Cu) {
        ctx->pc = 0x246E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E68u;
        // 0x246e6c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E70u;
        goto label_246e70;
    }
    ctx->pc = 0x246E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246E70u);
        ctx->pc = 0x246E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E68u;
        // 0x246e6c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246E68u, 0x246E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246E70u;
label_246e70:
    // 0x246e70: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x246e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_246e74:
    // 0x246e74: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x246e74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_246e78:
    // 0x246e78: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_246e7c:
    // 0x246e7c: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x246e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_246e80:
    // 0x246e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x246e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246e84:
    // 0x246e84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x246e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_246e88:
    // 0x246e88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x246e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246e8c:
    // 0x246e8c: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x246e8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_246e90:
    // 0x246e90: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_246e94:
    if (ctx->pc == 0x246E94u) {
        ctx->pc = 0x246E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E90u;
        // 0x246e94: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E98u;
        goto label_246e98;
    }
    ctx->pc = 0x246E90u;
    {
        const bool branch_taken_0x246e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e90) {
            ctx->pc = 0x246E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E90u;
            // 0x246e94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E98u;
            goto label_246e98;
        }
    }
    ctx->pc = 0x246E98u;
label_246e98:
    // 0x246e98: 0x103880b  movn        $s1, $t0, $v1
    ctx->pc = 0x246e98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
label_246e9c:
    // 0x246e9c: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x246e9cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_246ea0:
    // 0x246ea0: 0x1012  mflo        $v0
    ctx->pc = 0x246ea0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_246ea4:
    // 0x246ea4: 0x458818  mult        $s1, $v0, $a1
    ctx->pc = 0x246ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_246ea8:
    // 0x246ea8: 0xc094854  jal         func_252150
label_246eac:
    if (ctx->pc == 0x246EACu) {
        ctx->pc = 0x246EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EA8u;
        // 0x246eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EB0u;
        goto label_246eb0;
    }
    ctx->pc = 0x246EA8u;
    SET_GPR_U32(ctx, 31, 0x246EB0u);
    ctx->pc = 0x246EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246EA8u;
    // 0x246eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x246EA8u, 0x246EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EB0u;
label_246eb0:
    // 0x246eb0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x246eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_246eb4:
    // 0x246eb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x246eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246eb8:
    // 0x246eb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246ebc:
    // 0x246ebc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x246ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_246ec0:
    // 0x246ec0: 0x40f809  jalr        $v0
label_246ec4:
    if (ctx->pc == 0x246EC4u) {
        ctx->pc = 0x246EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EC0u;
        // 0x246ec4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EC8u;
        goto label_246ec8;
    }
    ctx->pc = 0x246EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246EC8u);
        ctx->pc = 0x246EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EC0u;
        // 0x246ec4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246EC0u, 0x246EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246EC8u;
label_246ec8:
    // 0x246ec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246ecc:
    // 0x246ecc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x246eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_246ed0:
    // 0x246ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246ed4:
    // 0x246ed4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x246ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246ed8:
    // 0x246ed8: 0xc094854  jal         func_252150
label_246edc:
    if (ctx->pc == 0x246EDCu) {
        ctx->pc = 0x246EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ED8u;
        // 0x246edc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EE0u;
        goto label_246ee0;
    }
    ctx->pc = 0x246ED8u;
    SET_GPR_U32(ctx, 31, 0x246EE0u);
    ctx->pc = 0x246EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246ED8u;
    // 0x246edc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x246ED8u, 0x246EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246EE0u;
label_246ee0:
    // 0x246ee0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x246ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_246ee4:
    // 0x246ee4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x246ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246ee8:
    // 0x246ee8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246eec:
    // 0x246eec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_246ef0:
    // 0x246ef0: 0x40f809  jalr        $v0
label_246ef4:
    if (ctx->pc == 0x246EF4u) {
        ctx->pc = 0x246EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EF0u;
        // 0x246ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EF8u;
        goto label_246ef8;
    }
    ctx->pc = 0x246EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246EF8u);
        ctx->pc = 0x246EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EF0u;
        // 0x246ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246EF0u, 0x246EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246EF8u;
label_246ef8:
    // 0x246ef8: 0x5a20006a  blezl       $s1, . + 4 + (0x6A << 2)
label_246efc:
    if (ctx->pc == 0x246EFCu) {
        ctx->pc = 0x246EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EF8u;
        // 0x246efc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F00u;
        goto label_246f00;
    }
    ctx->pc = 0x246EF8u;
    {
        const bool branch_taken_0x246ef8 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x246ef8) {
            ctx->pc = 0x246EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246EF8u;
            // 0x246efc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470A4u;
            goto label_2470a4;
        }
    }
    ctx->pc = 0x246F00u;
label_246f00:
    // 0x246f00: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x246f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_246f04:
    // 0x246f04: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x246f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_246f08:
    // 0x246f08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_246f0c:
    if (ctx->pc == 0x246F0Cu) {
        ctx->pc = 0x246F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F08u;
        // 0x246f0c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F10u;
        goto label_246f10;
    }
    ctx->pc = 0x246F08u;
    {
        const bool branch_taken_0x246f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F08u;
        // 0x246f0c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f08) {
            ctx->pc = 0x246F50u;
            goto label_246f50;
        }
    }
    ctx->pc = 0x246F10u;
label_246f10:
    // 0x246f10: 0xc08d47e  jal         func_2351F8
label_246f14:
    if (ctx->pc == 0x246F14u) {
        ctx->pc = 0x246F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F10u;
        // 0x246f14: 0x2484cc20  addiu       $a0, $a0, -0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F18u;
        goto label_246f18;
    }
    ctx->pc = 0x246F10u;
    SET_GPR_U32(ctx, 31, 0x246F18u);
    ctx->pc = 0x246F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F10u;
    // 0x246f14: 0x2484cc20  addiu       $a0, $a0, -0x33E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x246F10u, 0x246F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F18u;
label_246f18:
    // 0x246f18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_246f1c:
    // 0x246f1c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x246f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_246f20:
    // 0x246f20: 0x2484cc48  addiu       $a0, $a0, -0x33B8
    ctx->pc = 0x246f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954056));
label_246f24:
    // 0x246f24: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x246f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_246f28:
    // 0x246f28: 0xc08d47e  jal         func_2351F8
label_246f2c:
    if (ctx->pc == 0x246F2Cu) {
        ctx->pc = 0x246F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F28u;
        // 0x246f2c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F30u;
        goto label_246f30;
    }
    ctx->pc = 0x246F28u;
    SET_GPR_U32(ctx, 31, 0x246F30u);
    ctx->pc = 0x246F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F28u;
    // 0x246f2c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x246F28u, 0x246F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F30u;
label_246f30:
    // 0x246f30: 0x0  nop
    ctx->pc = 0x246f30u;
    // NOP
label_246f34:
    // 0x246f34: 0x0  nop
    ctx->pc = 0x246f34u;
    // NOP
label_246f38:
    // 0x246f38: 0x0  nop
    ctx->pc = 0x246f38u;
    // NOP
label_246f3c:
    // 0x246f3c: 0x0  nop
    ctx->pc = 0x246f3cu;
    // NOP
label_246f40:
    // 0x246f40: 0x0  nop
    ctx->pc = 0x246f40u;
    // NOP
label_246f44:
    // 0x246f44: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_246f48:
    if (ctx->pc == 0x246F48u) {
        ctx->pc = 0x246F4Cu;
        goto label_246f4c;
    }
    ctx->pc = 0x246F44u;
    {
        const bool branch_taken_0x246f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f44) {
            ctx->pc = 0x246F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246f30;
        }
    }
    ctx->pc = 0x246F4Cu;
label_246f4c:
    // 0x246f4c: 0x0  nop
    ctx->pc = 0x246f4cu;
    // NOP
label_246f50:
    // 0x246f50: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x246f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_246f54:
    // 0x246f54: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x246f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_246f58:
    // 0x246f58: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_246f5c:
    if (ctx->pc == 0x246F5Cu) {
        ctx->pc = 0x246F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F58u;
        // 0x246f5c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F60u;
        goto label_246f60;
    }
    ctx->pc = 0x246F58u;
    {
        const bool branch_taken_0x246f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f58) {
            ctx->pc = 0x246F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246F58u;
            // 0x246f5c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FA8u;
            goto label_246fa8;
        }
    }
    ctx->pc = 0x246F60u;
label_246f60:
    // 0x246f60: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_246f64:
    // 0x246f64: 0xc08d47e  jal         func_2351F8
label_246f68:
    if (ctx->pc == 0x246F68u) {
        ctx->pc = 0x246F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F64u;
        // 0x246f68: 0x2484cc78  addiu       $a0, $a0, -0x3388 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F6Cu;
        goto label_246f6c;
    }
    ctx->pc = 0x246F64u;
    SET_GPR_U32(ctx, 31, 0x246F6Cu);
    ctx->pc = 0x246F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F64u;
    // 0x246f68: 0x2484cc78  addiu       $a0, $a0, -0x3388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x246F64u, 0x246F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F6Cu;
label_246f6c:
    // 0x246f6c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_246f70:
    // 0x246f70: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x246f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_246f74:
    // 0x246f74: 0x2484cc48  addiu       $a0, $a0, -0x33B8
    ctx->pc = 0x246f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954056));
label_246f78:
    // 0x246f78: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x246f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_246f7c:
    // 0x246f7c: 0xc08d47e  jal         func_2351F8
label_246f80:
    if (ctx->pc == 0x246F80u) {
        ctx->pc = 0x246F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F7Cu;
        // 0x246f80: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F84u;
        goto label_246f84;
    }
    ctx->pc = 0x246F7Cu;
    SET_GPR_U32(ctx, 31, 0x246F84u);
    ctx->pc = 0x246F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F7Cu;
    // 0x246f80: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x246F7Cu, 0x246F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F84u;
label_246f84:
    // 0x246f84: 0x0  nop
    ctx->pc = 0x246f84u;
    // NOP
label_246f88:
    // 0x246f88: 0x0  nop
    ctx->pc = 0x246f88u;
    // NOP
label_246f8c:
    // 0x246f8c: 0x0  nop
    ctx->pc = 0x246f8cu;
    // NOP
label_246f90:
    // 0x246f90: 0x0  nop
    ctx->pc = 0x246f90u;
    // NOP
label_246f94:
    // 0x246f94: 0x0  nop
    ctx->pc = 0x246f94u;
    // NOP
label_246f98:
    // 0x246f98: 0x0  nop
    ctx->pc = 0x246f98u;
    // NOP
label_246f9c:
    // 0x246f9c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_246fa0:
    if (ctx->pc == 0x246FA0u) {
        ctx->pc = 0x246FA4u;
        goto label_246fa4;
    }
    ctx->pc = 0x246F9Cu;
    {
        const bool branch_taken_0x246f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f9c) {
            ctx->pc = 0x246F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246f88;
        }
    }
    ctx->pc = 0x246FA4u;
label_246fa4:
    // 0x246fa4: 0x0  nop
    ctx->pc = 0x246fa4u;
    // NOP
label_246fa8:
    // 0x246fa8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x246fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_246fac:
    // 0x246fac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_246fb0:
    if (ctx->pc == 0x246FB0u) {
        ctx->pc = 0x246FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FACu;
        // 0x246fb0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FB4u;
        goto label_246fb4;
    }
    ctx->pc = 0x246FACu;
    {
        const bool branch_taken_0x246fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FACu;
        // 0x246fb0: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fac) {
            ctx->pc = 0x246FF8u;
            goto label_246ff8;
        }
    }
    ctx->pc = 0x246FB4u;
label_246fb4:
    // 0x246fb4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_246fb8:
    // 0x246fb8: 0xc08d47e  jal         func_2351F8
label_246fbc:
    if (ctx->pc == 0x246FBCu) {
        ctx->pc = 0x246FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FB8u;
        // 0x246fbc: 0x2484cca0  addiu       $a0, $a0, -0x3360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FC0u;
        goto label_246fc0;
    }
    ctx->pc = 0x246FB8u;
    SET_GPR_U32(ctx, 31, 0x246FC0u);
    ctx->pc = 0x246FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FB8u;
    // 0x246fbc: 0x2484cca0  addiu       $a0, $a0, -0x3360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x246FB8u, 0x246FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FC0u;
label_246fc0:
    // 0x246fc0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_246fc4:
    // 0x246fc4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x246fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_246fc8:
    // 0x246fc8: 0x2484cc48  addiu       $a0, $a0, -0x33B8
    ctx->pc = 0x246fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954056));
label_246fcc:
    // 0x246fcc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x246fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_246fd0:
    // 0x246fd0: 0xc08d47e  jal         func_2351F8
label_246fd4:
    if (ctx->pc == 0x246FD4u) {
        ctx->pc = 0x246FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FD0u;
        // 0x246fd4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FD8u;
        goto label_246fd8;
    }
    ctx->pc = 0x246FD0u;
    SET_GPR_U32(ctx, 31, 0x246FD8u);
    ctx->pc = 0x246FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FD0u;
    // 0x246fd4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x246FD0u, 0x246FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FD8u;
label_246fd8:
    // 0x246fd8: 0x0  nop
    ctx->pc = 0x246fd8u;
    // NOP
label_246fdc:
    // 0x246fdc: 0x0  nop
    ctx->pc = 0x246fdcu;
    // NOP
label_246fe0:
    // 0x246fe0: 0x0  nop
    ctx->pc = 0x246fe0u;
    // NOP
label_246fe4:
    // 0x246fe4: 0x0  nop
    ctx->pc = 0x246fe4u;
    // NOP
label_246fe8:
    // 0x246fe8: 0x0  nop
    ctx->pc = 0x246fe8u;
    // NOP
label_246fec:
    // 0x246fec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_246ff0:
    if (ctx->pc == 0x246FF0u) {
        ctx->pc = 0x246FF4u;
        goto label_246ff4;
    }
    ctx->pc = 0x246FECu;
    {
        const bool branch_taken_0x246fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fec) {
            ctx->pc = 0x246FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246fd8;
        }
    }
    ctx->pc = 0x246FF4u;
label_246ff4:
    // 0x246ff4: 0x0  nop
    ctx->pc = 0x246ff4u;
    // NOP
label_246ff8:
    // 0x246ff8: 0xc043a36  jal         func_10E8D8
label_246ffc:
    if (ctx->pc == 0x246FFCu) {
        ctx->pc = 0x246FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FF8u;
        // 0x246ffc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247000u;
        goto label_247000;
    }
    ctx->pc = 0x246FF8u;
    SET_GPR_U32(ctx, 31, 0x247000u);
    ctx->pc = 0x246FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246FF8u;
    // 0x246ffc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x246FF8u, 0x247000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247000u;
label_247000:
    // 0x247000: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x247000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_247004:
    // 0x247004: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x247004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_247008:
    // 0x247008: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x247008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_24700c:
    // 0x24700c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x24700cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_247010:
    // 0x247010: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x247010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_247014:
    // 0x247014: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x247014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_247018:
    // 0x247018: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x247018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24701c:
    // 0x24701c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x24701cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_247020:
    // 0x247020: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x247020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247024:
    // 0x247024: 0xae470020  sw          $a3, 0x20($s2)
    ctx->pc = 0x247024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
label_247028:
    // 0x247028: 0xae460024  sw          $a2, 0x24($s2)
    ctx->pc = 0x247028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 6));
label_24702c:
    // 0x24702c: 0xc0438e8  jal         func_10E3A0
label_247030:
    if (ctx->pc == 0x247030u) {
        ctx->pc = 0x247030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24702Cu;
        // 0x247030: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247034u;
        goto label_247034;
    }
    ctx->pc = 0x24702Cu;
    SET_GPR_U32(ctx, 31, 0x247034u);
    ctx->pc = 0x247030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24702Cu;
    // 0x247030: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3A0u, 0x24702Cu, 0x247034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247034u;
label_247034:
    // 0x247034: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_247038:
    if (ctx->pc == 0x247038u) {
        ctx->pc = 0x247038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247034u;
        // 0x247038: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24703Cu;
        goto label_24703c;
    }
    ctx->pc = 0x247034u;
    {
        const bool branch_taken_0x247034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247034u;
        // 0x247038: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247034) {
            ctx->pc = 0x247078u;
            goto label_247078;
        }
    }
    ctx->pc = 0x24703Cu;
label_24703c:
    // 0x24703c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x24703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_247040:
    // 0x247040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x247040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247044:
    // 0x247044: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_247048:
    // 0x247048: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x247048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_24704c:
    // 0x24704c: 0x40f809  jalr        $v0
label_247050:
    if (ctx->pc == 0x247050u) {
        ctx->pc = 0x247050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24704Cu;
        // 0x247050: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247054u;
        goto label_247054;
    }
    ctx->pc = 0x24704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247054u);
        ctx->pc = 0x247050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24704Cu;
        // 0x247050: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24704Cu, 0x247054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247054u;
label_247054:
    // 0x247054: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x247054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_247058:
    // 0x247058: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x247058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24705c:
    // 0x24705c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_247060:
    // 0x247060: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x247060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_247064:
    // 0x247064: 0x40f809  jalr        $v0
label_247068:
    if (ctx->pc == 0x247068u) {
        ctx->pc = 0x247068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247064u;
        // 0x247068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24706Cu;
        goto label_24706c;
    }
    ctx->pc = 0x247064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24706Cu);
        ctx->pc = 0x247068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247064u;
        // 0x247068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247064u, 0x24706Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24706Cu;
label_24706c:
    // 0x24706c: 0x1000000d  b           . + 4 + (0xD << 2)
label_247070:
    if (ctx->pc == 0x247070u) {
        ctx->pc = 0x247070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24706Cu;
        // 0x247070: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247074u;
        goto label_247074;
    }
    ctx->pc = 0x24706Cu;
    {
        const bool branch_taken_0x24706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24706Cu;
        // 0x247070: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24706c) {
            ctx->pc = 0x2470A4u;
            goto label_2470a4;
        }
    }
    ctx->pc = 0x247074u;
label_247074:
    // 0x247074: 0x0  nop
    ctx->pc = 0x247074u;
    // NOP
label_247078:
    // 0x247078: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x247078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_24707c:
    // 0x24707c: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x24707cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_247080:
    // 0x247080: 0xb2440013  sdl         $a0, 0x13($s2)
    ctx->pc = 0x247080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_247084:
    // 0x247084: 0xb644000c  sdr         $a0, 0xC($s2)
    ctx->pc = 0x247084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_247088:
    // 0x247088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24708c:
    // 0x24708c: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x24708cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_247090:
    // 0x247090: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x247090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_247094:
    // 0x247094: 0xb244001b  sdl         $a0, 0x1B($s2)
    ctx->pc = 0x247094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_247098:
    // 0x247098: 0xb6440014  sdr         $a0, 0x14($s2)
    ctx->pc = 0x247098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24709c:
    // 0x24709c: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x24709cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_2470a0:
    // 0x2470a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2470a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2470a4:
    // 0x2470a4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2470a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2470a8:
    // 0x2470a8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2470a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2470ac:
    // 0x2470ac: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2470acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2470b0:
    // 0x2470b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2470b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2470b4:
    // 0x2470b4: 0x3e00008  jr          $ra
label_2470b8:
    if (ctx->pc == 0x2470B8u) {
        ctx->pc = 0x2470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B4u;
        // 0x2470b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470BCu;
        goto label_fallthrough_0x2470b4;
    }
    ctx->pc = 0x2470B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B4u;
        // 0x2470b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2470b4:
    ctx->pc = 0x2470BCu;
}
