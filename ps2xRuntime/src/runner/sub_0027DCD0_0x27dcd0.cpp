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

// Function: sub_0027DCD0
// Address: 0x27dcd0 - 0x27df18
void sub_0027DCD0_0x27dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DCD0_0x27dcd0");
#endif

    switch (ctx->pc) {
        case 0x27de98u: goto label_27de98;
        case 0x27debcu: goto label_27debc;
        case 0x27dee0u: goto label_27dee0;
        default: break;
    }

    ctx->pc = 0x27dcd0u;

    // 0x27dcd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27dcd4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27dcd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27dcdc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x27dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27dce0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27dce4: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27dce8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27dcec: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x27dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
    // 0x27dcf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27dcf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27dcf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27dcf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27dcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27dd00: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x27dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27dd04: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27dd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27dd0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27dd10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27dd14: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DD14u;
    {
        const bool branch_taken_0x27dd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD14u;
        // 0x27dd18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd14) {
            ctx->pc = 0x27DD30u;
            goto label_27dd30;
        }
    }
    ctx->pc = 0x27DD1Cu;
    // 0x27dd1c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27dd1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27dd20: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27dd24: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DD24u;
    {
        const bool branch_taken_0x27dd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27dd24) {
            ctx->pc = 0x27DD30u;
            goto label_27dd30;
        }
    }
    ctx->pc = 0x27DD2Cu;
    // 0x27dd2c: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x27dd2cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_27dd30:
    // 0x27dd30: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x27dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27dd34: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x27dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27dd38: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x27dd38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x27dd3c: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27dd40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27dd44: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
    // 0x27dd48: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x27dd48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dd4c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27dd50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27DD50u;
    {
        const bool branch_taken_0x27dd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD50u;
        // 0x27dd54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd50) {
            ctx->pc = 0x27DD70u;
            goto label_27dd70;
        }
    }
    ctx->pc = 0x27DD58u;
    // 0x27dd58: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x27dd58u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27dd5c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x27dd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27dd60: 0x15280003  bne         $t1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DD60u;
    {
        const bool branch_taken_0x27dd60 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x27dd60) {
            ctx->pc = 0x27DD70u;
            goto label_27dd70;
        }
    }
    ctx->pc = 0x27DD68u;
    // 0x27dd68: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x27dd68u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x27dd6c: 0x0  nop
    ctx->pc = 0x27dd6cu;
    // NOP
label_27dd70:
    // 0x27dd70: 0x3c08008c  lui         $t0, 0x8C
    ctx->pc = 0x27dd70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)140 << 16));
    // 0x27dd74: 0x25080992  addiu       $t0, $t0, 0x992
    ctx->pc = 0x27dd74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2450));
    // 0x27dd78: 0x315000ff  andi        $s0, $t2, 0xFF
    ctx->pc = 0x27dd78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x27dd7c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x27dd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27dd80: 0x910a0000  lbu         $t2, 0x0($t0)
    ctx->pc = 0x27dd80u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27dd84: 0x31480008  andi        $t0, $t2, 0x8
    ctx->pc = 0x27dd84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
    // 0x27dd88: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x27DD88u;
    {
        const bool branch_taken_0x27dd88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD88u;
        // 0x27dd8c: 0x3c09008c  lui         $t1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd88) {
            ctx->pc = 0x27DDB8u;
            goto label_27ddb8;
        }
    }
    ctx->pc = 0x27DD90u;
    // 0x27dd90: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x27dd90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27dd94: 0x252931a8  addiu       $t1, $t1, 0x31A8
    ctx->pc = 0x27dd94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12712));
    // 0x27dd98: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x27dd98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x27dd9c: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x27dd9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27dda0: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x27dda0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27dda4: 0x11280004  beq         $t1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DDA4u;
    {
        const bool branch_taken_0x27dda4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x27dda4) {
            ctx->pc = 0x27DDB8u;
            goto label_27ddb8;
        }
    }
    ctx->pc = 0x27DDACu;
    // 0x27ddac: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x27DDACu;
    {
        const bool branch_taken_0x27ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDACu;
        // 0x27ddb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddac) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DDB4u;
    // 0x27ddb4: 0x0  nop
    ctx->pc = 0x27ddb4u;
    // NOP
label_27ddb8:
    // 0x27ddb8: 0x31480010  andi        $t0, $t2, 0x10
    ctx->pc = 0x27ddb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
    // 0x27ddbc: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x27DDBCu;
    {
        const bool branch_taken_0x27ddbc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDBCu;
        // 0x27ddc0: 0x3c09008c  lui         $t1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddbc) {
            ctx->pc = 0x27DDE8u;
            goto label_27dde8;
        }
    }
    ctx->pc = 0x27DDC4u;
    // 0x27ddc4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x27ddc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ddc8: 0x252931a8  addiu       $t1, $t1, 0x31A8
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12712));
    // 0x27ddcc: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x27ddccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x27ddd0: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x27ddd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27ddd4: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x27ddd4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x27ddd8: 0x15280003  bne         $t1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DDD8u;
    {
        const bool branch_taken_0x27ddd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x27ddd8) {
            ctx->pc = 0x27DDE8u;
            goto label_27dde8;
        }
    }
    ctx->pc = 0x27DDE0u;
    // 0x27dde0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x27DDE0u;
    {
        const bool branch_taken_0x27dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDE0u;
        // 0x27dde4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dde0) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DDE8u;
label_27dde8:
    // 0x27dde8: 0x31480002  andi        $t0, $t2, 0x2
    ctx->pc = 0x27dde8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2);
    // 0x27ddec: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x27DDECu;
    {
        const bool branch_taken_0x27ddec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddec) {
            ctx->pc = 0x27DE18u;
            goto label_27de18;
        }
    }
    ctx->pc = 0x27DDF4u;
    // 0x27ddf4: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x27DDF4u;
    {
        const bool branch_taken_0x27ddf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddf4) {
            ctx->pc = 0x27DE38u;
            goto label_27de38;
        }
    }
    ctx->pc = 0x27DDFCu;
    // 0x27ddfc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x27DDFCu;
    {
        const bool branch_taken_0x27ddfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddfc) {
            ctx->pc = 0x27DE38u;
            goto label_27de38;
        }
    }
    ctx->pc = 0x27DE04u;
    // 0x27de04: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27DE04u;
    {
        const bool branch_taken_0x27de04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x27de04) {
            ctx->pc = 0x27DE38u;
            goto label_27de38;
        }
    }
    ctx->pc = 0x27DE0Cu;
    // 0x27de0c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x27DE0Cu;
    {
        const bool branch_taken_0x27de0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE0Cu;
        // 0x27de10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de0c) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DE14u;
    // 0x27de14: 0x0  nop
    ctx->pc = 0x27de14u;
    // NOP
label_27de18:
    // 0x27de18: 0x14d10003  bne         $a2, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE18u;
    {
        const bool branch_taken_0x27de18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x27de18) {
            ctx->pc = 0x27DE28u;
            goto label_27de28;
        }
    }
    ctx->pc = 0x27DE20u;
    // 0x27de20: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x27DE20u;
    {
        const bool branch_taken_0x27de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE20u;
        // 0x27de24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de20) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DE28u;
label_27de28:
    // 0x27de28: 0x14910003  bne         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE28u;
    {
        const bool branch_taken_0x27de28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x27de28) {
            ctx->pc = 0x27DE38u;
            goto label_27de38;
        }
    }
    ctx->pc = 0x27DE30u;
    // 0x27de30: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x27DE30u;
    {
        const bool branch_taken_0x27de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE30u;
        // 0x27de34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de30) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DE38u;
label_27de38:
    // 0x27de38: 0x3c08008c  lui         $t0, 0x8C
    ctx->pc = 0x27de38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)140 << 16));
    // 0x27de3c: 0x25080960  addiu       $t0, $t0, 0x960
    ctx->pc = 0x27de3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2400));
    // 0x27de40: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x27de40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27de44: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x27de44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27de48: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DE48u;
    {
        const bool branch_taken_0x27de48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de48) {
            ctx->pc = 0x27DE60u;
            goto label_27de60;
        }
    }
    ctx->pc = 0x27DE50u;
    // 0x27de50: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE50u;
    {
        const bool branch_taken_0x27de50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27de50) {
            ctx->pc = 0x27DE60u;
            goto label_27de60;
        }
    }
    ctx->pc = 0x27DE58u;
    // 0x27de58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27DE58u;
    {
        const bool branch_taken_0x27de58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE58u;
        // 0x27de5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de58) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DE60u;
label_27de60:
    // 0x27de60: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27de60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27de64: 0x244231b0  addiu       $v0, $v0, 0x31B0
    ctx->pc = 0x27de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12720));
    // 0x27de68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27de6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27de70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DE70u;
    {
        const bool branch_taken_0x27de70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de70) {
            ctx->pc = 0x27DE88u;
            goto label_27de88;
        }
    }
    ctx->pc = 0x27DE78u;
    // 0x27de78: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE78u;
    {
        const bool branch_taken_0x27de78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x27de78) {
            ctx->pc = 0x27DE88u;
            goto label_27de88;
        }
    }
    ctx->pc = 0x27DE80u;
    // 0x27de80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x27DE80u;
    {
        const bool branch_taken_0x27de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE80u;
        // 0x27de84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de80) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DE88u;
label_27de88:
    // 0x27de88: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x27DE88u;
    {
        const bool branch_taken_0x27de88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de88) {
            ctx->pc = 0x27DEA8u;
            goto label_27dea8;
        }
    }
    ctx->pc = 0x27DE90u;
    // 0x27de90: 0xc0c0894  jal         func_302250
    ctx->pc = 0x27DE90u;
    SET_GPR_U32(ctx, 31, 0x27DE98u);
    ctx->pc = 0x27DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE90u;
    // 0x27de94: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x27DE90u, 0x27DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE98u;
label_27de98:
    // 0x27de98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE98u;
    {
        const bool branch_taken_0x27de98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de98) {
            ctx->pc = 0x27DEA8u;
            goto label_27dea8;
        }
    }
    ctx->pc = 0x27DEA0u;
    // 0x27dea0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27DEA0u;
    {
        const bool branch_taken_0x27dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEA0u;
        // 0x27dea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dea0) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DEA8u;
label_27dea8:
    // 0x27dea8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DEA8u;
    {
        const bool branch_taken_0x27dea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dea8) {
            ctx->pc = 0x27DED0u;
            goto label_27ded0;
        }
    }
    ctx->pc = 0x27DEB0u;
    // 0x27deb0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27deb4: 0xc0c0894  jal         func_302250
    ctx->pc = 0x27DEB4u;
    SET_GPR_U32(ctx, 31, 0x27DEBCu);
    ctx->pc = 0x27DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEB4u;
    // 0x27deb8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x27DEB4u, 0x27DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEBCu;
label_27debc:
    // 0x27debc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DEBCu;
    {
        const bool branch_taken_0x27debc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27debc) {
            ctx->pc = 0x27DED0u;
            goto label_27ded0;
        }
    }
    ctx->pc = 0x27DEC4u;
    // 0x27dec4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27DEC4u;
    {
        const bool branch_taken_0x27dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEC4u;
        // 0x27dec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dec4) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DECCu;
    // 0x27decc: 0x0  nop
    ctx->pc = 0x27deccu;
    // NOP
label_27ded0:
    // 0x27ded0: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x27ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x27ded4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27ded4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ded8: 0xc09e838  jal         func_27A0E0
    ctx->pc = 0x27DED8u;
    SET_GPR_U32(ctx, 31, 0x27DEE0u);
    ctx->pc = 0x27DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DED8u;
    // 0x27dedc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0E0u, 0x27DED8u, 0x27DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEE0u;
label_27dee0:
    // 0x27dee0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DEE0u;
    {
        const bool branch_taken_0x27dee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dee0) {
            ctx->pc = 0x27DEF0u;
            goto label_27def0;
        }
    }
    ctx->pc = 0x27DEE8u;
    // 0x27dee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DEE8u;
    {
        const bool branch_taken_0x27dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEE8u;
        // 0x27deec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dee8) {
            ctx->pc = 0x27DEF8u;
            goto label_27def8;
        }
    }
    ctx->pc = 0x27DEF0u;
label_27def0:
    // 0x27def0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27def0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27def4: 0x0  nop
    ctx->pc = 0x27def4u;
    // NOP
label_27def8:
    // 0x27def8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27def8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27defc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27defcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27df00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27df00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27df04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27df04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27df08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27df08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27df0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27df0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27df10: 0x3e00008  jr          $ra
    ctx->pc = 0x27DF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF10u;
        // 0x27df14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DF18u;
}
