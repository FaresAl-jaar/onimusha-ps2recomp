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

// Function: sub_00362DC0
// Address: 0x362dc0 - 0x3630a8
void sub_00362DC0_0x362dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362DC0_0x362dc0");
#endif

    switch (ctx->pc) {
        case 0x362e18u: goto label_362e18;
        case 0x362e40u: goto label_362e40;
        case 0x362fe8u: goto label_362fe8;
        case 0x362ff8u: goto label_362ff8;
        case 0x36300cu: goto label_36300c;
        case 0x363064u: goto label_363064;
        default: break;
    }

    ctx->pc = 0x362dc0u;

    // 0x362dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x362dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x362dc4: 0x3c0f0068  lui         $t7, 0x68
    ctx->pc = 0x362dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)104 << 16));
    // 0x362dc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x362dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x362dcc: 0x25effb10  addiu       $t7, $t7, -0x4F0
    ctx->pc = 0x362dccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966032));
    // 0x362dd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x362dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x362dd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x362dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362ddc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x362ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362de0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x362de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x362de4: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x362de4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x362de8: 0x344bffff  ori         $t3, $v0, 0xFFFF
    ctx->pc = 0x362de8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x362dec: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x362decu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x362df0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x362df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x362df4: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x362df4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    // 0x362df8: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x362df8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x362dfc: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x362dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x362e00: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x362e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x362e04: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x362e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x362e08: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x362e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x362e0c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x362e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x362e10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x362e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x362e14: 0x0  nop
    ctx->pc = 0x362e14u;
    // NOP
label_362e18:
    // 0x362e18: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x362e18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x362e1c: 0x8d082b  sltu        $at, $a0, $t5
    ctx->pc = 0x362e1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x362e20: 0x1420006b  bnez        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x362E20u;
    {
        const bool branch_taken_0x362e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x362e20) {
            ctx->pc = 0x362FD0u;
            goto label_362fd0;
        }
    }
    ctx->pc = 0x362E28u;
    // 0x362e28: 0x8ded0010  lw          $t5, 0x10($t7)
    ctx->pc = 0x362e28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x362e2c: 0x8d082b  sltu        $at, $a0, $t5
    ctx->pc = 0x362e2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x362e30: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x362E30u;
    {
        const bool branch_taken_0x362e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x362E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E30u;
        // 0x362e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e30) {
            ctx->pc = 0x362FD0u;
            goto label_362fd0;
        }
    }
    ctx->pc = 0x362E38u;
    // 0x362e38: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x362e38u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362e3c: 0x0  nop
    ctx->pc = 0x362e3cu;
    // NOP
label_362e40:
    // 0x362e40: 0x1f09021  addu        $s2, $t7, $s0
    ctx->pc = 0x362e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x362e44: 0x264d0004  addiu       $t5, $s2, 0x4
    ctx->pc = 0x362e44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x362e48: 0x92520004  lbu         $s2, 0x4($s2)
    ctx->pc = 0x362e48u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x362e4c: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x362e4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x362e50: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x362E50u;
    {
        const bool branch_taken_0x362e50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x362e50) {
            ctx->pc = 0x362E70u;
            goto label_362e70;
        }
    }
    ctx->pc = 0x362E58u;
    // 0x362e58: 0x8f928ba8  lw          $s2, -0x7458($gp)
    ctx->pc = 0x362e58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362e5c: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x362e5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x362e60: 0x8f120024  lw          $s2, 0x24($t8)
    ctx->pc = 0x362e60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x362e64: 0x24c9025  or          $s2, $s2, $t4
    ctx->pc = 0x362e64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 12));
    // 0x362e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x362E68u;
    {
        const bool branch_taken_0x362e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E68u;
        // 0x362e6c: 0xaf120024  sw          $s2, 0x24($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e68) {
            ctx->pc = 0x362E88u;
            goto label_362e88;
        }
    }
    ctx->pc = 0x362E70u;
label_362e70:
    // 0x362e70: 0x8f928ba8  lw          $s2, -0x7458($gp)
    ctx->pc = 0x362e70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362e74: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x362e74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x362e78: 0x8f120024  lw          $s2, 0x24($t8)
    ctx->pc = 0x362e78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x362e7c: 0x24b9024  and         $s2, $s2, $t3
    ctx->pc = 0x362e7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 11));
    // 0x362e80: 0xaf120024  sw          $s2, 0x24($t8)
    ctx->pc = 0x362e80u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 18));
    // 0x362e84: 0x0  nop
    ctx->pc = 0x362e84u;
    // NOP
label_362e88:
    // 0x362e88: 0x91b20000  lbu         $s2, 0x0($t5)
    ctx->pc = 0x362e88u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x362e8c: 0x32520002  andi        $s2, $s2, 0x2
    ctx->pc = 0x362e8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x362e90: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x362E90u;
    {
        const bool branch_taken_0x362e90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x362e90) {
            ctx->pc = 0x362EB0u;
            goto label_362eb0;
        }
    }
    ctx->pc = 0x362E98u;
    // 0x362e98: 0x8f928ba8  lw          $s2, -0x7458($gp)
    ctx->pc = 0x362e98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362e9c: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x362e9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x362ea0: 0x8f120024  lw          $s2, 0x24($t8)
    ctx->pc = 0x362ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x362ea4: 0x24a9025  or          $s2, $s2, $t2
    ctx->pc = 0x362ea4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 10));
    // 0x362ea8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x362EA8u;
    {
        const bool branch_taken_0x362ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EA8u;
        // 0x362eac: 0xaf120024  sw          $s2, 0x24($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ea8) {
            ctx->pc = 0x362EC8u;
            goto label_362ec8;
        }
    }
    ctx->pc = 0x362EB0u;
label_362eb0:
    // 0x362eb0: 0x8f928ba8  lw          $s2, -0x7458($gp)
    ctx->pc = 0x362eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362eb4: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x362eb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x362eb8: 0x8f120024  lw          $s2, 0x24($t8)
    ctx->pc = 0x362eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x362ebc: 0x2499024  and         $s2, $s2, $t1
    ctx->pc = 0x362ebcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 9));
    // 0x362ec0: 0xaf120024  sw          $s2, 0x24($t8)
    ctx->pc = 0x362ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 18));
    // 0x362ec4: 0x0  nop
    ctx->pc = 0x362ec4u;
    // NOP
label_362ec8:
    // 0x362ec8: 0x91b20000  lbu         $s2, 0x0($t5)
    ctx->pc = 0x362ec8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x362ecc: 0x32520004  andi        $s2, $s2, 0x4
    ctx->pc = 0x362eccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x362ed0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x362ED0u;
    {
        const bool branch_taken_0x362ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x362ed0) {
            ctx->pc = 0x362EF0u;
            goto label_362ef0;
        }
    }
    ctx->pc = 0x362ED8u;
    // 0x362ed8: 0x8f928ba8  lw          $s2, -0x7458($gp)
    ctx->pc = 0x362ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362edc: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x362edcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x362ee0: 0x8f120024  lw          $s2, 0x24($t8)
    ctx->pc = 0x362ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x362ee4: 0x2489025  or          $s2, $s2, $t0
    ctx->pc = 0x362ee4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 8));
    // 0x362ee8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x362EE8u;
    {
        const bool branch_taken_0x362ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EE8u;
        // 0x362eec: 0xaf120024  sw          $s2, 0x24($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ee8) {
            ctx->pc = 0x362F08u;
            goto label_362f08;
        }
    }
    ctx->pc = 0x362EF0u;
label_362ef0:
    // 0x362ef0: 0x8f928ba8  lw          $s2, -0x7458($gp)
    ctx->pc = 0x362ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362ef4: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x362ef4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x362ef8: 0x8f120024  lw          $s2, 0x24($t8)
    ctx->pc = 0x362ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x362efc: 0x2479024  and         $s2, $s2, $a3
    ctx->pc = 0x362efcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 7));
    // 0x362f00: 0xaf120024  sw          $s2, 0x24($t8)
    ctx->pc = 0x362f00u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 18));
    // 0x362f04: 0x0  nop
    ctx->pc = 0x362f04u;
    // NOP
label_362f08:
    // 0x362f08: 0x91b20000  lbu         $s2, 0x0($t5)
    ctx->pc = 0x362f08u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x362f0c: 0x32520008  andi        $s2, $s2, 0x8
    ctx->pc = 0x362f0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x362f10: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x362F10u;
    {
        const bool branch_taken_0x362f10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x362f10) {
            ctx->pc = 0x362F30u;
            goto label_362f30;
        }
    }
    ctx->pc = 0x362F18u;
    // 0x362f18: 0x8f928ba8  lw          $s2, -0x7458($gp)
    ctx->pc = 0x362f18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362f1c: 0x24ec021  addu        $t8, $s2, $t6
    ctx->pc = 0x362f1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x362f20: 0x8f120024  lw          $s2, 0x24($t8)
    ctx->pc = 0x362f20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x362f24: 0x2469025  or          $s2, $s2, $a2
    ctx->pc = 0x362f24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x362f28: 0xaf120024  sw          $s2, 0x24($t8)
    ctx->pc = 0x362f28u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 18));
    // 0x362f2c: 0x0  nop
    ctx->pc = 0x362f2cu;
    // NOP
label_362f30:
    // 0x362f30: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x362f30u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x362f34: 0x31ad0010  andi        $t5, $t5, 0x10
    ctx->pc = 0x362f34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x362f38: 0x11a00011  beqz        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x362F38u;
    {
        const bool branch_taken_0x362f38 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x362f38) {
            ctx->pc = 0x362F80u;
            goto label_362f80;
        }
    }
    ctx->pc = 0x362F40u;
    // 0x362f40: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362f40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362f44: 0x1ae9021  addu        $s2, $t5, $t6
    ctx->pc = 0x362f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x362f48: 0x8e4d0024  lw          $t5, 0x24($s2)
    ctx->pc = 0x362f48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x362f4c: 0x1a56825  or          $t5, $t5, $a1
    ctx->pc = 0x362f4cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x362f50: 0xae4d0024  sw          $t5, 0x24($s2)
    ctx->pc = 0x362f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 13));
    // 0x362f54: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362f54u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362f58: 0x1ae9021  addu        $s2, $t5, $t6
    ctx->pc = 0x362f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x362f5c: 0x8e4d0024  lw          $t5, 0x24($s2)
    ctx->pc = 0x362f5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x362f60: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x362f60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x362f64: 0xae4d0024  sw          $t5, 0x24($s2)
    ctx->pc = 0x362f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 13));
    // 0x362f68: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362f68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362f6c: 0x1ae9021  addu        $s2, $t5, $t6
    ctx->pc = 0x362f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x362f70: 0x8e4d0024  lw          $t5, 0x24($s2)
    ctx->pc = 0x362f70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x362f74: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x362f74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x362f78: 0xae4d0024  sw          $t5, 0x24($s2)
    ctx->pc = 0x362f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 13));
    // 0x362f7c: 0x0  nop
    ctx->pc = 0x362f7cu;
    // NOP
label_362f80:
    // 0x362f80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x362f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x362f84: 0x2a0d0005  slti        $t5, $s0, 0x5
    ctx->pc = 0x362f84u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x362f88: 0x15a0ffad  bnez        $t5, . + 4 + (-0x53 << 2)
    ctx->pc = 0x362F88u;
    {
        const bool branch_taken_0x362f88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x362F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F88u;
        // 0x362f8c: 0x25ce0064  addiu       $t6, $t6, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f88) {
            ctx->pc = 0x362E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362e40;
        }
    }
    ctx->pc = 0x362F90u;
    // 0x362f90: 0x91ee0009  lbu         $t6, 0x9($t7)
    ctx->pc = 0x362f90u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 9)));
    // 0x362f94: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362f94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362f98: 0xa1ae005a  sb          $t6, 0x5A($t5)
    ctx->pc = 0x362f98u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 90), (uint8_t)GPR_U32(ctx, 14));
    // 0x362f9c: 0x91ee000a  lbu         $t6, 0xA($t7)
    ctx->pc = 0x362f9cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 10)));
    // 0x362fa0: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362fa0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362fa4: 0xa1ae00be  sb          $t6, 0xBE($t5)
    ctx->pc = 0x362fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 190), (uint8_t)GPR_U32(ctx, 14));
    // 0x362fa8: 0x91ee000b  lbu         $t6, 0xB($t7)
    ctx->pc = 0x362fa8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 11)));
    // 0x362fac: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362facu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362fb0: 0xa1ae0122  sb          $t6, 0x122($t5)
    ctx->pc = 0x362fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 290), (uint8_t)GPR_U32(ctx, 14));
    // 0x362fb4: 0x91ee000c  lbu         $t6, 0xC($t7)
    ctx->pc = 0x362fb4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x362fb8: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362fb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362fbc: 0xa1ae0186  sb          $t6, 0x186($t5)
    ctx->pc = 0x362fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 390), (uint8_t)GPR_U32(ctx, 14));
    // 0x362fc0: 0x91ee000d  lbu         $t6, 0xD($t7)
    ctx->pc = 0x362fc0u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 13)));
    // 0x362fc4: 0x8f8d8ba8  lw          $t5, -0x7458($gp)
    ctx->pc = 0x362fc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x362fc8: 0xa1ae01ea  sb          $t6, 0x1EA($t5)
    ctx->pc = 0x362fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 490), (uint8_t)GPR_U32(ctx, 14));
    // 0x362fcc: 0x0  nop
    ctx->pc = 0x362fccu;
    // NOP
label_362fd0:
    // 0x362fd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x362fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x362fd4: 0x2e2d003e  sltiu       $t5, $s1, 0x3E
    ctx->pc = 0x362fd4u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)62) ? 1 : 0);
    // 0x362fd8: 0x15a0ff8f  bnez        $t5, . + 4 + (-0x71 << 2)
    ctx->pc = 0x362FD8u;
    {
        const bool branch_taken_0x362fd8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x362FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FD8u;
        // 0x362fdc: 0x25ef0010  addiu       $t7, $t7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362fd8) {
            ctx->pc = 0x362E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362e18;
        }
    }
    ctx->pc = 0x362FE0u;
    // 0x362fe0: 0xc0d2564  jal         func_349590
    ctx->pc = 0x362FE0u;
    SET_GPR_U32(ctx, 31, 0x362FE8u);
    ctx->pc = 0x349590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349590u, 0x362FE0u, 0x362FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362FE8u;
label_362fe8:
    // 0x362fe8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x362fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362fec: 0x27918a54  addiu       $s1, $gp, -0x75AC
    ctx->pc = 0x362fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
    // 0x362ff0: 0x27908a5c  addiu       $s0, $gp, -0x75A4
    ctx->pc = 0x362ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937180));
    // 0x362ff4: 0x0  nop
    ctx->pc = 0x362ff4u;
    // NOP
label_362ff8:
    // 0x362ff8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x362ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x362ffc: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x362FFCu;
    {
        const bool branch_taken_0x362ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362ffc) {
            ctx->pc = 0x363048u;
            goto label_363048;
        }
    }
    ctx->pc = 0x363004u;
    // 0x363004: 0xc0d2604  jal         func_349810
    ctx->pc = 0x363004u;
    SET_GPR_U32(ctx, 31, 0x36300Cu);
    ctx->pc = 0x363008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363004u;
    // 0x363008: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349810u, 0x363004u, 0x36300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36300Cu;
label_36300c:
    // 0x36300c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36300Cu;
    {
        const bool branch_taken_0x36300c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36300c) {
            ctx->pc = 0x363048u;
            goto label_363048;
        }
    }
    ctx->pc = 0x363014u;
    // 0x363014: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x363014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x363018: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x363018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x36301c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x36301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x363020: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x363020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x363024: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x363024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x363028: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x363028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36302c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x363030: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x363030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363034: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x363034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x363038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363038u;
    {
        const bool branch_taken_0x363038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363038) {
            ctx->pc = 0x363048u;
            goto label_363048;
        }
    }
    ctx->pc = 0x363040u;
    // 0x363040: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x363040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x363044: 0x0  nop
    ctx->pc = 0x363044u;
    // NOP
label_363048:
    // 0x363048: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x363048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36304c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x36304cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x363050: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x363050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x363054: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x363054u;
    {
        const bool branch_taken_0x363054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363054u;
        // 0x363058: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363054) {
            ctx->pc = 0x362FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362ff8;
        }
    }
    ctx->pc = 0x36305Cu;
    // 0x36305c: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x36305Cu;
    SET_GPR_U32(ctx, 31, 0x363064u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x36305Cu, 0x363064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363064u;
label_363064:
    // 0x363064: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x363064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x363068: 0x34219000  ori         $at, $at, 0x9000
    ctx->pc = 0x363068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36864);
    // 0x36306c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x36306cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x363070: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x363070u;
    {
        const bool branch_taken_0x363070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x363070) {
            ctx->pc = 0x363090u;
            goto label_363090;
        }
    }
    ctx->pc = 0x363078u;
    // 0x363078: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x363078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x36307c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363080: 0xac600148  sw          $zero, 0x148($v1)
    ctx->pc = 0x363080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 0));
    // 0x363084: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x363084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x363088: 0xac64014c  sw          $a0, 0x14C($v1)
    ctx->pc = 0x363088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 4));
    // 0x36308c: 0x0  nop
    ctx->pc = 0x36308cu;
    // NOP
label_363090:
    // 0x363090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x363090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36309c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36309cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3630a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3630A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3630A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630A0u;
        // 0x3630a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3630A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3630A8u;
}
