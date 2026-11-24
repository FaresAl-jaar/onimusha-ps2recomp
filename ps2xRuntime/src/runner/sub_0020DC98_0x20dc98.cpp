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

// Function: sub_0020DC98
// Address: 0x20dc98 - 0x20ddec
void sub_0020DC98_0x20dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DC98_0x20dc98");
#endif

    switch (ctx->pc) {
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcd8u: goto label_20dcd8;
        case 0x20dce8u: goto label_20dce8;
        case 0x20dd28u: goto label_20dd28;
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20ddc4u: goto label_20ddc4;
        case 0x20ddccu: goto label_20ddcc;
        default: break;
    }

    ctx->pc = 0x20dc98u;

    // 0x20dc98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20dc9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20dca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20dca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20dca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20dcac: 0x263035b0  addiu       $s0, $s1, 0x35B0
    ctx->pc = 0x20dcacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13744));
    // 0x20dcb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20dcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20dcb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20dcb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20dcbc: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20DCBCu;
    SET_GPR_U32(ctx, 31, 0x20DCC4u);
    ctx->pc = 0x20DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCBCu;
    // 0x20dcc0: 0x263335a8  addiu       $s3, $s1, 0x35A8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 13736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20DCBCu, 0x20DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCC4u;
label_20dcc4:
    // 0x20dcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20dcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dcc8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x20DCC8u;
    {
        const bool branch_taken_0x20dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCC8u;
        // 0x20dccc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcc8) {
            ctx->pc = 0x20DDD0u;
            goto label_20ddd0;
        }
    }
    ctx->pc = 0x20DCD0u;
    // 0x20dcd0: 0xc08377c  jal         func_20DDF0
    ctx->pc = 0x20DCD0u;
    SET_GPR_U32(ctx, 31, 0x20DCD8u);
    ctx->pc = 0x20DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCD0u;
    // 0x20dcd4: 0xae332004  sw          $s3, 0x2004($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8196), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDF0u, 0x20DCD0u, 0x20DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCD8u;
label_20dcd8:
    // 0x20dcd8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x20DCD8u;
    {
        const bool branch_taken_0x20dcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCD8u;
        // 0x20dcdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcd8) {
            ctx->pc = 0x20DDD0u;
            goto label_20ddd0;
        }
    }
    ctx->pc = 0x20DCE0u;
    // 0x20dce0: 0xc0837ea  jal         func_20DFA8
    ctx->pc = 0x20DCE0u;
    SET_GPR_U32(ctx, 31, 0x20DCE8u);
    ctx->pc = 0x20DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFA8u, 0x20DCE0u, 0x20DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCE8u;
label_20dce8:
    // 0x20dce8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20dcec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20dcecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dcf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20dcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dcf4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DCF4u;
    {
        const bool branch_taken_0x20dcf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCF4u;
        // 0x20dcf8: 0x34a50c04  ori         $a1, $a1, 0xC04 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3076);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcf4) {
            ctx->pc = 0x20DD18u;
            goto label_20dd18;
        }
    }
    ctx->pc = 0x20DCFCu;
    // 0x20dcfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20dcfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dd00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20dd00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20dd04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20dd04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dd08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20dd08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20dd0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20dd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dd10: 0x80848e0  j           func_212380
    ctx->pc = 0x20DD10u;
    ctx->pc = 0x20DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD10u;
    // 0x20dd14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20DD18u;
label_20dd18:
    // 0x20dd18: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x20dd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20dd1c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20dd20: 0xc09422c  jal         func_2508B0
    ctx->pc = 0x20DD20u;
    SET_GPR_U32(ctx, 31, 0x20DD28u);
    ctx->pc = 0x20DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD20u;
    // 0x20dd24: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x20DD20u, 0x20DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD28u;
label_20dd28:
    // 0x20dd28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd2c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20dd2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd30: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20dd34: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x20dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x20dd38: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x20dd3c: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x20dd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x20dd40: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
    // 0x20dd44: 0x24abcc20  addiu       $t3, $a1, -0x33E0
    ctx->pc = 0x20dd44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954016));
    // 0x20dd48: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x20dd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd4c: 0x2628365c  addiu       $t0, $s1, 0x365C
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 13916));
    // 0x20dd50: 0x244acbe0  addiu       $t2, $v0, -0x3420
    ctx->pc = 0x20dd50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953952));
    // 0x20dd54: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x20dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x20dd58: 0x24c6cc40  addiu       $a2, $a2, -0x33C0
    ctx->pc = 0x20dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954048));
    // 0x20dd5c: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x20DD5Cu;
    {
        const bool branch_taken_0x20dd5c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD5Cu;
        // 0x20dd60: 0x24e7cc60  addiu       $a3, $a3, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd5c) {
            ctx->pc = 0x20DD88u;
            goto label_20dd88;
        }
    }
    ctx->pc = 0x20DD64u;
    // 0x20dd64: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20dd68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20dd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dd6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20dd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20dd70: 0x34a50c05  ori         $a1, $a1, 0xC05
    ctx->pc = 0x20dd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3077);
    // 0x20dd74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20dd74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dd78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20dd78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20dd7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20dd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dd80: 0x80848e0  j           func_212380
    ctx->pc = 0x20DD80u;
    ctx->pc = 0x20DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD80u;
    // 0x20dd84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20DD88u;
label_20dd88:
    // 0x20dd88: 0xae690004  sw          $t1, 0x4($s3)
    ctx->pc = 0x20dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 9));
    // 0x20dd8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20dd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd90: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x20dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x20dd94: 0xae282114  sw          $t0, 0x2114($s1)
    ctx->pc = 0x20dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8468), GPR_U32(ctx, 8));
    // 0x20dd98: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x20dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x20dd9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x20dda0: 0xad0a0004  sw          $t2, 0x4($t0)
    ctx->pc = 0x20dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
    // 0x20dda4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x20dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x20dda8: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x20dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x20ddac: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x20ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x20ddb0: 0xc08e68e  jal         func_239A38
    ctx->pc = 0x20DDB0u;
    SET_GPR_U32(ctx, 31, 0x20DDB8u);
    ctx->pc = 0x20DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDB0u;
    // 0x20ddb4: 0xad060010  sw          $a2, 0x10($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239A38u, 0x20DDB0u, 0x20DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDB8u;
label_20ddb8:
    // 0x20ddb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ddb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ddbc: 0xc083906  jal         func_20E418
    ctx->pc = 0x20DDBCu;
    SET_GPR_U32(ctx, 31, 0x20DDC4u);
    ctx->pc = 0x20DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDBCu;
    // 0x20ddc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E418u, 0x20DDBCu, 0x20DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDC4u;
label_20ddc4:
    // 0x20ddc4: 0xc08380a  jal         func_20E028
    ctx->pc = 0x20DDC4u;
    SET_GPR_U32(ctx, 31, 0x20DDCCu);
    ctx->pc = 0x20DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DDC4u;
    // 0x20ddc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E028u, 0x20DDC4u, 0x20DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDCCu;
label_20ddcc:
    // 0x20ddcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ddccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ddd0:
    // 0x20ddd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ddd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ddd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ddd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ddd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20ddd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20dddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20dde0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20dde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dde4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE4u;
        // 0x20dde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DDECu;
}
