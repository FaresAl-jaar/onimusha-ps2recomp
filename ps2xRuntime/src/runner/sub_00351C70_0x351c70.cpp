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

// Function: sub_00351C70
// Address: 0x351c70 - 0x351db8
void sub_00351C70_0x351c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351C70_0x351c70");
#endif

    switch (ctx->pc) {
        case 0x351d8cu: goto label_351d8c;
        default: break;
    }

    ctx->pc = 0x351c70u;

    // 0x351c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351c74: 0x6643c  dsll32      $t4, $a2, 16
    ctx->pc = 0x351c74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 16));
    // 0x351c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351c7c: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x351c7cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x351c80: 0x5800005  bltz        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x351C80u;
    {
        const bool branch_taken_0x351c80 = (GPR_S64(ctx, 12) < 0);
        ctx->pc = 0x351C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C80u;
        // 0x351c84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c80) {
            ctx->pc = 0x351C98u;
            goto label_351c98;
        }
    }
    ctx->pc = 0x351C88u;
    // 0x351c88: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x351c88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x351c8c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x351c8cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x351c90: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x351C90u;
    {
        const bool branch_taken_0x351c90 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x351c90) {
            ctx->pc = 0x351CA0u;
            goto label_351ca0;
        }
    }
    ctx->pc = 0x351C98u;
label_351c98:
    // 0x351c98: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x351C98u;
    {
        const bool branch_taken_0x351c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c98) {
            ctx->pc = 0x351DA8u;
            goto label_351da8;
        }
    }
    ctx->pc = 0x351CA0u;
label_351ca0:
    // 0x351ca0: 0x316300ff  andi        $v1, $t3, 0xFF
    ctx->pc = 0x351ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x351ca4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x351ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x351ca8: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x351ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x351cac: 0x2463a0a0  addiu       $v1, $v1, -0x5F60
    ctx->pc = 0x351cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942880));
    // 0x351cb0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x351cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x351cb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x351cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x351cb8: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x351CB8u;
    {
        const bool branch_taken_0x351cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CB8u;
        // 0x351cbc: 0xc3100  sll         $a2, $t4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351cb8) {
            ctx->pc = 0x351DA8u;
            goto label_351da8;
        }
    }
    ctx->pc = 0x351CC0u;
    // 0x351cc0: 0x71500  sll         $v0, $a3, 20
    ctx->pc = 0x351cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x351cc4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x351cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x351cc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x351cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x351ccc: 0x81602  srl         $v0, $t0, 24
    ctx->pc = 0x351cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x351cd0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x351cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x351cd4: 0x8423c  dsll32      $t0, $t0, 8
    ctx->pc = 0x351cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 8));
    // 0x351cd8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x351cd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x351cdc: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x351cdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x351ce0: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x351ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x351ce4: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x351ce4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x351ce8: 0x8c2efc90  lw          $t6, -0x370($at)
    ctx->pc = 0x351ce8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x351cec: 0x3c072028  lui         $a3, 0x2028
    ctx->pc = 0x351cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8232 << 16));
    // 0x351cf0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x351cf0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x351cf4: 0x34eb0156  ori         $t3, $a3, 0x156
    ctx->pc = 0x351cf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)342);
    // 0x351cf8: 0x240dfff0  addiu       $t5, $zero, -0x10
    ctx->pc = 0x351cf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x351cfc: 0x24870700  addiu       $a3, $a0, 0x700
    ctx->pc = 0x351cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x351d00: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x351d00u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x351d04: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x351d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x351d08: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x351d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x351d0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x351d0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x351d10: 0x25c7000f  addiu       $a3, $t6, 0xF
    ctx->pc = 0x351d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 15));
    // 0x351d14: 0x24840f20  addiu       $a0, $a0, 0xF20
    ctx->pc = 0x351d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3872));
    // 0x351d18: 0xed8024  and         $s0, $a3, $t5
    ctx->pc = 0x351d18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & GPR_U64(ctx, 13));
    // 0x351d1c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x351d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x351d20: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x351d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x351d24: 0x424c0  sll         $a0, $a0, 19
    ctx->pc = 0x351d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
    // 0x351d28: 0xae0b0004  sw          $t3, 0x4($s0)
    ctx->pc = 0x351d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 11));
    // 0x351d2c: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x351d2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x351d30: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x351d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x351d34: 0x3405fffc  ori         $a1, $zero, 0xFFFC
    ctx->pc = 0x351d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x351d38: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x351d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x351d3c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x351d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x351d40: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x351d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x351d44: 0x34872000  ori         $a3, $a0, 0x2000
    ctx->pc = 0x351d44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x351d48: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x351d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x351d4c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x351d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x351d50: 0xae090018  sw          $t1, 0x18($s0)
    ctx->pc = 0x351d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x351d54: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x351d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x351d58: 0xae0a001c  sw          $t2, 0x1C($s0)
    ctx->pc = 0x351d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 10));
    // 0x351d5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x351d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351d60: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x351d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x351d64: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x351d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x351d68: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x351d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351d6c: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x351d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x351d70: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x351d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351d74: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x351d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x351d78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x351d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x351d7c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x351d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x351d80: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x351d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x351d84: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x351D84u;
    SET_GPR_U32(ctx, 31, 0x351D8Cu);
    ctx->pc = 0x351D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D84u;
    // 0x351d88: 0xa202000f  sb          $v0, 0xF($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x351D84u, 0x351D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D8Cu;
label_351d8c:
    // 0x351d8c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x351d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x351d90: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x351d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x351d94: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x351d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x351d98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x351d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x351d9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x351d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x351da0: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x351da0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x351da4: 0x0  nop
    ctx->pc = 0x351da4u;
    // NOP
label_351da8:
    // 0x351da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351db0: 0x3e00008  jr          $ra
    ctx->pc = 0x351DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DB0u;
        // 0x351db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351DB8u;
}
