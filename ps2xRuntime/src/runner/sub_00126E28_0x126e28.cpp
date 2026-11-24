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

// Function: sub_00126E28
// Address: 0x126e28 - 0x126f94
void sub_00126E28_0x126e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126E28_0x126e28");
#endif

    switch (ctx->pc) {
        case 0x126e28u: goto label_126e28;
        case 0x126e2cu: goto label_126e2c;
        case 0x126e30u: goto label_126e30;
        case 0x126e34u: goto label_126e34;
        case 0x126e38u: goto label_126e38;
        case 0x126e3cu: goto label_126e3c;
        case 0x126e40u: goto label_126e40;
        case 0x126e44u: goto label_126e44;
        case 0x126e48u: goto label_126e48;
        case 0x126e4cu: goto label_126e4c;
        case 0x126e50u: goto label_126e50;
        case 0x126e54u: goto label_126e54;
        case 0x126e58u: goto label_126e58;
        case 0x126e5cu: goto label_126e5c;
        case 0x126e60u: goto label_126e60;
        case 0x126e64u: goto label_126e64;
        case 0x126e68u: goto label_126e68;
        case 0x126e6cu: goto label_126e6c;
        case 0x126e70u: goto label_126e70;
        case 0x126e74u: goto label_126e74;
        case 0x126e78u: goto label_126e78;
        case 0x126e7cu: goto label_126e7c;
        case 0x126e80u: goto label_126e80;
        case 0x126e84u: goto label_126e84;
        case 0x126e88u: goto label_126e88;
        case 0x126e8cu: goto label_126e8c;
        case 0x126e90u: goto label_126e90;
        case 0x126e94u: goto label_126e94;
        case 0x126e98u: goto label_126e98;
        case 0x126e9cu: goto label_126e9c;
        case 0x126ea0u: goto label_126ea0;
        case 0x126ea4u: goto label_126ea4;
        case 0x126ea8u: goto label_126ea8;
        case 0x126eacu: goto label_126eac;
        case 0x126eb0u: goto label_126eb0;
        case 0x126eb4u: goto label_126eb4;
        case 0x126eb8u: goto label_126eb8;
        case 0x126ebcu: goto label_126ebc;
        case 0x126ec0u: goto label_126ec0;
        case 0x126ec4u: goto label_126ec4;
        case 0x126ec8u: goto label_126ec8;
        case 0x126eccu: goto label_126ecc;
        case 0x126ed0u: goto label_126ed0;
        case 0x126ed4u: goto label_126ed4;
        case 0x126ed8u: goto label_126ed8;
        case 0x126edcu: goto label_126edc;
        case 0x126ee0u: goto label_126ee0;
        case 0x126ee4u: goto label_126ee4;
        case 0x126ee8u: goto label_126ee8;
        case 0x126eecu: goto label_126eec;
        case 0x126ef0u: goto label_126ef0;
        case 0x126ef4u: goto label_126ef4;
        case 0x126ef8u: goto label_126ef8;
        case 0x126efcu: goto label_126efc;
        case 0x126f00u: goto label_126f00;
        case 0x126f04u: goto label_126f04;
        case 0x126f08u: goto label_126f08;
        case 0x126f0cu: goto label_126f0c;
        case 0x126f10u: goto label_126f10;
        case 0x126f14u: goto label_126f14;
        case 0x126f18u: goto label_126f18;
        case 0x126f1cu: goto label_126f1c;
        case 0x126f20u: goto label_126f20;
        case 0x126f24u: goto label_126f24;
        case 0x126f28u: goto label_126f28;
        case 0x126f2cu: goto label_126f2c;
        case 0x126f30u: goto label_126f30;
        case 0x126f34u: goto label_126f34;
        case 0x126f38u: goto label_126f38;
        case 0x126f3cu: goto label_126f3c;
        case 0x126f40u: goto label_126f40;
        case 0x126f44u: goto label_126f44;
        case 0x126f48u: goto label_126f48;
        case 0x126f4cu: goto label_126f4c;
        case 0x126f50u: goto label_126f50;
        case 0x126f54u: goto label_126f54;
        case 0x126f58u: goto label_126f58;
        case 0x126f5cu: goto label_126f5c;
        case 0x126f60u: goto label_126f60;
        case 0x126f64u: goto label_126f64;
        case 0x126f68u: goto label_126f68;
        case 0x126f6cu: goto label_126f6c;
        case 0x126f70u: goto label_126f70;
        case 0x126f74u: goto label_126f74;
        case 0x126f78u: goto label_126f78;
        case 0x126f7cu: goto label_126f7c;
        case 0x126f80u: goto label_126f80;
        case 0x126f84u: goto label_126f84;
        case 0x126f88u: goto label_126f88;
        case 0x126f8cu: goto label_126f8c;
        case 0x126f90u: goto label_126f90;
        default: break;
    }

    ctx->pc = 0x126e28u;

label_126e28:
    // 0x126e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_126e2c:
    // 0x126e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_126e30:
    // 0x126e30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x126e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_126e34:
    // 0x126e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126e38:
    // 0x126e38: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x126e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_126e3c:
    // 0x126e3c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_126e40:
    if (ctx->pc == 0x126E40u) {
        ctx->pc = 0x126E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E3Cu;
        // 0x126e40: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E44u;
        goto label_126e44;
    }
    ctx->pc = 0x126E3Cu;
    {
        const bool branch_taken_0x126e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e3c) {
            ctx->pc = 0x126E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E3Cu;
            // 0x126e40: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126E58u;
            goto label_126e58;
        }
    }
    ctx->pc = 0x126E44u;
label_126e44:
    // 0x126e44: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x126e44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
label_126e48:
    // 0x126e48: 0x8dee6048  lw          $t6, 0x6048($t7)
    ctx->pc = 0x126e48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24648)));
label_126e4c:
    // 0x126e4c: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x126e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
label_126e50:
    // 0x126e50: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x126e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_126e54:
    // 0x126e54: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x126e54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_126e58:
    // 0x126e58: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_126e5c:
    if (ctx->pc == 0x126E5Cu) {
        ctx->pc = 0x126E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E58u;
        // 0x126e5c: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E60u;
        goto label_126e60;
    }
    ctx->pc = 0x126E58u;
    {
        const bool branch_taken_0x126e58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e58) {
            ctx->pc = 0x126E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E58u;
            // 0x126e5c: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126E6Cu;
            goto label_126e6c;
        }
    }
    ctx->pc = 0x126E60u;
label_126e60:
    // 0x126e60: 0xc048f16  jal         func_123C58
label_126e64:
    if (ctx->pc == 0x126E64u) {
        ctx->pc = 0x126E68u;
        goto label_126e68;
    }
    ctx->pc = 0x126E60u;
    SET_GPR_U32(ctx, 31, 0x126E68u);
    ctx->pc = 0x123C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C58u, 0x126E60u, 0x126E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E68u;
label_126e68:
    // 0x126e68: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x126e68u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_126e6c:
    // 0x126e6c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x126e6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126e70:
    // 0x126e70: 0x31cf0020  andi        $t7, $t6, 0x20
    ctx->pc = 0x126e70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)32);
label_126e74:
    // 0x126e74: 0x15e00032  bnez        $t7, . + 4 + (0x32 << 2)
label_126e78:
    if (ctx->pc == 0x126E78u) {
        ctx->pc = 0x126E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E74u;
        // 0x126e78: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E7Cu;
        goto label_126e7c;
    }
    ctx->pc = 0x126E74u;
    {
        const bool branch_taken_0x126e74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E74u;
        // 0x126e78: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e74) {
            ctx->pc = 0x126F40u;
            goto label_126f40;
        }
    }
    ctx->pc = 0x126E7Cu;
label_126e7c:
    // 0x126e7c: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x126e7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
label_126e80:
    // 0x126e80: 0x55e00036  bnel        $t7, $zero, . + 4 + (0x36 << 2)
label_126e84:
    if (ctx->pc == 0x126E84u) {
        ctx->pc = 0x126E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E80u;
        // 0x126e84: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E88u;
        goto label_126e88;
    }
    ctx->pc = 0x126E80u;
    {
        const bool branch_taken_0x126e80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e80) {
            ctx->pc = 0x126E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E80u;
            // 0x126e84: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126F5Cu;
            goto label_126f5c;
        }
    }
    ctx->pc = 0x126E88u;
label_126e88:
    // 0x126e88: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x126e88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
label_126e8c:
    // 0x126e8c: 0x11e0002c  beqz        $t7, . + 4 + (0x2C << 2)
label_126e90:
    if (ctx->pc == 0x126E90u) {
        ctx->pc = 0x126E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E8Cu;
        // 0x126e90: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E94u;
        goto label_126e94;
    }
    ctx->pc = 0x126E8Cu;
    {
        const bool branch_taken_0x126e8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E8Cu;
        // 0x126e90: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e8c) {
            ctx->pc = 0x126F40u;
            goto label_126f40;
        }
    }
    ctx->pc = 0x126E94u;
label_126e94:
    // 0x126e94: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
label_126e98:
    if (ctx->pc == 0x126E98u) {
        ctx->pc = 0x126E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E94u;
        // 0x126e98: 0x35cf0004  ori         $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126E9Cu;
        goto label_126e9c;
    }
    ctx->pc = 0x126E94u;
    {
        const bool branch_taken_0x126e94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E94u;
        // 0x126e98: 0x35cf0004  ori         $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e94) {
            ctx->pc = 0x126EC8u;
            goto label_126ec8;
        }
    }
    ctx->pc = 0x126E9Cu;
label_126e9c:
    // 0x126e9c: 0xc048e58  jal         func_123960
label_126ea0:
    if (ctx->pc == 0x126EA0u) {
        ctx->pc = 0x126EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E9Cu;
        // 0x126ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EA4u;
        goto label_126ea4;
    }
    ctx->pc = 0x126E9Cu;
    SET_GPR_U32(ctx, 31, 0x126EA4u);
    ctx->pc = 0x126EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E9Cu;
    // 0x126ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123960u, 0x126E9Cu, 0x126EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EA4u;
label_126ea4:
    // 0x126ea4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_126ea8:
    if (ctx->pc == 0x126EA8u) {
        ctx->pc = 0x126EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EA4u;
        // 0x126ea8: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EACu;
        goto label_126eac;
    }
    ctx->pc = 0x126EA4u;
    {
        const bool branch_taken_0x126ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EA4u;
        // 0x126ea8: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ea4) {
            ctx->pc = 0x126F40u;
            goto label_126f40;
        }
    }
    ctx->pc = 0x126EACu;
label_126eac:
    // 0x126eac: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x126eacu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_126eb0:
    // 0x126eb0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x126eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_126eb4:
    // 0x126eb4: 0x31effff7  andi        $t7, $t7, 0xFFF7
    ctx->pc = 0x126eb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65527);
label_126eb8:
    // 0x126eb8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x126eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_126ebc:
    // 0x126ebc: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x126ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_126ec0:
    // 0x126ec0: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x126ec0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_126ec4:
    // 0x126ec4: 0x35cf0004  ori         $t7, $t6, 0x4
    ctx->pc = 0x126ec4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
label_126ec8:
    // 0x126ec8: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x126ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_126ecc:
    // 0x126ecc: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x126eccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_126ed0:
    // 0x126ed0: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_126ed4:
    if (ctx->pc == 0x126ED4u) {
        ctx->pc = 0x126ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ED0u;
        // 0x126ed4: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126ED8u;
        goto label_126ed8;
    }
    ctx->pc = 0x126ED0u;
    {
        const bool branch_taken_0x126ed0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126ed0) {
            ctx->pc = 0x126ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126ED0u;
            // 0x126ed4: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126EE4u;
            goto label_126ee4;
        }
    }
    ctx->pc = 0x126ED8u;
label_126ed8:
    // 0x126ed8: 0xc049204  jal         func_124810
label_126edc:
    if (ctx->pc == 0x126EDCu) {
        ctx->pc = 0x126EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ED8u;
        // 0x126edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EE0u;
        goto label_126ee0;
    }
    ctx->pc = 0x126ED8u;
    SET_GPR_U32(ctx, 31, 0x126EE0u);
    ctx->pc = 0x126EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126ED8u;
    // 0x126edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124810u, 0x126ED8u, 0x126EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EE0u;
label_126ee0:
    // 0x126ee0: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x126ee0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_126ee4:
    // 0x126ee4: 0x31ef0003  andi        $t7, $t7, 0x3
    ctx->pc = 0x126ee4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
label_126ee8:
    // 0x126ee8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_126eec:
    if (ctx->pc == 0x126EECu) {
        ctx->pc = 0x126EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EE8u;
        // 0x126eec: 0x3c050012  lui         $a1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EF0u;
        goto label_126ef0;
    }
    ctx->pc = 0x126EE8u;
    {
        const bool branch_taken_0x126ee8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EE8u;
        // 0x126eec: 0x3c050012  lui         $a1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ee8) {
            ctx->pc = 0x126EFCu;
            goto label_126efc;
        }
    }
    ctx->pc = 0x126EF0u;
label_126ef0:
    // 0x126ef0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x126ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_126ef4:
    // 0x126ef4: 0xc049192  jal         func_124648
label_126ef8:
    if (ctx->pc == 0x126EF8u) {
        ctx->pc = 0x126EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EF4u;
        // 0x126ef8: 0x24a56df8  addiu       $a1, $a1, 0x6DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126EFCu;
        goto label_126efc;
    }
    ctx->pc = 0x126EF4u;
    SET_GPR_U32(ctx, 31, 0x126EFCu);
    ctx->pc = 0x126EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126EF4u;
    // 0x126ef8: 0x24a56df8  addiu       $a1, $a1, 0x6DF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124648u, 0x126EF4u, 0x126EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EFCu;
label_126efc:
    // 0x126efc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x126efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_126f00:
    // 0x126f00: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x126f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_126f04:
    // 0x126f04: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x126f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_126f08:
    // 0x126f08: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x126f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_126f0c:
    // 0x126f0c: 0x40f809  jalr        $v0
label_126f10:
    if (ctx->pc == 0x126F10u) {
        ctx->pc = 0x126F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F0Cu;
        // 0x126f10: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F14u;
        goto label_126f14;
    }
    ctx->pc = 0x126F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126F14u);
        ctx->pc = 0x126F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F0Cu;
        // 0x126f10: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126F0Cu, 0x126F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126F14u;
label_126f14:
    // 0x126f14: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x126f14u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_126f18:
    // 0x126f18: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x126f18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126f1c:
    // 0x126f1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x126f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_126f20:
    // 0x126f20: 0x31efdfff  andi        $t7, $t7, 0xDFFF
    ctx->pc = 0x126f20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)57343);
label_126f24:
    // 0x126f24: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_126f28:
    if (ctx->pc == 0x126F28u) {
        ctx->pc = 0x126F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F24u;
        // 0x126f28: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F2Cu;
        goto label_126f2c;
    }
    ctx->pc = 0x126F24u;
    {
        const bool branch_taken_0x126f24 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x126F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F24u;
        // 0x126f28: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f24) {
            ctx->pc = 0x126F40u;
            goto label_126f40;
        }
    }
    ctx->pc = 0x126F2Cu;
label_126f2c:
    // 0x126f2c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_126f30:
    if (ctx->pc == 0x126F30u) {
        ctx->pc = 0x126F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F2Cu;
        // 0x126f30: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F34u;
        goto label_126f34;
    }
    ctx->pc = 0x126F2Cu;
    {
        const bool branch_taken_0x126f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126f2c) {
            ctx->pc = 0x126F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126F2Cu;
            // 0x126f30: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126F54u;
            goto label_126f54;
        }
    }
    ctx->pc = 0x126F34u;
label_126f34:
    // 0x126f34: 0x35ef0020  ori         $t7, $t7, 0x20
    ctx->pc = 0x126f34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32);
label_126f38:
    // 0x126f38: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x126f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_126f3c:
    // 0x126f3c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x126f3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126f40:
    // 0x126f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126f44:
    // 0x126f44: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x126f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_126f48:
    // 0x126f48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_126f4c:
    // 0x126f4c: 0x3e00008  jr          $ra
label_126f50:
    if (ctx->pc == 0x126F50u) {
        ctx->pc = 0x126F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F4Cu;
        // 0x126f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F54u;
        goto label_126f54;
    }
    ctx->pc = 0x126F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F4Cu;
        // 0x126f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126F54u;
label_126f54:
    // 0x126f54: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_126f58:
    if (ctx->pc == 0x126F58u) {
        ctx->pc = 0x126F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F54u;
        // 0x126f58: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F5Cu;
        goto label_126f5c;
    }
    ctx->pc = 0x126F54u;
    {
        const bool branch_taken_0x126f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F54u;
        // 0x126f58: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f54) {
            ctx->pc = 0x126F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126f38;
        }
    }
    ctx->pc = 0x126F5Cu;
label_126f5c:
    // 0x126f5c: 0x10a0ffdb  beqz        $a1, . + 4 + (-0x25 << 2)
label_126f60:
    if (ctx->pc == 0x126F60u) {
        ctx->pc = 0x126F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F5Cu;
        // 0x126f60: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F64u;
        goto label_126f64;
    }
    ctx->pc = 0x126F5Cu;
    {
        const bool branch_taken_0x126f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F5Cu;
        // 0x126f60: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f5c) {
            ctx->pc = 0x126ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126ecc;
        }
    }
    ctx->pc = 0x126F64u;
label_126f64:
    // 0x126f64: 0x50af0004  beql        $a1, $t7, . + 4 + (0x4 << 2)
label_126f68:
    if (ctx->pc == 0x126F68u) {
        ctx->pc = 0x126F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F64u;
        // 0x126f68: 0x8e0f003c  lw          $t7, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F6Cu;
        goto label_126f6c;
    }
    ctx->pc = 0x126F64u;
    {
        const bool branch_taken_0x126f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x126f64) {
            ctx->pc = 0x126F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126F64u;
            // 0x126f68: 0x8e0f003c  lw          $t7, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126F78u;
            goto label_126f78;
        }
    }
    ctx->pc = 0x126F6Cu;
label_126f6c:
    // 0x126f6c: 0xc048f7a  jal         func_123DE8
label_126f70:
    if (ctx->pc == 0x126F70u) {
        ctx->pc = 0x126F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F6Cu;
        // 0x126f70: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F74u;
        goto label_126f74;
    }
    ctx->pc = 0x126F6Cu;
    SET_GPR_U32(ctx, 31, 0x126F74u);
    ctx->pc = 0x126F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F6Cu;
    // 0x126f70: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123DE8u, 0x126F6Cu, 0x126F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F74u;
label_126f74:
    // 0x126f74: 0x8e0f003c  lw          $t7, 0x3C($s0)
    ctx->pc = 0x126f74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_126f78:
    // 0x126f78: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x126f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_126f7c:
    // 0x126f7c: 0x11e0ffd3  beqz        $t7, . + 4 + (-0x2D << 2)
label_126f80:
    if (ctx->pc == 0x126F80u) {
        ctx->pc = 0x126F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F7Cu;
        // 0x126f80: 0xae0f0004  sw          $t7, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F84u;
        goto label_126f84;
    }
    ctx->pc = 0x126F7Cu;
    {
        const bool branch_taken_0x126f7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F7Cu;
        // 0x126f80: 0xae0f0004  sw          $t7, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f7c) {
            ctx->pc = 0x126ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126ecc;
        }
    }
    ctx->pc = 0x126F84u;
label_126f84:
    // 0x126f84: 0x8e0f0038  lw          $t7, 0x38($s0)
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_126f88:
    // 0x126f88: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x126f88u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126f8c:
    // 0x126f8c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_126f90:
    if (ctx->pc == 0x126F90u) {
        ctx->pc = 0x126F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F8Cu;
        // 0x126f90: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126F94u;
        goto label_fallthrough_0x126f8c;
    }
    ctx->pc = 0x126F8Cu;
    {
        const bool branch_taken_0x126f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F8Cu;
        // 0x126f90: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f8c) {
            ctx->pc = 0x126F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126f40;
        }
    }
label_fallthrough_0x126f8c:
    ctx->pc = 0x126F94u;
}
