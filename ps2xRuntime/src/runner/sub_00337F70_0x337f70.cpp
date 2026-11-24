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

// Function: sub_00337F70
// Address: 0x337f70 - 0x3381c8
void sub_00337F70_0x337f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337F70_0x337f70");
#endif

    ctx->pc = 0x337f70u;

    // 0x337f70: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x337f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x337f74: 0x28630035  slti        $v1, $v1, 0x35
    ctx->pc = 0x337f74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x337f78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337F78u;
    {
        const bool branch_taken_0x337f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337f78) {
            ctx->pc = 0x337F88u;
            goto label_337f88;
        }
    }
    ctx->pc = 0x337F80u;
    // 0x337f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f84: 0x0  nop
    ctx->pc = 0x337f84u;
    // NOP
label_337f88:
    // 0x337f88: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x337f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x337f8c: 0x28610035  slti        $at, $v1, 0x35
    ctx->pc = 0x337f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x337f90: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x337F90u;
    {
        const bool branch_taken_0x337f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337f90) {
            ctx->pc = 0x337FA8u;
            goto label_337fa8;
        }
    }
    ctx->pc = 0x337F98u;
    // 0x337f98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x337f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337f9c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x337f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x337fa0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x337fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x337fa4: 0x0  nop
    ctx->pc = 0x337fa4u;
    // NOP
label_337fa8:
    // 0x337fa8: 0xa4850008  sh          $a1, 0x8($a0)
    ctx->pc = 0x337fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x337fac: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x337facu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x337fb0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x337fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x337fb4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x337fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x337fb8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x337fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x337fbc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x337fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x337fc0: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x337fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x337fc4: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x337fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x337fc8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x337fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x337fcc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x337fccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x337fd0: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x337fd0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x337fd4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x337fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x337fd8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x337fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x337fdc: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x337fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x337fe0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x337fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x337fe4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x337fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x337fe8: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x337fe8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x337fec: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x337fecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x337ff0: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x337ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x337ff4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x337ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x337ff8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x337ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x337ffc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x337ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338000: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338004: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338008: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338008u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33800c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33800cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338010: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x338010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x338014: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338018: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x338018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33801c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33801cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338020: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338024: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338028: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338028u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33802c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33802cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338030: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x338030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x338034: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338034u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338038: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x338038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x33803c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33803cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338040: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338044: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338048: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338048u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33804c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33804cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338050: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x338050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x338054: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338058: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x338058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x33805c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33805cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338060: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338064: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338068: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338068u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33806c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33806cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338070: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x338070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x338074: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338074u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338078: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x338078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x33807c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33807cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338080: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338084: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338088: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338088u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33808c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33808cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338090: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x338090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x338094: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338094u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338098: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x338098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x33809c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33809cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3380a0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3380a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3380a4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3380a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3380a8: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x3380a8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3380ac: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3380acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3380b0: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x3380b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x3380b4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3380b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3380b8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3380b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3380bc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3380bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3380c0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3380c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3380c4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3380c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3380c8: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x3380c8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3380cc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3380ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3380d0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3380d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3380d4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3380d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3380d8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3380d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3380dc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3380dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3380e0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3380e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3380e4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3380e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3380e8: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x3380e8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3380ec: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3380ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3380f0: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x3380f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x3380f4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3380f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3380f8: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x3380f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x3380fc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3380fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338100: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338104: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338108: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338108u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33810c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33810cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338110: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x338110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x338114: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338114u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338118: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x338118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x33811c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33811cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338120: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338124: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338124u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338128: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338128u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33812c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33812cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338130: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x338130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x338134: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338134u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338138: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x338138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x33813c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33813cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338140: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338144: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338144u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338148: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338148u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33814c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33814cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338150: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x338150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x338154: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338154u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338158: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x338158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x33815c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33815cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338160: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338164: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338168: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x338168u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33816c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x33816cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338170: 0x25080037  addiu       $t0, $t0, 0x37
    ctx->pc = 0x338170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 55));
    // 0x338174: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x338174u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x338178: 0x25080007  addiu       $t0, $t0, 0x7
    ctx->pc = 0x338178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x33817c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33817cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x338180: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x338180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x338184: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x338184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x338188: 0x94870008  lhu         $a3, 0x8($a0)
    ctx->pc = 0x338188u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33818c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338190: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x338190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x338194: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x338194u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x338198: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x338198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x33819c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x33819cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3381a0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3381a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3381a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3381a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3381a8: 0x90c40e0e  lbu         $a0, 0xE0E($a2)
    ctx->pc = 0x3381a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3598)));
    // 0x3381ac: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3381ACu;
    {
        const bool branch_taken_0x3381ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3381B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381ACu;
        // 0x3381b0: 0x24c30e0e  addiu       $v1, $a2, 0xE0E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381ac) {
            ctx->pc = 0x3381C0u;
            goto label_3381c0;
        }
    }
    ctx->pc = 0x3381B4u;
    // 0x3381b4: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x3381b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x3381b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3381b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3381bc: 0x0  nop
    ctx->pc = 0x3381bcu;
    // NOP
label_3381c0:
    // 0x3381c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3381C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3381C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3381C8u;
}
