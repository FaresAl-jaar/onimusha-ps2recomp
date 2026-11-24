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

// Function: sub_003B2C40
// Address: 0x3b2c40 - 0x3b2e88
void sub_003B2C40_0x3b2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2C40_0x3b2c40");
#endif

    switch (ctx->pc) {
        case 0x3b2d8cu: goto label_3b2d8c;
        case 0x3b2db4u: goto label_3b2db4;
        default: break;
    }

    ctx->pc = 0x3b2c40u;

    // 0x3b2c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b2c44: 0x2406fdff  addiu       $a2, $zero, -0x201
    ctx->pc = 0x3b2c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x3b2c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b2c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b2c4c: 0x2405fbff  addiu       $a1, $zero, -0x401
    ctx->pc = 0x3b2c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x3b2c50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b2c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b2c54: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3b2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3b2c58: 0x8c870124  lw          $a3, 0x124($a0)
    ctx->pc = 0x3b2c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x3b2c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b2c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2c60: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x3b2c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x3b2c64: 0xac860124  sw          $a2, 0x124($a0)
    ctx->pc = 0x3b2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 6));
    // 0x3b2c68: 0x8c860124  lw          $a2, 0x124($a0)
    ctx->pc = 0x3b2c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x3b2c6c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3b2c6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3b2c70: 0xac850124  sw          $a1, 0x124($a0)
    ctx->pc = 0x3b2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 5));
    // 0x3b2c74: 0x8c840124  lw          $a0, 0x124($a0)
    ctx->pc = 0x3b2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x3b2c78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b2c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b2c7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2C7Cu;
    {
        const bool branch_taken_0x3b2c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C7Cu;
        // 0x3b2c80: 0x3c03ff7f  lui         $v1, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c7c) {
            ctx->pc = 0x3B2C98u;
            goto label_3b2c98;
        }
    }
    ctx->pc = 0x3B2C84u;
    // 0x3b2c84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3b2c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3b2c88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b2c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b2c8c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3B2C8Cu;
    {
        const bool branch_taken_0x3b2c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C8Cu;
        // 0x3b2c90: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c8c) {
            ctx->pc = 0x3B2E78u;
            goto label_3b2e78;
        }
    }
    ctx->pc = 0x3B2C94u;
    // 0x3b2c94: 0x0  nop
    ctx->pc = 0x3b2c94u;
    // NOP
label_3b2c98:
    // 0x3b2c98: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3b2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2c9c: 0xdc650510  ld          $a1, 0x510($v1)
    ctx->pc = 0x3b2c9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 1296)));
    // 0x3b2ca0: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3b2ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3b2ca4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2CA4u;
    {
        const bool branch_taken_0x3b2ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CA4u;
        // 0x3b2ca8: 0x34830400  ori         $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ca4) {
            ctx->pc = 0x3B2CB8u;
            goto label_3b2cb8;
        }
    }
    ctx->pc = 0x3B2CACu;
    // 0x3b2cac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2CACu;
    {
        const bool branch_taken_0x3b2cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CACu;
        // 0x3b2cb0: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2cac) {
            ctx->pc = 0x3B2CC8u;
            goto label_3b2cc8;
        }
    }
    ctx->pc = 0x3B2CB4u;
    // 0x3b2cb4: 0x0  nop
    ctx->pc = 0x3b2cb4u;
    // NOP
label_3b2cb8:
    // 0x3b2cb8: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3b2cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3b2cbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B2CBCu;
    {
        const bool branch_taken_0x3b2cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CBCu;
        // 0x3b2cc0: 0x34830200  ori         $v1, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2cbc) {
            ctx->pc = 0x3B2CC8u;
            goto label_3b2cc8;
        }
    }
    ctx->pc = 0x3B2CC4u;
    // 0x3b2cc4: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3b2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_3b2cc8:
    // 0x3b2cc8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3b2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2ccc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b2cd0: 0x24635f20  addiu       $v1, $v1, 0x5F20
    ctx->pc = 0x3b2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24352));
    // 0x3b2cd4: 0x90850641  lbu         $a1, 0x641($a0)
    ctx->pc = 0x3b2cd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x3b2cd8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3b2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3b2cdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2ce0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3b2ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3b2ce4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3b2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2ce8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b2cec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b2cf0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3b2cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b2cf4: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x3b2cf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3b2cf8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3B2CF8u;
    {
        const bool branch_taken_0x3b2cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CF8u;
        // 0x3b2cfc: 0x3c043d8e  lui         $a0, 0x3D8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15758 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2cf8) {
            ctx->pc = 0x3B2D28u;
            goto label_3b2d28;
        }
    }
    ctx->pc = 0x3B2D00u;
    // 0x3b2d00: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3b2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3b2d04: 0x3484fa36  ori         $a0, $a0, 0xFA36
    ctx->pc = 0x3b2d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64054);
    // 0x3b2d08: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x3b2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x3b2d0c: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x3b2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2d10: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x3b2d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x3b2d14: 0xae040124  sw          $a0, 0x124($s0)
    ctx->pc = 0x3b2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 4));
    // 0x3b2d18: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x3b2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2d1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b2d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b2d20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B2D20u;
    {
        const bool branch_taken_0x3b2d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D20u;
        // 0x3b2d24: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d20) {
            ctx->pc = 0x3B2D58u;
            goto label_3b2d58;
        }
    }
    ctx->pc = 0x3B2D28u;
label_3b2d28:
    // 0x3b2d28: 0x286100f6  slti        $at, $v1, 0xF6
    ctx->pc = 0x3b2d28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)246) ? 1 : 0);
    // 0x3b2d2c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3B2D2Cu;
    {
        const bool branch_taken_0x3b2d2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D2Cu;
        // 0x3b2d30: 0x3c043d8e  lui         $a0, 0x3D8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15758 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d2c) {
            ctx->pc = 0x3B2D58u;
            goto label_3b2d58;
        }
    }
    ctx->pc = 0x3B2D34u;
    // 0x3b2d34: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3b2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3b2d38: 0x3484fa36  ori         $a0, $a0, 0xFA36
    ctx->pc = 0x3b2d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64054);
    // 0x3b2d3c: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x3b2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x3b2d40: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x3b2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2d44: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x3b2d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x3b2d48: 0xae040124  sw          $a0, 0x124($s0)
    ctx->pc = 0x3b2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 4));
    // 0x3b2d4c: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x3b2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2d50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b2d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b2d54: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3b2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_3b2d58:
    // 0x3b2d58: 0x92030120  lbu         $v1, 0x120($s0)
    ctx->pc = 0x3b2d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x3b2d5c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B2D5Cu;
    {
        const bool branch_taken_0x3b2d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2d5c) {
            ctx->pc = 0x3B2D80u;
            goto label_3b2d80;
        }
    }
    ctx->pc = 0x3B2D64u;
    // 0x3b2d64: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3b2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2d68: 0xdc630500  ld          $v1, 0x500($v1)
    ctx->pc = 0x3b2d68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 1280)));
    // 0x3b2d6c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3b2d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3b2d70: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3B2D70u;
    {
        const bool branch_taken_0x3b2d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D70u;
        // 0x3b2d74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d70) {
            ctx->pc = 0x3B2E78u;
            goto label_3b2e78;
        }
    }
    ctx->pc = 0x3B2D78u;
    // 0x3b2d78: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3B2D78u;
    {
        const bool branch_taken_0x3b2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D78u;
        // 0x3b2d7c: 0xa2030120  sb          $v1, 0x120($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 288), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d78) {
            ctx->pc = 0x3B2E78u;
            goto label_3b2e78;
        }
    }
    ctx->pc = 0x3B2D80u;
label_3b2d80:
    // 0x3b2d80: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3b2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3b2d84: 0xc054568  jal         func_1515A0
    ctx->pc = 0x3B2D84u;
    SET_GPR_U32(ctx, 31, 0x3B2D8Cu);
    ctx->pc = 0x3B2D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2D84u;
    // 0x3b2d88: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x3B2D84u, 0x3B2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D8Cu;
label_3b2d8c:
    // 0x3b2d8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2D8Cu;
    {
        const bool branch_taken_0x3b2d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2d8c) {
            ctx->pc = 0x3B2DA8u;
            goto label_3b2da8;
        }
    }
    ctx->pc = 0x3B2D94u;
    // 0x3b2d94: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3b2d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2d98: 0x8c6306c8  lw          $v1, 0x6C8($v1)
    ctx->pc = 0x3b2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1736)));
    // 0x3b2d9c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3b2d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3b2da0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B2DA0u;
    {
        const bool branch_taken_0x3b2da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2da0) {
            ctx->pc = 0x3B2E30u;
            goto label_3b2e30;
        }
    }
    ctx->pc = 0x3B2DA8u;
label_3b2da8:
    // 0x3b2da8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3b2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3b2dac: 0xc054568  jal         func_1515A0
    ctx->pc = 0x3B2DACu;
    SET_GPR_U32(ctx, 31, 0x3B2DB4u);
    ctx->pc = 0x3B2DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2DACu;
    // 0x3b2db0: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x3B2DACu, 0x3B2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2DB4u;
label_3b2db4:
    // 0x3b2db4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B2DB4u;
    {
        const bool branch_taken_0x3b2db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2db4) {
            ctx->pc = 0x3B2DF8u;
            goto label_3b2df8;
        }
    }
    ctx->pc = 0x3B2DBCu;
    // 0x3b2dbc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3b2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2dc0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b2dc4: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x3b2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x3b2dc8: 0x90850641  lbu         $a1, 0x641($a0)
    ctx->pc = 0x3b2dc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x3b2dcc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3b2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3b2dd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2dd4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3b2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3b2dd8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3b2dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2ddc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b2ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b2de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b2de4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b2de8: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3b2de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x3b2dec: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B2DECu;
    {
        const bool branch_taken_0x3b2dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2dec) {
            ctx->pc = 0x3B2E30u;
            goto label_3b2e30;
        }
    }
    ctx->pc = 0x3B2DF4u;
    // 0x3b2df4: 0x0  nop
    ctx->pc = 0x3b2df4u;
    // NOP
label_3b2df8:
    // 0x3b2df8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3b2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3b2dfc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b2e00: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x3b2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x3b2e04: 0x90850641  lbu         $a1, 0x641($a0)
    ctx->pc = 0x3b2e04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x3b2e08: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3b2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3b2e0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b2e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2e10: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3b2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3b2e14: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3b2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2e18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b2e1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b2e20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b2e24: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3b2e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3b2e28: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B2E28u;
    {
        const bool branch_taken_0x3b2e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2e28) {
            ctx->pc = 0x3B2E78u;
            goto label_3b2e78;
        }
    }
    ctx->pc = 0x3B2E30u;
label_3b2e30:
    // 0x3b2e30: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x3b2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
    // 0x3b2e34: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x3b2e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x3b2e38: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x3b2e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3b2e3c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3b2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x3b2e40: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x3b2e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3b2e44: 0x8e060124  lw          $a2, 0x124($s0)
    ctx->pc = 0x3b2e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2e48: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3b2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3b2e4c: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x3b2e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x3b2e50: 0xae060124  sw          $a2, 0x124($s0)
    ctx->pc = 0x3b2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 6));
    // 0x3b2e54: 0x8e060124  lw          $a2, 0x124($s0)
    ctx->pc = 0x3b2e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2e58: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3b2e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3b2e5c: 0xae050124  sw          $a1, 0x124($s0)
    ctx->pc = 0x3b2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 5));
    // 0x3b2e60: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x3b2e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2e64: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3b2e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3b2e68: 0xae040124  sw          $a0, 0x124($s0)
    ctx->pc = 0x3b2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 4));
    // 0x3b2e6c: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x3b2e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b2e70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b2e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b2e74: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3b2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_3b2e78:
    // 0x3b2e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b2e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2e80: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E80u;
        // 0x3b2e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2E88u;
}
