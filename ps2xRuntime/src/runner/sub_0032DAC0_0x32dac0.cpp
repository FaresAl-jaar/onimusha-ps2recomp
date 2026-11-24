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

// Function: sub_0032DAC0
// Address: 0x32dac0 - 0x32dc08
void sub_0032DAC0_0x32dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DAC0_0x32dac0");
#endif

    switch (ctx->pc) {
        case 0x32daf8u: goto label_32daf8;
        case 0x32dbb8u: goto label_32dbb8;
        default: break;
    }

    ctx->pc = 0x32dac0u;

    // 0x32dac0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32dac4: 0x8f888ba8  lw          $t0, -0x7458($gp)
    ctx->pc = 0x32dac4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x32dac8: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x32dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32dacc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32daccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dad0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32dad4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x32dad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32dad8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x32dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32dadc: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x32dadcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32dae0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32dae4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32dae8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32daec: 0x24a59930  addiu       $a1, $a1, -0x66D0
    ctx->pc = 0x32daecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940976));
    // 0x32daf0: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x32daf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32daf4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x32daf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_32daf8:
    // 0x32daf8: 0x90aa0000  lbu         $t2, 0x0($a1)
    ctx->pc = 0x32daf8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32dafc: 0x80cb0021  lb          $t3, 0x21($a2)
    ctx->pc = 0x32dafcu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 33)));
    // 0x32db00: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x32db00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x32db04: 0x28e90009  slti        $t1, $a3, 0x9
    ctx->pc = 0x32db04u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x32db08: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db0c: 0xa14b0028  sb          $t3, 0x28($t2)
    ctx->pc = 0x32db0cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
    // 0x32db10: 0x90aa0001  lbu         $t2, 0x1($a1)
    ctx->pc = 0x32db10u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x32db14: 0x80cb0022  lb          $t3, 0x22($a2)
    ctx->pc = 0x32db14u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x32db18: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db1c: 0xa14b0028  sb          $t3, 0x28($t2)
    ctx->pc = 0x32db1cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
    // 0x32db20: 0x90aa0002  lbu         $t2, 0x2($a1)
    ctx->pc = 0x32db20u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x32db24: 0x80cb0023  lb          $t3, 0x23($a2)
    ctx->pc = 0x32db24u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 35)));
    // 0x32db28: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db2c: 0xa14b0028  sb          $t3, 0x28($t2)
    ctx->pc = 0x32db2cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
    // 0x32db30: 0x90aa0003  lbu         $t2, 0x3($a1)
    ctx->pc = 0x32db30u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x32db34: 0x80cb0024  lb          $t3, 0x24($a2)
    ctx->pc = 0x32db34u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x32db38: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db3c: 0xa14b0028  sb          $t3, 0x28($t2)
    ctx->pc = 0x32db3cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
    // 0x32db40: 0x90aa0004  lbu         $t2, 0x4($a1)
    ctx->pc = 0x32db40u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32db44: 0x80cb0025  lb          $t3, 0x25($a2)
    ctx->pc = 0x32db44u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 37)));
    // 0x32db48: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db4c: 0xa14b0028  sb          $t3, 0x28($t2)
    ctx->pc = 0x32db4cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
    // 0x32db50: 0x90aa0005  lbu         $t2, 0x5($a1)
    ctx->pc = 0x32db50u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x32db54: 0x80cb0026  lb          $t3, 0x26($a2)
    ctx->pc = 0x32db54u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x32db58: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db5c: 0xa14b0028  sb          $t3, 0x28($t2)
    ctx->pc = 0x32db5cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
    // 0x32db60: 0x90aa0006  lbu         $t2, 0x6($a1)
    ctx->pc = 0x32db60u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x32db64: 0x80cb0027  lb          $t3, 0x27($a2)
    ctx->pc = 0x32db64u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 39)));
    // 0x32db68: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db6c: 0xa14b0028  sb          $t3, 0x28($t2)
    ctx->pc = 0x32db6cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
    // 0x32db70: 0x90aa0007  lbu         $t2, 0x7($a1)
    ctx->pc = 0x32db70u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x32db74: 0x80cb0028  lb          $t3, 0x28($a2)
    ctx->pc = 0x32db74u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x32db78: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32db78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32db7c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x32db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x32db80: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x32db80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x32db84: 0x1520ffdc  bnez        $t1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x32DB84u;
    {
        const bool branch_taken_0x32db84 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB84u;
        // 0x32db88: 0xa14b0028  sb          $t3, 0x28($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db84) {
            ctx->pc = 0x32DAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32daf8;
        }
    }
    ctx->pc = 0x32DB8Cu;
    // 0x32db8c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32db90: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x32db90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32db94: 0x24a59930  addiu       $a1, $a1, -0x66D0
    ctx->pc = 0x32db94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940976));
    // 0x32db98: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x32db98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x32db9c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x32db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x32dba0: 0x80c60021  lb          $a2, 0x21($a2)
    ctx->pc = 0x32dba0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 33)));
    // 0x32dba4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x32dba4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32dba8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32dba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dbac: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x32dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x32dbb0: 0xa0a60028  sb          $a2, 0x28($a1)
    ctx->pc = 0x32dbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x32dbb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32dbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32dbb8:
    // 0x32dbb8: 0x312600ff  andi        $a2, $t1, 0xFF
    ctx->pc = 0x32dbb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x32dbbc: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x32dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x32dbc0: 0x80a50028  lb          $a1, 0x28($a1)
    ctx->pc = 0x32dbc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x32dbc4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32DBC4u;
    {
        const bool branch_taken_0x32dbc4 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x32dbc4) {
            ctx->pc = 0x32DBE8u;
            goto label_32dbe8;
        }
    }
    ctx->pc = 0x32DBCCu;
    // 0x32dbcc: 0x8d050024  lw          $a1, 0x24($t0)
    ctx->pc = 0x32dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x32dbd0: 0xc73014  dsllv       $a2, $a3, $a2
    ctx->pc = 0x32dbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x32dbd4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x32dbd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x32dbd8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x32dbd8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x32dbdc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x32dbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x32dbe0: 0xad050024  sw          $a1, 0x24($t0)
    ctx->pc = 0x32dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 5));
    // 0x32dbe4: 0x0  nop
    ctx->pc = 0x32dbe4u;
    // NOP
label_32dbe8:
    // 0x32dbe8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x32dbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x32dbec: 0x29210006  slti        $at, $t1, 0x6
    ctx->pc = 0x32dbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x32dbf0: 0x1420fff1  bnez        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x32DBF0u;
    {
        const bool branch_taken_0x32dbf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32dbf0) {
            ctx->pc = 0x32DBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32dbb8;
        }
    }
    ctx->pc = 0x32DBF8u;
    // 0x32dbf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32dbfc: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x32dbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x32dc00: 0x3e00008  jr          $ra
    ctx->pc = 0x32DC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC00u;
        // 0x32dc04: 0xa503003c  sh          $v1, 0x3C($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 60), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DC08u;
}
