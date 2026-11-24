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

// Function: sub_00250DF8
// Address: 0x250df8 - 0x250f74
void sub_00250DF8_0x250df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250DF8_0x250df8");
#endif

    switch (ctx->pc) {
        case 0x250df8u: goto label_250df8;
        case 0x250dfcu: goto label_250dfc;
        case 0x250e00u: goto label_250e00;
        case 0x250e04u: goto label_250e04;
        case 0x250e08u: goto label_250e08;
        case 0x250e0cu: goto label_250e0c;
        case 0x250e10u: goto label_250e10;
        case 0x250e14u: goto label_250e14;
        case 0x250e18u: goto label_250e18;
        case 0x250e1cu: goto label_250e1c;
        case 0x250e20u: goto label_250e20;
        case 0x250e24u: goto label_250e24;
        case 0x250e28u: goto label_250e28;
        case 0x250e2cu: goto label_250e2c;
        case 0x250e30u: goto label_250e30;
        case 0x250e34u: goto label_250e34;
        case 0x250e38u: goto label_250e38;
        case 0x250e3cu: goto label_250e3c;
        case 0x250e40u: goto label_250e40;
        case 0x250e44u: goto label_250e44;
        case 0x250e48u: goto label_250e48;
        case 0x250e4cu: goto label_250e4c;
        case 0x250e50u: goto label_250e50;
        case 0x250e54u: goto label_250e54;
        case 0x250e58u: goto label_250e58;
        case 0x250e5cu: goto label_250e5c;
        case 0x250e60u: goto label_250e60;
        case 0x250e64u: goto label_250e64;
        case 0x250e68u: goto label_250e68;
        case 0x250e6cu: goto label_250e6c;
        case 0x250e70u: goto label_250e70;
        case 0x250e74u: goto label_250e74;
        case 0x250e78u: goto label_250e78;
        case 0x250e7cu: goto label_250e7c;
        case 0x250e80u: goto label_250e80;
        case 0x250e84u: goto label_250e84;
        case 0x250e88u: goto label_250e88;
        case 0x250e8cu: goto label_250e8c;
        case 0x250e90u: goto label_250e90;
        case 0x250e94u: goto label_250e94;
        case 0x250e98u: goto label_250e98;
        case 0x250e9cu: goto label_250e9c;
        case 0x250ea0u: goto label_250ea0;
        case 0x250ea4u: goto label_250ea4;
        case 0x250ea8u: goto label_250ea8;
        case 0x250eacu: goto label_250eac;
        case 0x250eb0u: goto label_250eb0;
        case 0x250eb4u: goto label_250eb4;
        case 0x250eb8u: goto label_250eb8;
        case 0x250ebcu: goto label_250ebc;
        case 0x250ec0u: goto label_250ec0;
        case 0x250ec4u: goto label_250ec4;
        case 0x250ec8u: goto label_250ec8;
        case 0x250eccu: goto label_250ecc;
        case 0x250ed0u: goto label_250ed0;
        case 0x250ed4u: goto label_250ed4;
        case 0x250ed8u: goto label_250ed8;
        case 0x250edcu: goto label_250edc;
        case 0x250ee0u: goto label_250ee0;
        case 0x250ee4u: goto label_250ee4;
        case 0x250ee8u: goto label_250ee8;
        case 0x250eecu: goto label_250eec;
        case 0x250ef0u: goto label_250ef0;
        case 0x250ef4u: goto label_250ef4;
        case 0x250ef8u: goto label_250ef8;
        case 0x250efcu: goto label_250efc;
        case 0x250f00u: goto label_250f00;
        case 0x250f04u: goto label_250f04;
        case 0x250f08u: goto label_250f08;
        case 0x250f0cu: goto label_250f0c;
        case 0x250f10u: goto label_250f10;
        case 0x250f14u: goto label_250f14;
        case 0x250f18u: goto label_250f18;
        case 0x250f1cu: goto label_250f1c;
        case 0x250f20u: goto label_250f20;
        case 0x250f24u: goto label_250f24;
        case 0x250f28u: goto label_250f28;
        case 0x250f2cu: goto label_250f2c;
        case 0x250f30u: goto label_250f30;
        case 0x250f34u: goto label_250f34;
        case 0x250f38u: goto label_250f38;
        case 0x250f3cu: goto label_250f3c;
        case 0x250f40u: goto label_250f40;
        case 0x250f44u: goto label_250f44;
        case 0x250f48u: goto label_250f48;
        case 0x250f4cu: goto label_250f4c;
        case 0x250f50u: goto label_250f50;
        case 0x250f54u: goto label_250f54;
        case 0x250f58u: goto label_250f58;
        case 0x250f5cu: goto label_250f5c;
        case 0x250f60u: goto label_250f60;
        case 0x250f64u: goto label_250f64;
        case 0x250f68u: goto label_250f68;
        case 0x250f6cu: goto label_250f6c;
        case 0x250f70u: goto label_250f70;
        default: break;
    }

    ctx->pc = 0x250df8u;

label_250df8:
    // 0x250df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_250dfc:
    // 0x250dfc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x250dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_250e00:
    // 0x250e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_250e04:
    // 0x250e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250e08:
    // 0x250e08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x250e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_250e0c:
    // 0x250e0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x250e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_250e10:
    // 0x250e10: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_250e14:
    if (ctx->pc == 0x250E14u) {
        ctx->pc = 0x250E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E10u;
        // 0x250e14: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E18u;
        goto label_250e18;
    }
    ctx->pc = 0x250E10u;
    {
        const bool branch_taken_0x250e10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x250E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E10u;
        // 0x250e14: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e10) {
            ctx->pc = 0x250E40u;
            goto label_250e40;
        }
    }
    ctx->pc = 0x250E18u;
label_250e18:
    // 0x250e18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250e1c:
    // 0x250e1c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250e20:
    // 0x250e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250e24:
    // 0x250e24: 0x2484ebe0  addiu       $a0, $a0, -0x1420
    ctx->pc = 0x250e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962144));
label_250e28:
    // 0x250e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_250e2c:
    // 0x250e2c: 0x24a5eb28  addiu       $a1, $a1, -0x14D8
    ctx->pc = 0x250e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
label_250e30:
    // 0x250e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250e34:
    // 0x250e34: 0x80941da  j           func_250768
label_250e38:
    if (ctx->pc == 0x250E38u) {
        ctx->pc = 0x250E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E34u;
        // 0x250e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E3Cu;
        goto label_250e3c;
    }
    ctx->pc = 0x250E34u;
    ctx->pc = 0x250E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E34u;
    // 0x250e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250E3Cu;
label_250e3c:
    // 0x250e3c: 0x0  nop
    ctx->pc = 0x250e3cu;
    // NOP
label_250e40:
    // 0x250e40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x250e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_250e44:
    // 0x250e44: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_250e48:
    if (ctx->pc == 0x250E48u) {
        ctx->pc = 0x250E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E44u;
        // 0x250e48: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E4Cu;
        goto label_250e4c;
    }
    ctx->pc = 0x250E44u;
    {
        const bool branch_taken_0x250e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250e44) {
            ctx->pc = 0x250E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250E44u;
            // 0x250e48: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250E70u;
            goto label_250e70;
        }
    }
    ctx->pc = 0x250E4Cu;
label_250e4c:
    // 0x250e4c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250e50:
    // 0x250e50: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250e54:
    // 0x250e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250e58:
    // 0x250e58: 0x2484ebf0  addiu       $a0, $a0, -0x1410
    ctx->pc = 0x250e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
label_250e5c:
    // 0x250e5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_250e60:
    // 0x250e60: 0x24a5eb58  addiu       $a1, $a1, -0x14A8
    ctx->pc = 0x250e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962008));
label_250e64:
    // 0x250e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250e68:
    // 0x250e68: 0x80941da  j           func_250768
label_250e6c:
    if (ctx->pc == 0x250E6Cu) {
        ctx->pc = 0x250E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E68u;
        // 0x250e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E70u;
        goto label_250e70;
    }
    ctx->pc = 0x250E68u;
    ctx->pc = 0x250E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E68u;
    // 0x250e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250E70u;
label_250e70:
    // 0x250e70: 0x1900003b  blez        $t0, . + 4 + (0x3B << 2)
label_250e74:
    if (ctx->pc == 0x250E74u) {
        ctx->pc = 0x250E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E70u;
        // 0x250e74: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E78u;
        goto label_250e78;
    }
    ctx->pc = 0x250E70u;
    {
        const bool branch_taken_0x250e70 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x250E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E70u;
        // 0x250e74: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e70) {
            ctx->pc = 0x250F60u;
            goto label_250f60;
        }
    }
    ctx->pc = 0x250E78u;
label_250e78:
    // 0x250e78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x250e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_250e7c:
    // 0x250e7c: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_250e80:
    if (ctx->pc == 0x250E80u) {
        ctx->pc = 0x250E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E7Cu;
        // 0x250e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E84u;
        goto label_250e84;
    }
    ctx->pc = 0x250E7Cu;
    {
        const bool branch_taken_0x250e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E7Cu;
        // 0x250e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e7c) {
            ctx->pc = 0x250F60u;
            goto label_250f60;
        }
    }
    ctx->pc = 0x250E84u;
label_250e84:
    // 0x250e84: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_250e88:
    if (ctx->pc == 0x250E88u) {
        ctx->pc = 0x250E8Cu;
        goto label_250e8c;
    }
    ctx->pc = 0x250E84u;
    {
        const bool branch_taken_0x250e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x250e84) {
            ctx->pc = 0x250F20u;
            goto label_250f20;
        }
    }
    ctx->pc = 0x250E8Cu;
label_250e8c:
    // 0x250e8c: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_250e90:
    // 0x250e90: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x250e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_250e94:
    // 0x250e94: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x250e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_250e98:
    // 0x250e98: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x250e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_250e9c:
    // 0x250e9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_250ea0:
    if (ctx->pc == 0x250EA0u) {
        ctx->pc = 0x250EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E9Cu;
        // 0x250ea0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EA4u;
        goto label_250ea4;
    }
    ctx->pc = 0x250E9Cu;
    {
        const bool branch_taken_0x250e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E9Cu;
        // 0x250ea0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e9c) {
            ctx->pc = 0x250ED0u;
            goto label_250ed0;
        }
    }
    ctx->pc = 0x250EA4u;
label_250ea4:
    // 0x250ea4: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x250ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_250ea8:
    // 0x250ea8: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x250ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_250eac:
    // 0x250eac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x250eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_250eb0:
    // 0x250eb0: 0x102300b  movn        $a2, $t0, $v0
    ctx->pc = 0x250eb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
label_250eb4:
    // 0x250eb4: 0xc049522  jal         func_125488
label_250eb8:
    if (ctx->pc == 0x250EB8u) {
        ctx->pc = 0x250EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EB4u;
        // 0x250eb8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EBCu;
        goto label_250ebc;
    }
    ctx->pc = 0x250EB4u;
    SET_GPR_U32(ctx, 31, 0x250EBCu);
    ctx->pc = 0x250EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EB4u;
    // 0x250eb8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x250EB4u, 0x250EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EBCu;
label_250ebc:
    // 0x250ebc: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x250ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_250ec0:
    // 0x250ec0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x250ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_250ec4:
    // 0x250ec4: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x250ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_250ec8:
    // 0x250ec8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x250ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_250ecc:
    // 0x250ecc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x250eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_250ed0:
    // 0x250ed0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x250ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_250ed4:
    // 0x250ed4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x250ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_250ed8:
    // 0x250ed8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_250edc:
    if (ctx->pc == 0x250EDCu) {
        ctx->pc = 0x250EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ED8u;
        // 0x250edc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EE0u;
        goto label_250ee0;
    }
    ctx->pc = 0x250ED8u;
    {
        const bool branch_taken_0x250ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ed8) {
            ctx->pc = 0x250EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250ED8u;
            // 0x250edc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250F04u;
            goto label_250f04;
        }
    }
    ctx->pc = 0x250EE0u;
label_250ee0:
    // 0x250ee0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x250ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_250ee4:
    // 0x250ee4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x250ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_250ee8:
    // 0x250ee8: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x250ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_250eec:
    // 0x250eec: 0x122300b  movn        $a2, $t1, $v0
    ctx->pc = 0x250eecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
label_250ef0:
    // 0x250ef0: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x250ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_250ef4:
    // 0x250ef4: 0xc049522  jal         func_125488
label_250ef8:
    if (ctx->pc == 0x250EF8u) {
        ctx->pc = 0x250EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EF4u;
        // 0x250ef8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EFCu;
        goto label_250efc;
    }
    ctx->pc = 0x250EF4u;
    SET_GPR_U32(ctx, 31, 0x250EFCu);
    ctx->pc = 0x250EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250EF4u;
    // 0x250ef8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x250EF4u, 0x250EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EFCu;
label_250efc:
    // 0x250efc: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x250efcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_250f00:
    // 0x250f00: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x250f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_250f04:
    // 0x250f04: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x250f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_250f08:
    // 0x250f08: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x250f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_250f0c:
    // 0x250f0c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x250f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_250f10:
    // 0x250f10: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x250f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_250f14:
    // 0x250f14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x250f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_250f18:
    // 0x250f18: 0x10000011  b           . + 4 + (0x11 << 2)
label_250f1c:
    if (ctx->pc == 0x250F1Cu) {
        ctx->pc = 0x250F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F18u;
        // 0x250f1c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F20u;
        goto label_250f20;
    }
    ctx->pc = 0x250F18u;
    {
        const bool branch_taken_0x250f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F18u;
        // 0x250f1c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f18) {
            ctx->pc = 0x250F60u;
            goto label_250f60;
        }
    }
    ctx->pc = 0x250F20u;
label_250f20:
    // 0x250f20: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_250f24:
    if (ctx->pc == 0x250F24u) {
        ctx->pc = 0x250F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F20u;
        // 0x250f24: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F28u;
        goto label_250f28;
    }
    ctx->pc = 0x250F20u;
    {
        const bool branch_taken_0x250f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x250f20) {
            ctx->pc = 0x250F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250F20u;
            // 0x250f24: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250F48u;
            goto label_250f48;
        }
    }
    ctx->pc = 0x250F28u;
label_250f28:
    // 0x250f28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x250f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_250f2c:
    // 0x250f2c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x250f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_250f30:
    // 0x250f30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x250f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_250f34:
    // 0x250f34: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x250f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_250f38:
    // 0x250f38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x250f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_250f3c:
    // 0x250f3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x250f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_250f40:
    // 0x250f40: 0x10000007  b           . + 4 + (0x7 << 2)
label_250f44:
    if (ctx->pc == 0x250F44u) {
        ctx->pc = 0x250F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F40u;
        // 0x250f44: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F48u;
        goto label_250f48;
    }
    ctx->pc = 0x250F40u;
    {
        const bool branch_taken_0x250f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F40u;
        // 0x250f44: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f40) {
            ctx->pc = 0x250F60u;
            goto label_250f60;
        }
    }
    ctx->pc = 0x250F48u;
label_250f48:
    // 0x250f48: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x250f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_250f4c:
    // 0x250f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_250f50:
    if (ctx->pc == 0x250F50u) {
        ctx->pc = 0x250F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F4Cu;
        // 0x250f50: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F54u;
        goto label_250f54;
    }
    ctx->pc = 0x250F4Cu;
    {
        const bool branch_taken_0x250f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F4Cu;
        // 0x250f50: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f4c) {
            ctx->pc = 0x250F60u;
            goto label_250f60;
        }
    }
    ctx->pc = 0x250F54u;
label_250f54:
    // 0x250f54: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x250f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_250f58:
    // 0x250f58: 0x40f809  jalr        $v0
label_250f5c:
    if (ctx->pc == 0x250F5Cu) {
        ctx->pc = 0x250F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F58u;
        // 0x250f5c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F60u;
        goto label_250f60;
    }
    ctx->pc = 0x250F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250F60u);
        ctx->pc = 0x250F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F58u;
        // 0x250f5c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250F58u, 0x250F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250F60u;
label_250f60:
    // 0x250f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250f64:
    // 0x250f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_250f68:
    // 0x250f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x250f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250f6c:
    // 0x250f6c: 0x3e00008  jr          $ra
label_250f70:
    if (ctx->pc == 0x250F70u) {
        ctx->pc = 0x250F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F6Cu;
        // 0x250f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F74u;
        goto label_fallthrough_0x250f6c;
    }
    ctx->pc = 0x250F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F6Cu;
        // 0x250f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250f6c:
    ctx->pc = 0x250F74u;
}
