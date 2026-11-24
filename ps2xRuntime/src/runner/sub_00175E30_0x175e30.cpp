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

// Function: sub_00175E30
// Address: 0x175e30 - 0x17614c
void sub_00175E30_0x175e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175E30_0x175e30");
#endif

    switch (ctx->pc) {
        case 0x175e30u: goto label_175e30;
        case 0x175e34u: goto label_175e34;
        case 0x175e38u: goto label_175e38;
        case 0x175e3cu: goto label_175e3c;
        case 0x175e40u: goto label_175e40;
        case 0x175e44u: goto label_175e44;
        case 0x175e48u: goto label_175e48;
        case 0x175e4cu: goto label_175e4c;
        case 0x175e50u: goto label_175e50;
        case 0x175e54u: goto label_175e54;
        case 0x175e58u: goto label_175e58;
        case 0x175e5cu: goto label_175e5c;
        case 0x175e60u: goto label_175e60;
        case 0x175e64u: goto label_175e64;
        case 0x175e68u: goto label_175e68;
        case 0x175e6cu: goto label_175e6c;
        case 0x175e70u: goto label_175e70;
        case 0x175e74u: goto label_175e74;
        case 0x175e78u: goto label_175e78;
        case 0x175e7cu: goto label_175e7c;
        case 0x175e80u: goto label_175e80;
        case 0x175e84u: goto label_175e84;
        case 0x175e88u: goto label_175e88;
        case 0x175e8cu: goto label_175e8c;
        case 0x175e90u: goto label_175e90;
        case 0x175e94u: goto label_175e94;
        case 0x175e98u: goto label_175e98;
        case 0x175e9cu: goto label_175e9c;
        case 0x175ea0u: goto label_175ea0;
        case 0x175ea4u: goto label_175ea4;
        case 0x175ea8u: goto label_175ea8;
        case 0x175eacu: goto label_175eac;
        case 0x175eb0u: goto label_175eb0;
        case 0x175eb4u: goto label_175eb4;
        case 0x175eb8u: goto label_175eb8;
        case 0x175ebcu: goto label_175ebc;
        case 0x175ec0u: goto label_175ec0;
        case 0x175ec4u: goto label_175ec4;
        case 0x175ec8u: goto label_175ec8;
        case 0x175eccu: goto label_175ecc;
        case 0x175ed0u: goto label_175ed0;
        case 0x175ed4u: goto label_175ed4;
        case 0x175ed8u: goto label_175ed8;
        case 0x175edcu: goto label_175edc;
        case 0x175ee0u: goto label_175ee0;
        case 0x175ee4u: goto label_175ee4;
        case 0x175ee8u: goto label_175ee8;
        case 0x175eecu: goto label_175eec;
        case 0x175ef0u: goto label_175ef0;
        case 0x175ef4u: goto label_175ef4;
        case 0x175ef8u: goto label_175ef8;
        case 0x175efcu: goto label_175efc;
        case 0x175f00u: goto label_175f00;
        case 0x175f04u: goto label_175f04;
        case 0x175f08u: goto label_175f08;
        case 0x175f0cu: goto label_175f0c;
        case 0x175f10u: goto label_175f10;
        case 0x175f14u: goto label_175f14;
        case 0x175f18u: goto label_175f18;
        case 0x175f1cu: goto label_175f1c;
        case 0x175f20u: goto label_175f20;
        case 0x175f24u: goto label_175f24;
        case 0x175f28u: goto label_175f28;
        case 0x175f2cu: goto label_175f2c;
        case 0x175f30u: goto label_175f30;
        case 0x175f34u: goto label_175f34;
        case 0x175f38u: goto label_175f38;
        case 0x175f3cu: goto label_175f3c;
        case 0x175f40u: goto label_175f40;
        case 0x175f44u: goto label_175f44;
        case 0x175f48u: goto label_175f48;
        case 0x175f4cu: goto label_175f4c;
        case 0x175f50u: goto label_175f50;
        case 0x175f54u: goto label_175f54;
        case 0x175f58u: goto label_175f58;
        case 0x175f5cu: goto label_175f5c;
        case 0x175f60u: goto label_175f60;
        case 0x175f64u: goto label_175f64;
        case 0x175f68u: goto label_175f68;
        case 0x175f6cu: goto label_175f6c;
        case 0x175f70u: goto label_175f70;
        case 0x175f74u: goto label_175f74;
        case 0x175f78u: goto label_175f78;
        case 0x175f7cu: goto label_175f7c;
        case 0x175f80u: goto label_175f80;
        case 0x175f84u: goto label_175f84;
        case 0x175f88u: goto label_175f88;
        case 0x175f8cu: goto label_175f8c;
        case 0x175f90u: goto label_175f90;
        case 0x175f94u: goto label_175f94;
        case 0x175f98u: goto label_175f98;
        case 0x175f9cu: goto label_175f9c;
        case 0x175fa0u: goto label_175fa0;
        case 0x175fa4u: goto label_175fa4;
        case 0x175fa8u: goto label_175fa8;
        case 0x175facu: goto label_175fac;
        case 0x175fb0u: goto label_175fb0;
        case 0x175fb4u: goto label_175fb4;
        case 0x175fb8u: goto label_175fb8;
        case 0x175fbcu: goto label_175fbc;
        case 0x175fc0u: goto label_175fc0;
        case 0x175fc4u: goto label_175fc4;
        case 0x175fc8u: goto label_175fc8;
        case 0x175fccu: goto label_175fcc;
        case 0x175fd0u: goto label_175fd0;
        case 0x175fd4u: goto label_175fd4;
        case 0x175fd8u: goto label_175fd8;
        case 0x175fdcu: goto label_175fdc;
        case 0x175fe0u: goto label_175fe0;
        case 0x175fe4u: goto label_175fe4;
        case 0x175fe8u: goto label_175fe8;
        case 0x175fecu: goto label_175fec;
        case 0x175ff0u: goto label_175ff0;
        case 0x175ff4u: goto label_175ff4;
        case 0x175ff8u: goto label_175ff8;
        case 0x175ffcu: goto label_175ffc;
        case 0x176000u: goto label_176000;
        case 0x176004u: goto label_176004;
        case 0x176008u: goto label_176008;
        case 0x17600cu: goto label_17600c;
        case 0x176010u: goto label_176010;
        case 0x176014u: goto label_176014;
        case 0x176018u: goto label_176018;
        case 0x17601cu: goto label_17601c;
        case 0x176020u: goto label_176020;
        case 0x176024u: goto label_176024;
        case 0x176028u: goto label_176028;
        case 0x17602cu: goto label_17602c;
        case 0x176030u: goto label_176030;
        case 0x176034u: goto label_176034;
        case 0x176038u: goto label_176038;
        case 0x17603cu: goto label_17603c;
        case 0x176040u: goto label_176040;
        case 0x176044u: goto label_176044;
        case 0x176048u: goto label_176048;
        case 0x17604cu: goto label_17604c;
        case 0x176050u: goto label_176050;
        case 0x176054u: goto label_176054;
        case 0x176058u: goto label_176058;
        case 0x17605cu: goto label_17605c;
        case 0x176060u: goto label_176060;
        case 0x176064u: goto label_176064;
        case 0x176068u: goto label_176068;
        case 0x17606cu: goto label_17606c;
        case 0x176070u: goto label_176070;
        case 0x176074u: goto label_176074;
        case 0x176078u: goto label_176078;
        case 0x17607cu: goto label_17607c;
        case 0x176080u: goto label_176080;
        case 0x176084u: goto label_176084;
        case 0x176088u: goto label_176088;
        case 0x17608cu: goto label_17608c;
        case 0x176090u: goto label_176090;
        case 0x176094u: goto label_176094;
        case 0x176098u: goto label_176098;
        case 0x17609cu: goto label_17609c;
        case 0x1760a0u: goto label_1760a0;
        case 0x1760a4u: goto label_1760a4;
        case 0x1760a8u: goto label_1760a8;
        case 0x1760acu: goto label_1760ac;
        case 0x1760b0u: goto label_1760b0;
        case 0x1760b4u: goto label_1760b4;
        case 0x1760b8u: goto label_1760b8;
        case 0x1760bcu: goto label_1760bc;
        case 0x1760c0u: goto label_1760c0;
        case 0x1760c4u: goto label_1760c4;
        case 0x1760c8u: goto label_1760c8;
        case 0x1760ccu: goto label_1760cc;
        case 0x1760d0u: goto label_1760d0;
        case 0x1760d4u: goto label_1760d4;
        case 0x1760d8u: goto label_1760d8;
        case 0x1760dcu: goto label_1760dc;
        case 0x1760e0u: goto label_1760e0;
        case 0x1760e4u: goto label_1760e4;
        case 0x1760e8u: goto label_1760e8;
        case 0x1760ecu: goto label_1760ec;
        case 0x1760f0u: goto label_1760f0;
        case 0x1760f4u: goto label_1760f4;
        case 0x1760f8u: goto label_1760f8;
        case 0x1760fcu: goto label_1760fc;
        case 0x176100u: goto label_176100;
        case 0x176104u: goto label_176104;
        case 0x176108u: goto label_176108;
        case 0x17610cu: goto label_17610c;
        case 0x176110u: goto label_176110;
        case 0x176114u: goto label_176114;
        case 0x176118u: goto label_176118;
        case 0x17611cu: goto label_17611c;
        case 0x176120u: goto label_176120;
        case 0x176124u: goto label_176124;
        case 0x176128u: goto label_176128;
        case 0x17612cu: goto label_17612c;
        case 0x176130u: goto label_176130;
        case 0x176134u: goto label_176134;
        case 0x176138u: goto label_176138;
        case 0x17613cu: goto label_17613c;
        case 0x176140u: goto label_176140;
        case 0x176144u: goto label_176144;
        case 0x176148u: goto label_176148;
        default: break;
    }

    ctx->pc = 0x175e30u;

label_175e30:
    // 0x175e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_175e34:
    // 0x175e34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x175e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_175e38:
    // 0x175e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x175e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_175e3c:
    // 0x175e3c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x175e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_175e40:
    // 0x175e40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_175e44:
    // 0x175e44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_175e48:
    // 0x175e48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x175e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175e4c:
    // 0x175e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_175e50:
    // 0x175e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_175e54:
    // 0x175e54: 0x8c920260  lw          $s2, 0x260($a0)
    ctx->pc = 0x175e54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
label_175e58:
    // 0x175e58: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_175e5c:
    // 0x175e5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x175e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_175e60:
    // 0x175e60: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x175e60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_175e64:
    // 0x175e64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_175e68:
    if (ctx->pc == 0x175E68u) {
        ctx->pc = 0x175E6Cu;
        goto label_175e6c;
    }
    ctx->pc = 0x175E64u;
    {
        const bool branch_taken_0x175e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175e64) {
            ctx->pc = 0x175E78u;
            goto label_175e78;
        }
    }
    ctx->pc = 0x175E6Cu;
label_175e6c:
    // 0x175e6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_175e70:
    if (ctx->pc == 0x175E70u) {
        ctx->pc = 0x175E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E6Cu;
        // 0x175e70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175E74u;
        goto label_175e74;
    }
    ctx->pc = 0x175E6Cu;
    {
        const bool branch_taken_0x175e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E6Cu;
        // 0x175e70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e6c) {
            ctx->pc = 0x175E78u;
            goto label_175e78;
        }
    }
    ctx->pc = 0x175E74u;
label_175e74:
    // 0x175e74: 0x0  nop
    ctx->pc = 0x175e74u;
    // NOP
label_175e78:
    // 0x175e78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175e7c:
    // 0x175e7c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_175e80:
    if (ctx->pc == 0x175E80u) {
        ctx->pc = 0x175E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E7Cu;
        // 0x175e80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175E84u;
        goto label_175e84;
    }
    ctx->pc = 0x175E7Cu;
    {
        const bool branch_taken_0x175e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E7Cu;
        // 0x175e80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e7c) {
            ctx->pc = 0x176110u;
            goto label_176110;
        }
    }
    ctx->pc = 0x175E84u;
label_175e84:
    // 0x175e84: 0x0  nop
    ctx->pc = 0x175e84u;
    // NOP
label_175e88:
    // 0x175e88: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x175e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_175e8c:
    // 0x175e8c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x175e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_175e90:
    // 0x175e90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_175e94:
    if (ctx->pc == 0x175E94u) {
        ctx->pc = 0x175E98u;
        goto label_175e98;
    }
    ctx->pc = 0x175E90u;
    {
        const bool branch_taken_0x175e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175e90) {
            ctx->pc = 0x175EA0u;
            goto label_175ea0;
        }
    }
    ctx->pc = 0x175E98u;
label_175e98:
    // 0x175e98: 0x1000009d  b           . + 4 + (0x9D << 2)
label_175e9c:
    if (ctx->pc == 0x175E9Cu) {
        ctx->pc = 0x175E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E98u;
        // 0x175e9c: 0x8e52000c  lw          $s2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175EA0u;
        goto label_175ea0;
    }
    ctx->pc = 0x175E98u;
    {
        const bool branch_taken_0x175e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E98u;
        // 0x175e9c: 0x8e52000c  lw          $s2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e98) {
            ctx->pc = 0x176110u;
            goto label_176110;
        }
    }
    ctx->pc = 0x175EA0u;
label_175ea0:
    // 0x175ea0: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x175ea0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175ea4:
    // 0x175ea4: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x175ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
label_175ea8:
    // 0x175ea8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_175eac:
    if (ctx->pc == 0x175EACu) {
        ctx->pc = 0x175EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EA8u;
        // 0x175eac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175EB0u;
        goto label_175eb0;
    }
    ctx->pc = 0x175EA8u;
    {
        const bool branch_taken_0x175ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EA8u;
        // 0x175eac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ea8) {
            ctx->pc = 0x175EC0u;
            goto label_175ec0;
        }
    }
    ctx->pc = 0x175EB0u;
label_175eb0:
    // 0x175eb0: 0xc05db4c  jal         func_176D30
label_175eb4:
    if (ctx->pc == 0x175EB4u) {
        ctx->pc = 0x175EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EB0u;
        // 0x175eb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175EB8u;
        goto label_175eb8;
    }
    ctx->pc = 0x175EB0u;
    SET_GPR_U32(ctx, 31, 0x175EB8u);
    ctx->pc = 0x175EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175EB0u;
    // 0x175eb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x175EB0u, 0x175EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175EB8u;
label_175eb8:
    // 0x175eb8: 0x10000095  b           . + 4 + (0x95 << 2)
label_175ebc:
    if (ctx->pc == 0x175EBCu) {
        ctx->pc = 0x175EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EB8u;
        // 0x175ebc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175EC0u;
        goto label_175ec0;
    }
    ctx->pc = 0x175EB8u;
    {
        const bool branch_taken_0x175eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EB8u;
        // 0x175ebc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175eb8) {
            ctx->pc = 0x176110u;
            goto label_176110;
        }
    }
    ctx->pc = 0x175EC0u;
label_175ec0:
    // 0x175ec0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_175ec4:
    if (ctx->pc == 0x175EC4u) {
        ctx->pc = 0x175EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EC0u;
        // 0x175ec4: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175EC8u;
        goto label_175ec8;
    }
    ctx->pc = 0x175EC0u;
    {
        const bool branch_taken_0x175ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EC0u;
        // 0x175ec4: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ec0) {
            ctx->pc = 0x175EF8u;
            goto label_175ef8;
        }
    }
    ctx->pc = 0x175EC8u;
label_175ec8:
    // 0x175ec8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_175ecc:
    if (ctx->pc == 0x175ECCu) {
        ctx->pc = 0x175ED0u;
        goto label_175ed0;
    }
    ctx->pc = 0x175EC8u;
    {
        const bool branch_taken_0x175ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ec8) {
            ctx->pc = 0x175EF8u;
            goto label_175ef8;
        }
    }
    ctx->pc = 0x175ED0u;
label_175ed0:
    // 0x175ed0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_175ed4:
    if (ctx->pc == 0x175ED4u) {
        ctx->pc = 0x175ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ED0u;
        // 0x175ed4: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175ED8u;
        goto label_175ed8;
    }
    ctx->pc = 0x175ED0u;
    {
        const bool branch_taken_0x175ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x175ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ED0u;
        // 0x175ed4: 0x30830800  andi        $v1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ed0) {
            ctx->pc = 0x175EE0u;
            goto label_175ee0;
        }
    }
    ctx->pc = 0x175ED8u;
label_175ed8:
    // 0x175ed8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_175edc:
    if (ctx->pc == 0x175EDCu) {
        ctx->pc = 0x175EE0u;
        goto label_175ee0;
    }
    ctx->pc = 0x175ED8u;
    {
        const bool branch_taken_0x175ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ed8) {
            ctx->pc = 0x175EF8u;
            goto label_175ef8;
        }
    }
    ctx->pc = 0x175EE0u;
label_175ee0:
    // 0x175ee0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x175ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_175ee4:
    // 0x175ee4: 0x8e63021c  lw          $v1, 0x21C($s3)
    ctx->pc = 0x175ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 540)));
label_175ee8:
    // 0x175ee8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x175ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_175eec:
    // 0x175eec: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_175ef0:
    if (ctx->pc == 0x175EF0u) {
        ctx->pc = 0x175EF4u;
        goto label_175ef4;
    }
    ctx->pc = 0x175EECu;
    {
        const bool branch_taken_0x175eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175eec) {
            ctx->pc = 0x1760C0u;
            goto label_1760c0;
        }
    }
    ctx->pc = 0x175EF4u;
label_175ef4:
    // 0x175ef4: 0x0  nop
    ctx->pc = 0x175ef4u;
    // NOP
label_175ef8:
    // 0x175ef8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x175ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_175efc:
    // 0x175efc: 0x40f809  jalr        $v0
label_175f00:
    if (ctx->pc == 0x175F00u) {
        ctx->pc = 0x175F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EFCu;
        // 0x175f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F04u;
        goto label_175f04;
    }
    ctx->pc = 0x175EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175F04u);
        ctx->pc = 0x175F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EFCu;
        // 0x175f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175EFCu, 0x175F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175F04u;
label_175f04:
    // 0x175f04: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x175f04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175f08:
    // 0x175f08: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x175f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_175f0c:
    // 0x175f0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_175f10:
    if (ctx->pc == 0x175F10u) {
        ctx->pc = 0x175F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F0Cu;
        // 0x175f10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F14u;
        goto label_175f14;
    }
    ctx->pc = 0x175F0Cu;
    {
        const bool branch_taken_0x175f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F0Cu;
        // 0x175f10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f0c) {
            ctx->pc = 0x175F28u;
            goto label_175f28;
        }
    }
    ctx->pc = 0x175F14u;
label_175f14:
    // 0x175f14: 0xc05db4c  jal         func_176D30
label_175f18:
    if (ctx->pc == 0x175F18u) {
        ctx->pc = 0x175F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F14u;
        // 0x175f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F1Cu;
        goto label_175f1c;
    }
    ctx->pc = 0x175F14u;
    SET_GPR_U32(ctx, 31, 0x175F1Cu);
    ctx->pc = 0x175F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F14u;
    // 0x175f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x175F14u, 0x175F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F1Cu;
label_175f1c:
    // 0x175f1c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_175f20:
    if (ctx->pc == 0x175F20u) {
        ctx->pc = 0x175F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F1Cu;
        // 0x175f20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F24u;
        goto label_175f24;
    }
    ctx->pc = 0x175F1Cu;
    {
        const bool branch_taken_0x175f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F1Cu;
        // 0x175f20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f1c) {
            ctx->pc = 0x176110u;
            goto label_176110;
        }
    }
    ctx->pc = 0x175F24u;
label_175f24:
    // 0x175f24: 0x0  nop
    ctx->pc = 0x175f24u;
    // NOP
label_175f28:
    // 0x175f28: 0x30830006  andi        $v1, $a0, 0x6
    ctx->pc = 0x175f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
label_175f2c:
    // 0x175f2c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_175f30:
    if (ctx->pc == 0x175F30u) {
        ctx->pc = 0x175F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F2Cu;
        // 0x175f30: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F34u;
        goto label_175f34;
    }
    ctx->pc = 0x175F2Cu;
    {
        const bool branch_taken_0x175f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F2Cu;
        // 0x175f30: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f2c) {
            ctx->pc = 0x175FD8u;
            goto label_175fd8;
        }
    }
    ctx->pc = 0x175F34u;
label_175f34:
    // 0x175f34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_175f38:
    if (ctx->pc == 0x175F38u) {
        ctx->pc = 0x175F3Cu;
        goto label_175f3c;
    }
    ctx->pc = 0x175F34u;
    {
        const bool branch_taken_0x175f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f34) {
            ctx->pc = 0x175F48u;
            goto label_175f48;
        }
    }
    ctx->pc = 0x175F3Cu;
label_175f3c:
    // 0x175f3c: 0x3083fffb  andi        $v1, $a0, 0xFFFB
    ctx->pc = 0x175f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65531);
label_175f40:
    // 0x175f40: 0x10000025  b           . + 4 + (0x25 << 2)
label_175f44:
    if (ctx->pc == 0x175F44u) {
        ctx->pc = 0x175F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F40u;
        // 0x175f44: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F48u;
        goto label_175f48;
    }
    ctx->pc = 0x175F40u;
    {
        const bool branch_taken_0x175f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F40u;
        // 0x175f44: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f40) {
            ctx->pc = 0x175FD8u;
            goto label_175fd8;
        }
    }
    ctx->pc = 0x175F48u;
label_175f48:
    // 0x175f48: 0x9243002f  lbu         $v1, 0x2F($s2)
    ctx->pc = 0x175f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
label_175f4c:
    // 0x175f4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x175f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_175f50:
    // 0x175f50: 0xa243002f  sb          $v1, 0x2F($s2)
    ctx->pc = 0x175f50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
label_175f54:
    // 0x175f54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x175f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_175f58:
    // 0x175f58: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_175f5c:
    if (ctx->pc == 0x175F5Cu) {
        ctx->pc = 0x175F60u;
        goto label_175f60;
    }
    ctx->pc = 0x175F58u;
    {
        const bool branch_taken_0x175f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175f58) {
            ctx->pc = 0x175FB8u;
            goto label_175fb8;
        }
    }
    ctx->pc = 0x175F60u;
label_175f60:
    // 0x175f60: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x175f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_175f64:
    // 0x175f64: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x175f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_175f68:
    // 0x175f68: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x175f68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_175f6c:
    // 0x175f6c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x175f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_175f70:
    // 0x175f70: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x175f70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_175f74:
    // 0x175f74: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_175f78:
    if (ctx->pc == 0x175F78u) {
        ctx->pc = 0x175F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F74u;
        // 0x175f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F7Cu;
        goto label_175f7c;
    }
    ctx->pc = 0x175F74u;
    {
        const bool branch_taken_0x175f74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F74u;
        // 0x175f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f74) {
            ctx->pc = 0x175F88u;
            goto label_175f88;
        }
    }
    ctx->pc = 0x175F7Cu;
label_175f7c:
    // 0x175f7c: 0x10000010  b           . + 4 + (0x10 << 2)
label_175f80:
    if (ctx->pc == 0x175F80u) {
        ctx->pc = 0x175F84u;
        goto label_175f84;
    }
    ctx->pc = 0x175F7Cu;
    {
        const bool branch_taken_0x175f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f7c) {
            ctx->pc = 0x175FC0u;
            goto label_175fc0;
        }
    }
    ctx->pc = 0x175F84u;
label_175f84:
    // 0x175f84: 0x0  nop
    ctx->pc = 0x175f84u;
    // NOP
label_175f88:
    // 0x175f88: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x175f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_175f8c:
    // 0x175f8c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x175f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_175f90:
    // 0x175f90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_175f94:
    if (ctx->pc == 0x175F94u) {
        ctx->pc = 0x175F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F90u;
        // 0x175f94: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F98u;
        goto label_175f98;
    }
    ctx->pc = 0x175F90u;
    {
        const bool branch_taken_0x175f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F90u;
        // 0x175f94: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f90) {
            ctx->pc = 0x175FB0u;
            goto label_175fb0;
        }
    }
    ctx->pc = 0x175F98u;
label_175f98:
    // 0x175f98: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x175f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_175f9c:
    // 0x175f9c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x175f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_175fa0:
    // 0x175fa0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x175fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_175fa4:
    // 0x175fa4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x175fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_175fa8:
    // 0x175fa8: 0x10000003  b           . + 4 + (0x3 << 2)
label_175fac:
    if (ctx->pc == 0x175FACu) {
        ctx->pc = 0x175FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FA8u;
        // 0x175fac: 0xa243002f  sb          $v1, 0x2F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FB0u;
        goto label_175fb0;
    }
    ctx->pc = 0x175FA8u;
    {
        const bool branch_taken_0x175fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FA8u;
        // 0x175fac: 0xa243002f  sb          $v1, 0x2F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fa8) {
            ctx->pc = 0x175FB8u;
            goto label_175fb8;
        }
    }
    ctx->pc = 0x175FB0u;
label_175fb0:
    // 0x175fb0: 0xa244002f  sb          $a0, 0x2F($s2)
    ctx->pc = 0x175fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 4));
label_175fb4:
    // 0x175fb4: 0x0  nop
    ctx->pc = 0x175fb4u;
    // NOP
label_175fb8:
    // 0x175fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175fbc:
    // 0x175fbc: 0x0  nop
    ctx->pc = 0x175fbcu;
    // NOP
label_175fc0:
    // 0x175fc0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_175fc4:
    if (ctx->pc == 0x175FC4u) {
        ctx->pc = 0x175FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FC0u;
        // 0x175fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FC8u;
        goto label_175fc8;
    }
    ctx->pc = 0x175FC0u;
    {
        const bool branch_taken_0x175fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FC0u;
        // 0x175fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fc0) {
            ctx->pc = 0x175FD8u;
            goto label_175fd8;
        }
    }
    ctx->pc = 0x175FC8u;
label_175fc8:
    // 0x175fc8: 0xc05db4c  jal         func_176D30
label_175fcc:
    if (ctx->pc == 0x175FCCu) {
        ctx->pc = 0x175FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FC8u;
        // 0x175fcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FD0u;
        goto label_175fd0;
    }
    ctx->pc = 0x175FC8u;
    SET_GPR_U32(ctx, 31, 0x175FD0u);
    ctx->pc = 0x175FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FC8u;
    // 0x175fcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x175FC8u, 0x175FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FD0u;
label_175fd0:
    // 0x175fd0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_175fd4:
    if (ctx->pc == 0x175FD4u) {
        ctx->pc = 0x175FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD0u;
        // 0x175fd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FD8u;
        goto label_175fd8;
    }
    ctx->pc = 0x175FD0u;
    {
        const bool branch_taken_0x175fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD0u;
        // 0x175fd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fd0) {
            ctx->pc = 0x176110u;
            goto label_176110;
        }
    }
    ctx->pc = 0x175FD8u;
label_175fd8:
    // 0x175fd8: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x175fd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_175fdc:
    // 0x175fdc: 0x30830018  andi        $v1, $a0, 0x18
    ctx->pc = 0x175fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24);
label_175fe0:
    // 0x175fe0: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_175fe4:
    if (ctx->pc == 0x175FE4u) {
        ctx->pc = 0x175FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FE0u;
        // 0x175fe4: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FE8u;
        goto label_175fe8;
    }
    ctx->pc = 0x175FE0u;
    {
        const bool branch_taken_0x175fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FE0u;
        // 0x175fe4: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fe0) {
            ctx->pc = 0x1760C0u;
            goto label_1760c0;
        }
    }
    ctx->pc = 0x175FE8u;
label_175fe8:
    // 0x175fe8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_175fec:
    if (ctx->pc == 0x175FECu) {
        ctx->pc = 0x175FF0u;
        goto label_175ff0;
    }
    ctx->pc = 0x175FE8u;
    {
        const bool branch_taken_0x175fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fe8) {
            ctx->pc = 0x176068u;
            goto label_176068;
        }
    }
    ctx->pc = 0x175FF0u;
label_175ff0:
    // 0x175ff0: 0x3083ffef  andi        $v1, $a0, 0xFFEF
    ctx->pc = 0x175ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65519);
label_175ff4:
    // 0x175ff4: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x175ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
label_175ff8:
    // 0x175ff8: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x175ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_175ffc:
    // 0x175ffc: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x175ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_176000:
    // 0x176000: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x176000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176004:
    // 0x176004: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x176004u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_176008:
    // 0x176008: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x176008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_17600c:
    // 0x17600c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_176010:
    // 0x176010: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x176010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_176014:
    // 0x176014: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_176018:
    if (ctx->pc == 0x176018u) {
        ctx->pc = 0x17601Cu;
        goto label_17601c;
    }
    ctx->pc = 0x176014u;
    {
        const bool branch_taken_0x176014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176014) {
            ctx->pc = 0x176058u;
            goto label_176058;
        }
    }
    ctx->pc = 0x17601Cu;
label_17601c:
    // 0x17601c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x17601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_176020:
    // 0x176020: 0x26630240  addiu       $v1, $s3, 0x240
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_176024:
    // 0x176024: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x176024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_176028:
    // 0x176028: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x176028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17602c:
    // 0x17602c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x17602cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176030:
    // 0x176030: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x176030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_176034:
    // 0x176034: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x176034u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_176038:
    // 0x176038: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x176038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_17603c:
    // 0x17603c: 0x26630250  addiu       $v1, $s3, 0x250
    ctx->pc = 0x17603cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 592));
label_176040:
    // 0x176040: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x176040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_176044:
    // 0x176044: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x176044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_176048:
    // 0x176048: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x176048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17604c:
    // 0x17604c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17604cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_176050:
    // 0x176050: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x176050u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_176054:
    // 0x176054: 0x0  nop
    ctx->pc = 0x176054u;
    // NOP
label_176058:
    // 0x176058: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x176058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_17605c:
    // 0x17605c: 0x10000016  b           . + 4 + (0x16 << 2)
label_176060:
    if (ctx->pc == 0x176060u) {
        ctx->pc = 0x176060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17605Cu;
        // 0x176060: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176064u;
        goto label_176064;
    }
    ctx->pc = 0x17605Cu;
    {
        const bool branch_taken_0x17605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17605Cu;
        // 0x176060: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17605c) {
            ctx->pc = 0x1760B8u;
            goto label_1760b8;
        }
    }
    ctx->pc = 0x176064u;
label_176064:
    // 0x176064: 0x0  nop
    ctx->pc = 0x176064u;
    // NOP
label_176068:
    // 0x176068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x176068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17606c:
    // 0x17606c: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x17606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_176070:
    // 0x176070: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x176070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_176074:
    // 0x176074: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x176074u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176078:
    // 0x176078: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x176078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_17607c:
    // 0x17607c: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x17607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_176080:
    // 0x176080: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x176080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_176084:
    // 0x176084: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x176084u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
label_176088:
    // 0x176088: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x176088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17608c:
    // 0x17608c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x17608cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176090:
    // 0x176090: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x176090u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_176094:
    // 0x176094: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x176094u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_176098:
    // 0x176098: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x176098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_17609c:
    // 0x17609c: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x17609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_1760a0:
    // 0x1760a0: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x1760a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1760a4:
    // 0x1760a4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1760a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1760a8:
    // 0x1760a8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1760a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1760ac:
    // 0x1760ac: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1760acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1760b0:
    // 0x1760b0: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1760b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_1760b4:
    // 0x1760b4: 0x0  nop
    ctx->pc = 0x1760b4u;
    // NOP
label_1760b8:
    // 0x1760b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1760b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1760bc:
    // 0x1760bc: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x1760bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
label_1760c0:
    // 0x1760c0: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x1760c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_1760c4:
    // 0x1760c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1760c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1760c8:
    // 0x1760c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1760cc:
    if (ctx->pc == 0x1760CCu) {
        ctx->pc = 0x1760D0u;
        goto label_1760d0;
    }
    ctx->pc = 0x1760C8u;
    {
        const bool branch_taken_0x1760c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1760c8) {
            ctx->pc = 0x1760F8u;
            goto label_1760f8;
        }
    }
    ctx->pc = 0x1760D0u;
label_1760d0:
    // 0x1760d0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1760d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1760d4:
    // 0x1760d4: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x1760d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_1760d8:
    // 0x1760d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1760d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1760dc:
    // 0x1760dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1760e0:
    if (ctx->pc == 0x1760E0u) {
        ctx->pc = 0x1760E4u;
        goto label_1760e4;
    }
    ctx->pc = 0x1760DCu;
    {
        const bool branch_taken_0x1760dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1760dc) {
            ctx->pc = 0x1760F8u;
            goto label_1760f8;
        }
    }
    ctx->pc = 0x1760E4u;
label_1760e4:
    // 0x1760e4: 0x9243004f  lbu         $v1, 0x4F($s2)
    ctx->pc = 0x1760e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 79)));
label_1760e8:
    // 0x1760e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1760e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1760ec:
    // 0x1760ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_1760f0:
    if (ctx->pc == 0x1760F0u) {
        ctx->pc = 0x1760F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760ECu;
        // 0x1760f0: 0xa243004f  sb          $v1, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1760F4u;
        goto label_1760f4;
    }
    ctx->pc = 0x1760ECu;
    {
        const bool branch_taken_0x1760ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760ECu;
        // 0x1760f0: 0xa243004f  sb          $v1, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760ec) {
            ctx->pc = 0x176108u;
            goto label_176108;
        }
    }
    ctx->pc = 0x1760F4u;
label_1760f4:
    // 0x1760f4: 0x0  nop
    ctx->pc = 0x1760f4u;
    // NOP
label_1760f8:
    // 0x1760f8: 0x9243004f  lbu         $v1, 0x4F($s2)
    ctx->pc = 0x1760f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 79)));
label_1760fc:
    // 0x1760fc: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x1760fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_176100:
    // 0x176100: 0xa243004f  sb          $v1, 0x4F($s2)
    ctx->pc = 0x176100u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
label_176104:
    // 0x176104: 0x0  nop
    ctx->pc = 0x176104u;
    // NOP
label_176108:
    // 0x176108: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_17610c:
    // 0x17610c: 0x0  nop
    ctx->pc = 0x17610cu;
    // NOP
label_176110:
    // 0x176110: 0x1640ff5d  bnez        $s2, . + 4 + (-0xA3 << 2)
label_176114:
    if (ctx->pc == 0x176114u) {
        ctx->pc = 0x176118u;
        goto label_176118;
    }
    ctx->pc = 0x176110u;
    {
        const bool branch_taken_0x176110 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x176110) {
            ctx->pc = 0x175E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175e88;
        }
    }
    ctx->pc = 0x176118u;
label_176118:
    // 0x176118: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_17611c:
    if (ctx->pc == 0x17611Cu) {
        ctx->pc = 0x176120u;
        goto label_176120;
    }
    ctx->pc = 0x176118u;
    {
        const bool branch_taken_0x176118 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x176118) {
            ctx->pc = 0x176130u;
            goto label_176130;
        }
    }
    ctx->pc = 0x176120u;
label_176120:
    // 0x176120: 0x8e630234  lw          $v1, 0x234($s3)
    ctx->pc = 0x176120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
label_176124:
    // 0x176124: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_176128:
    // 0x176128: 0xae630234  sw          $v1, 0x234($s3)
    ctx->pc = 0x176128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 564), GPR_U32(ctx, 3));
label_17612c:
    // 0x17612c: 0x0  nop
    ctx->pc = 0x17612cu;
    // NOP
label_176130:
    // 0x176130: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x176130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_176134:
    // 0x176134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_176138:
    // 0x176138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17613c:
    // 0x17613c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17613cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_176140:
    // 0x176140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_176144:
    // 0x176144: 0x3e00008  jr          $ra
label_176148:
    if (ctx->pc == 0x176148u) {
        ctx->pc = 0x176148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176144u;
        // 0x176148: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17614Cu;
        goto label_fallthrough_0x176144;
    }
    ctx->pc = 0x176144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176144u;
        // 0x176148: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176144:
    ctx->pc = 0x17614Cu;
}
