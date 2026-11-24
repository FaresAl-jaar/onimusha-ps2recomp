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

// Function: sub_003A0E80
// Address: 0x3a0e80 - 0x3a10ac
void sub_003A0E80_0x3a0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0E80_0x3a0e80");
#endif

    switch (ctx->pc) {
        case 0x3a0e80u: goto label_3a0e80;
        case 0x3a0e84u: goto label_3a0e84;
        case 0x3a0e88u: goto label_3a0e88;
        case 0x3a0e8cu: goto label_3a0e8c;
        case 0x3a0e90u: goto label_3a0e90;
        case 0x3a0e94u: goto label_3a0e94;
        case 0x3a0e98u: goto label_3a0e98;
        case 0x3a0e9cu: goto label_3a0e9c;
        case 0x3a0ea0u: goto label_3a0ea0;
        case 0x3a0ea4u: goto label_3a0ea4;
        case 0x3a0ea8u: goto label_3a0ea8;
        case 0x3a0eacu: goto label_3a0eac;
        case 0x3a0eb0u: goto label_3a0eb0;
        case 0x3a0eb4u: goto label_3a0eb4;
        case 0x3a0eb8u: goto label_3a0eb8;
        case 0x3a0ebcu: goto label_3a0ebc;
        case 0x3a0ec0u: goto label_3a0ec0;
        case 0x3a0ec4u: goto label_3a0ec4;
        case 0x3a0ec8u: goto label_3a0ec8;
        case 0x3a0eccu: goto label_3a0ecc;
        case 0x3a0ed0u: goto label_3a0ed0;
        case 0x3a0ed4u: goto label_3a0ed4;
        case 0x3a0ed8u: goto label_3a0ed8;
        case 0x3a0edcu: goto label_3a0edc;
        case 0x3a0ee0u: goto label_3a0ee0;
        case 0x3a0ee4u: goto label_3a0ee4;
        case 0x3a0ee8u: goto label_3a0ee8;
        case 0x3a0eecu: goto label_3a0eec;
        case 0x3a0ef0u: goto label_3a0ef0;
        case 0x3a0ef4u: goto label_3a0ef4;
        case 0x3a0ef8u: goto label_3a0ef8;
        case 0x3a0efcu: goto label_3a0efc;
        case 0x3a0f00u: goto label_3a0f00;
        case 0x3a0f04u: goto label_3a0f04;
        case 0x3a0f08u: goto label_3a0f08;
        case 0x3a0f0cu: goto label_3a0f0c;
        case 0x3a0f10u: goto label_3a0f10;
        case 0x3a0f14u: goto label_3a0f14;
        case 0x3a0f18u: goto label_3a0f18;
        case 0x3a0f1cu: goto label_3a0f1c;
        case 0x3a0f20u: goto label_3a0f20;
        case 0x3a0f24u: goto label_3a0f24;
        case 0x3a0f28u: goto label_3a0f28;
        case 0x3a0f2cu: goto label_3a0f2c;
        case 0x3a0f30u: goto label_3a0f30;
        case 0x3a0f34u: goto label_3a0f34;
        case 0x3a0f38u: goto label_3a0f38;
        case 0x3a0f3cu: goto label_3a0f3c;
        case 0x3a0f40u: goto label_3a0f40;
        case 0x3a0f44u: goto label_3a0f44;
        case 0x3a0f48u: goto label_3a0f48;
        case 0x3a0f4cu: goto label_3a0f4c;
        case 0x3a0f50u: goto label_3a0f50;
        case 0x3a0f54u: goto label_3a0f54;
        case 0x3a0f58u: goto label_3a0f58;
        case 0x3a0f5cu: goto label_3a0f5c;
        case 0x3a0f60u: goto label_3a0f60;
        case 0x3a0f64u: goto label_3a0f64;
        case 0x3a0f68u: goto label_3a0f68;
        case 0x3a0f6cu: goto label_3a0f6c;
        case 0x3a0f70u: goto label_3a0f70;
        case 0x3a0f74u: goto label_3a0f74;
        case 0x3a0f78u: goto label_3a0f78;
        case 0x3a0f7cu: goto label_3a0f7c;
        case 0x3a0f80u: goto label_3a0f80;
        case 0x3a0f84u: goto label_3a0f84;
        case 0x3a0f88u: goto label_3a0f88;
        case 0x3a0f8cu: goto label_3a0f8c;
        case 0x3a0f90u: goto label_3a0f90;
        case 0x3a0f94u: goto label_3a0f94;
        case 0x3a0f98u: goto label_3a0f98;
        case 0x3a0f9cu: goto label_3a0f9c;
        case 0x3a0fa0u: goto label_3a0fa0;
        case 0x3a0fa4u: goto label_3a0fa4;
        case 0x3a0fa8u: goto label_3a0fa8;
        case 0x3a0facu: goto label_3a0fac;
        case 0x3a0fb0u: goto label_3a0fb0;
        case 0x3a0fb4u: goto label_3a0fb4;
        case 0x3a0fb8u: goto label_3a0fb8;
        case 0x3a0fbcu: goto label_3a0fbc;
        case 0x3a0fc0u: goto label_3a0fc0;
        case 0x3a0fc4u: goto label_3a0fc4;
        case 0x3a0fc8u: goto label_3a0fc8;
        case 0x3a0fccu: goto label_3a0fcc;
        case 0x3a0fd0u: goto label_3a0fd0;
        case 0x3a0fd4u: goto label_3a0fd4;
        case 0x3a0fd8u: goto label_3a0fd8;
        case 0x3a0fdcu: goto label_3a0fdc;
        case 0x3a0fe0u: goto label_3a0fe0;
        case 0x3a0fe4u: goto label_3a0fe4;
        case 0x3a0fe8u: goto label_3a0fe8;
        case 0x3a0fecu: goto label_3a0fec;
        case 0x3a0ff0u: goto label_3a0ff0;
        case 0x3a0ff4u: goto label_3a0ff4;
        case 0x3a0ff8u: goto label_3a0ff8;
        case 0x3a0ffcu: goto label_3a0ffc;
        case 0x3a1000u: goto label_3a1000;
        case 0x3a1004u: goto label_3a1004;
        case 0x3a1008u: goto label_3a1008;
        case 0x3a100cu: goto label_3a100c;
        case 0x3a1010u: goto label_3a1010;
        case 0x3a1014u: goto label_3a1014;
        case 0x3a1018u: goto label_3a1018;
        case 0x3a101cu: goto label_3a101c;
        case 0x3a1020u: goto label_3a1020;
        case 0x3a1024u: goto label_3a1024;
        case 0x3a1028u: goto label_3a1028;
        case 0x3a102cu: goto label_3a102c;
        case 0x3a1030u: goto label_3a1030;
        case 0x3a1034u: goto label_3a1034;
        case 0x3a1038u: goto label_3a1038;
        case 0x3a103cu: goto label_3a103c;
        case 0x3a1040u: goto label_3a1040;
        case 0x3a1044u: goto label_3a1044;
        case 0x3a1048u: goto label_3a1048;
        case 0x3a104cu: goto label_3a104c;
        case 0x3a1050u: goto label_3a1050;
        case 0x3a1054u: goto label_3a1054;
        case 0x3a1058u: goto label_3a1058;
        case 0x3a105cu: goto label_3a105c;
        case 0x3a1060u: goto label_3a1060;
        case 0x3a1064u: goto label_3a1064;
        case 0x3a1068u: goto label_3a1068;
        case 0x3a106cu: goto label_3a106c;
        case 0x3a1070u: goto label_3a1070;
        case 0x3a1074u: goto label_3a1074;
        case 0x3a1078u: goto label_3a1078;
        case 0x3a107cu: goto label_3a107c;
        case 0x3a1080u: goto label_3a1080;
        case 0x3a1084u: goto label_3a1084;
        case 0x3a1088u: goto label_3a1088;
        case 0x3a108cu: goto label_3a108c;
        case 0x3a1090u: goto label_3a1090;
        case 0x3a1094u: goto label_3a1094;
        case 0x3a1098u: goto label_3a1098;
        case 0x3a109cu: goto label_3a109c;
        case 0x3a10a0u: goto label_3a10a0;
        case 0x3a10a4u: goto label_3a10a4;
        case 0x3a10a8u: goto label_3a10a8;
        default: break;
    }

    ctx->pc = 0x3a0e80u;

label_3a0e80:
    // 0x3a0e80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3a0e84:
    // 0x3a0e84: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x3a0e84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_3a0e88:
    // 0x3a0e88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a0e8c:
    // 0x3a0e8c: 0x2508cf30  addiu       $t0, $t0, -0x30D0
    ctx->pc = 0x3a0e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954800));
label_3a0e90:
    // 0x3a0e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a0e94:
    // 0x3a0e94: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3a0e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a0e98:
    // 0x3a0e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a0e9c:
    // 0x3a0e9c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3a0e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a0ea0:
    // 0x3a0ea0: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x3a0ea0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_3a0ea4:
    // 0x3a0ea4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a0ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3a0ea8:
    // 0x3a0ea8: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x3a0ea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_3a0eac:
    // 0x3a0eac: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x3a0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_3a0eb0:
    // 0x3a0eb0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x3a0eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_3a0eb4:
    // 0x3a0eb4: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x3a0eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
label_3a0eb8:
    // 0x3a0eb8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_3a0ebc:
    if (ctx->pc == 0x3A0EBCu) {
        ctx->pc = 0x3A0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EB8u;
        // 0x3a0ebc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0EC0u;
        goto label_3a0ec0;
    }
    ctx->pc = 0x3A0EB8u;
    {
        const bool branch_taken_0x3a0eb8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3A0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EB8u;
        // 0x3a0ebc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0eb8) {
            ctx->pc = 0x3A0EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0ea0;
        }
    }
    ctx->pc = 0x3A0EC0u;
label_3a0ec0:
    // 0x3a0ec0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3a0ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a0ec4:
    // 0x3a0ec4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a0ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_3a0ec8:
    // 0x3a0ec8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3a0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_3a0ecc:
    // 0x3a0ecc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3a0eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3a0ed0:
    // 0x3a0ed0: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3a0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_3a0ed4:
    // 0x3a0ed4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a0ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3a0ed8:
    // 0x3a0ed8: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
label_3a0edc:
    if (ctx->pc == 0x3A0EDCu) {
        ctx->pc = 0x3A0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0ED8u;
        // 0x3a0edc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0EE0u;
        goto label_3a0ee0;
    }
    ctx->pc = 0x3A0ED8u;
    {
        const bool branch_taken_0x3a0ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0ED8u;
        // 0x3a0edc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ed8) {
            ctx->pc = 0x3A1098u;
            goto label_3a1098;
        }
    }
    ctx->pc = 0x3A0EE0u;
label_3a0ee0:
    // 0x3a0ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a0ee4:
    // 0x3a0ee4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x3a0ee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3a0ee8:
    // 0x3a0ee8: 0x2a010065  slti        $at, $s0, 0x65
    ctx->pc = 0x3a0ee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)101) ? 1 : 0);
label_3a0eec:
    // 0x3a0eec: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
label_3a0ef0:
    if (ctx->pc == 0x3A0EF0u) {
        ctx->pc = 0x3A0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EECu;
        // 0x3a0ef0: 0x2a010064  slti        $at, $s0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0EF4u;
        goto label_3a0ef4;
    }
    ctx->pc = 0x3A0EECu;
    {
        const bool branch_taken_0x3a0eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EECu;
        // 0x3a0ef0: 0x2a010064  slti        $at, $s0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0eec) {
            ctx->pc = 0x3A1098u;
            goto label_3a1098;
        }
    }
    ctx->pc = 0x3A0EF4u;
label_3a0ef4:
    // 0x3a0ef4: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_3a0ef8:
    if (ctx->pc == 0x3A0EF8u) {
        ctx->pc = 0x3A0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EF4u;
        // 0x3a0ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0EFCu;
        goto label_3a0efc;
    }
    ctx->pc = 0x3A0EF4u;
    {
        const bool branch_taken_0x3a0ef4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EF4u;
        // 0x3a0ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ef4) {
            ctx->pc = 0x3A0F60u;
            goto label_3a0f60;
        }
    }
    ctx->pc = 0x3A0EFCu;
label_3a0efc:
    // 0x3a0efc: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3a0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_3a0f00:
    // 0x3a0f00: 0x1027c2  srl         $a0, $s0, 31
    ctx->pc = 0x3a0f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_3a0f04:
    // 0x3a0f04: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x3a0f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_3a0f08:
    // 0x3a0f08: 0x8f8883c0  lw          $t0, -0x7C40($gp)
    ctx->pc = 0x3a0f08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
label_3a0f0c:
    // 0x3a0f0c: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x3a0f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3a0f10:
    // 0x3a0f10: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3a0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a0f14:
    // 0x3a0f14: 0x878583b8  lh          $a1, -0x7C48($gp)
    ctx->pc = 0x3a0f14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935480)));
label_3a0f18:
    // 0x3a0f18: 0x878683bc  lh          $a2, -0x7C44($gp)
    ctx->pc = 0x3a0f18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935484)));
label_3a0f1c:
    // 0x3a0f1c: 0x8f878c58  lw          $a3, -0x73A8($gp)
    ctx->pc = 0x3a0f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_3a0f20:
    // 0x3a0f20: 0x1810  mfhi        $v1
    ctx->pc = 0x3a0f20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3a0f24:
    // 0x3a0f24: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x3a0f24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_3a0f28:
    // 0x3a0f28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a0f2c:
    // 0x3a0f2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3a0f2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3a0f30:
    // 0x3a0f30: 0x0  nop
    ctx->pc = 0x3a0f30u;
    // NOP
label_3a0f34:
    // 0x3a0f34: 0x0  nop
    ctx->pc = 0x3a0f34u;
    // NOP
label_3a0f38:
    // 0x3a0f38: 0x1810  mfhi        $v1
    ctx->pc = 0x3a0f38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3a0f3c:
    // 0x3a0f3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a0f40:
    // 0x3a0f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a0f44:
    // 0x3a0f44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a0f48:
    // 0x3a0f48: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a0f4c:
    // 0x3a0f4c: 0xc0e832c  jal         func_3A0CB0
label_3a0f50:
    if (ctx->pc == 0x3A0F50u) {
        ctx->pc = 0x3A0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F4Cu;
        // 0x3a0f50: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F54u;
        goto label_3a0f54;
    }
    ctx->pc = 0x3A0F4Cu;
    SET_GPR_U32(ctx, 31, 0x3A0F54u);
    ctx->pc = 0x3A0F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0F4Cu;
    // 0x3a0f50: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0CB0u, 0x3A0F4Cu, 0x3A0F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0F54u;
label_3a0f54:
    // 0x3a0f54: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x3a0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3a0f58:
    // 0x3a0f58: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x3a0f58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_3a0f5c:
    // 0x3a0f5c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3a0f5cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_3a0f60:
    // 0x3a0f60: 0x2a01000a  slti        $at, $s0, 0xA
    ctx->pc = 0x3a0f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_3a0f64:
    // 0x3a0f64: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_3a0f68:
    if (ctx->pc == 0x3A0F68u) {
        ctx->pc = 0x3A0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F64u;
        // 0x3a0f68: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F6Cu;
        goto label_3a0f6c;
    }
    ctx->pc = 0x3A0F64u;
    {
        const bool branch_taken_0x3a0f64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F64u;
        // 0x3a0f68: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f64) {
            ctx->pc = 0x3A0FE0u;
            goto label_3a0fe0;
        }
    }
    ctx->pc = 0x3A0F6Cu;
label_3a0f6c:
    // 0x3a0f6c: 0x878383b8  lh          $v1, -0x7C48($gp)
    ctx->pc = 0x3a0f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935480)));
label_3a0f70:
    // 0x3a0f70: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3a0f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3a0f74:
    // 0x3a0f74: 0x104fc2  srl         $t1, $s0, 31
    ctx->pc = 0x3a0f74u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_3a0f78:
    // 0x3a0f78: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x3a0f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3a0f7c:
    // 0x3a0f7c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x3a0f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a0f80:
    // 0x3a0f80: 0x8f8883c0  lw          $t0, -0x7C40($gp)
    ctx->pc = 0x3a0f80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
label_3a0f84:
    // 0x3a0f84: 0x878683bc  lh          $a2, -0x7C44($gp)
    ctx->pc = 0x3a0f84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935484)));
label_3a0f88:
    // 0x3a0f88: 0x8f878c58  lw          $a3, -0x73A8($gp)
    ctx->pc = 0x3a0f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_3a0f8c:
    // 0x3a0f8c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3a0f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3a0f90:
    // 0x3a0f90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a0f90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3a0f94:
    // 0x3a0f94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a0f98:
    // 0x3a0f98: 0x2010  mfhi        $a0
    ctx->pc = 0x3a0f98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3a0f9c:
    // 0x3a0f9c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3a0f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_3a0fa0:
    // 0x3a0fa0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3a0fa0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3a0fa4:
    // 0x3a0fa4: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x3a0fa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
label_3a0fa8:
    // 0x3a0fa8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x3a0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3a0fac:
    // 0x3a0fac: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x3a0facu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3a0fb0:
    // 0x3a0fb0: 0x0  nop
    ctx->pc = 0x3a0fb0u;
    // NOP
label_3a0fb4:
    // 0x3a0fb4: 0x0  nop
    ctx->pc = 0x3a0fb4u;
    // NOP
label_3a0fb8:
    // 0x3a0fb8: 0x1810  mfhi        $v1
    ctx->pc = 0x3a0fb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3a0fbc:
    // 0x3a0fbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a0fc0:
    // 0x3a0fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a0fc4:
    // 0x3a0fc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a0fc8:
    // 0x3a0fc8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a0fcc:
    // 0x3a0fcc: 0xc0e832c  jal         func_3A0CB0
label_3a0fd0:
    if (ctx->pc == 0x3A0FD0u) {
        ctx->pc = 0x3A0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0FCCu;
        // 0x3a0fd0: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0FD4u;
        goto label_3a0fd4;
    }
    ctx->pc = 0x3A0FCCu;
    SET_GPR_U32(ctx, 31, 0x3A0FD4u);
    ctx->pc = 0x3A0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0FCCu;
    // 0x3a0fd0: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0CB0u, 0x3A0FCCu, 0x3A0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0FD4u;
label_3a0fd4:
    // 0x3a0fd4: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x3a0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3a0fd8:
    // 0x3a0fd8: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x3a0fd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_3a0fdc:
    // 0x3a0fdc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3a0fdcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_3a0fe0:
    // 0x3a0fe0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3a0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a0fe4:
    // 0x3a0fe4: 0x204001a  div         $zero, $s0, $a0
    ctx->pc = 0x3a0fe4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3a0fe8:
    // 0x3a0fe8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3a0fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3a0fec:
    // 0x3a0fec: 0x878383b8  lh          $v1, -0x7C48($gp)
    ctx->pc = 0x3a0fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935480)));
label_3a0ff0:
    // 0x3a0ff0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a0ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3a0ff4:
    // 0x3a0ff4: 0x8f8883c0  lw          $t0, -0x7C40($gp)
    ctx->pc = 0x3a0ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
label_3a0ff8:
    // 0x3a0ff8: 0x878683bc  lh          $a2, -0x7C44($gp)
    ctx->pc = 0x3a0ff8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935484)));
label_3a0ffc:
    // 0x3a0ffc: 0x8f878c58  lw          $a3, -0x73A8($gp)
    ctx->pc = 0x3a0ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_3a1000:
    // 0x3a1000: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a1000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a1004:
    // 0x3a1004: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3a1004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_3a1008:
    // 0x3a1008: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3a1008u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3a100c:
    // 0x3a100c: 0x1810  mfhi        $v1
    ctx->pc = 0x3a100cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3a1010:
    // 0x3a1010: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a1010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a1014:
    // 0x3a1014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1018:
    // 0x3a1018: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a1018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a101c:
    // 0x3a101c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3a1020:
    // 0x3a1020: 0xc0e832c  jal         func_3A0CB0
label_3a1024:
    if (ctx->pc == 0x3A1024u) {
        ctx->pc = 0x3A1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1020u;
        // 0x3a1024: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1028u;
        goto label_3a1028;
    }
    ctx->pc = 0x3A1020u;
    SET_GPR_U32(ctx, 31, 0x3A1028u);
    ctx->pc = 0x3A1024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1020u;
    // 0x3a1024: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0CB0u, 0x3A1020u, 0x3A1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1028u;
label_3a1028:
    // 0x3a1028: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3a1028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3a102c:
    // 0x3a102c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3a102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3a1030:
    // 0x3a1030: 0x2463cfa0  addiu       $v1, $v1, -0x3060
    ctx->pc = 0x3a1030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954912));
label_3a1034:
    // 0x3a1034: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3a1034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_3a1038:
    // 0x3a1038: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3a1038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a103c:
    // 0x3a103c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3a103cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_3a1040:
    // 0x3a1040: 0x8c302410  lw          $s0, 0x2410($at)
    ctx->pc = 0x3a1040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
label_3a1044:
    // 0x3a1044: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a1044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1048:
    // 0x3a1048: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_3a104c:
    if (ctx->pc == 0x3A104Cu) {
        ctx->pc = 0x3A1050u;
        goto label_3a1050;
    }
    ctx->pc = 0x3A1048u;
    {
        const bool branch_taken_0x3a1048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1048) {
            ctx->pc = 0x3A1098u;
            goto label_3a1098;
        }
    }
    ctx->pc = 0x3A1050u;
label_3a1050:
    // 0x3a1050: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3a1050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3a1054:
    // 0x3a1054: 0xc096988  jal         func_25A620
label_3a1058:
    if (ctx->pc == 0x3A1058u) {
        ctx->pc = 0x3A1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1054u;
        // 0x3a1058: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A105Cu;
        goto label_3a105c;
    }
    ctx->pc = 0x3A1054u;
    SET_GPR_U32(ctx, 31, 0x3A105Cu);
    ctx->pc = 0x3A1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1054u;
    // 0x3a1058: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3A1054u, 0x3A105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A105Cu;
label_3a105c:
    // 0x3a105c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x3a105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_3a1060:
    // 0x3a1060: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a1060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a1064:
    // 0x3a1064: 0x0  nop
    ctx->pc = 0x3a1064u;
    // NOP
label_3a1068:
    // 0x3a1068: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a1068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a106c:
    // 0x3a106c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_3a1070:
    if (ctx->pc == 0x3A1070u) {
        ctx->pc = 0x3A1074u;
        goto label_3a1074;
    }
    ctx->pc = 0x3A106Cu;
    {
        const bool branch_taken_0x3a106c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a106c) {
            ctx->pc = 0x3A1088u;
            goto label_3a1088;
        }
    }
    ctx->pc = 0x3A1074u;
label_3a1074:
    // 0x3a1074: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3a1074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3a1078:
    // 0x3a1078: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3a1078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3a107c:
    // 0x3a107c: 0x320f809  jalr        $t9
label_3a1080:
    if (ctx->pc == 0x3A1080u) {
        ctx->pc = 0x3A1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A107Cu;
        // 0x3a1080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1084u;
        goto label_3a1084;
    }
    ctx->pc = 0x3A107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A1084u);
        ctx->pc = 0x3A1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A107Cu;
        // 0x3a1080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A107Cu, 0x3A1084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1084u;
label_3a1084:
    // 0x3a1084: 0x0  nop
    ctx->pc = 0x3a1084u;
    // NOP
label_3a1088:
    // 0x3a1088: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x3a1088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a108c:
    // 0x3a108c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a108cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1090:
    // 0x3a1090: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_3a1094:
    if (ctx->pc == 0x3A1094u) {
        ctx->pc = 0x3A1098u;
        goto label_3a1098;
    }
    ctx->pc = 0x3A1090u;
    {
        const bool branch_taken_0x3a1090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1090) {
            ctx->pc = 0x3A1050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1050;
        }
    }
    ctx->pc = 0x3A1098u;
label_3a1098:
    // 0x3a1098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a1098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a109c:
    // 0x3a109c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a109cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a10a0:
    // 0x3a10a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a10a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a10a4:
    // 0x3a10a4: 0x3e00008  jr          $ra
label_3a10a8:
    if (ctx->pc == 0x3A10A8u) {
        ctx->pc = 0x3A10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10A4u;
        // 0x3a10a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A10ACu;
        goto label_fallthrough_0x3a10a4;
    }
    ctx->pc = 0x3A10A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10A4u;
        // 0x3a10a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A10A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a10a4:
    ctx->pc = 0x3A10ACu;
}
