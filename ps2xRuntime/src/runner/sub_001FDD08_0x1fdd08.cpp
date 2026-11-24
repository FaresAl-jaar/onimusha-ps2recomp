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

// Function: sub_001FDD08
// Address: 0x1fdd08 - 0x1fe1ac
void sub_001FDD08_0x1fdd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDD08_0x1fdd08");
#endif

    switch (ctx->pc) {
        case 0x1fdfe0u: goto label_1fdfe0;
        default: break;
    }

    ctx->pc = 0x1fdd08u;

    // 0x1fdd08: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1fdd08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd0c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1fdd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1fdd10: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x1fdd10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1fdd14: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1fdd14u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd18: 0x1881023  subu        $v0, $t4, $t0
    ctx->pc = 0x1fdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1fdd1c: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x1fdd1cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd24: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x1fdd24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fdd28: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fdd28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd30: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1fdd30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd34: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd38: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1fdd38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd40: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fdd40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd48: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fdd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd50: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fdd50u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fdd54: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdd54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdd58: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x1fdd58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1fdd5c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fdd5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd60: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fdd60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fdd64: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fdd64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fdd68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdd70: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1fdd70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1fdd74: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fdd74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdd78: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fdd78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fdd7c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fdd7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fdd80: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdd84: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1fdd84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1fdd88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdd8c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fdd8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fdd90: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDD90u;
    {
        const bool branch_taken_0x1fdd90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD90u;
        // 0x1fdd94: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd90) {
            ctx->pc = 0x1FDDB0u;
            goto label_1fddb0;
        }
    }
    ctx->pc = 0x1FDD98u;
    // 0x1fdd98: 0x91023  negu        $v0, $t1
    ctx->pc = 0x1fdd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1fdd9c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fdda0: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x1fdda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fdda4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDDA4u;
    {
        const bool branch_taken_0x1fdda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDA4u;
        // 0x1fdda8: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdda4) {
            ctx->pc = 0x1FDDB8u;
            goto label_1fddb8;
        }
    }
    ctx->pc = 0x1FDDACu;
    // 0x1fddac: 0x0  nop
    ctx->pc = 0x1fddacu;
    // NOP
label_1fddb0:
    // 0x1fddb0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1fddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fddb4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fddb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fddb8:
    // 0x1fddb8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fddb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fddbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fddbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fddc0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fddc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fddc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fddc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fddc8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fddc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fddcc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fddccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fddd0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fddd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fddd4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fddd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fddd8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fddd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdddc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fdddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdde0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fdde0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fdde4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1fdde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1fdde8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdde8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fddec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fddecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fddf0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fddf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fddf4: 0x14a400eb  bne         $a1, $a0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1FDDF4u;
    {
        const bool branch_taken_0x1fddf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FDDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF4u;
        // 0x1fddf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddf4) {
            ctx->pc = 0x1FE1A4u;
            goto label_1fe1a4;
        }
    }
    ctx->pc = 0x1FDDFCu;
    // 0x1fddfc: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1fddfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1fde00: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FDE00u;
    {
        const bool branch_taken_0x1fde00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde00) {
            ctx->pc = 0x1FDE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDE00u;
            // 0x1fde04: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE58u;
            goto label_1fde58;
        }
    }
    ctx->pc = 0x1FDE08u;
    // 0x1fde08: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x1fde08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x1fde0c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fde0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde10: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x1fde10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1fde14: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fde14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde18: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x1fde18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x1fde1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fde20: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x1fde20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x1fde24: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fde24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde28: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fde28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fde2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fde30: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fde30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde34: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fde38: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fde38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fde3c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fde3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde40: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fde40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fde44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fde48: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fde48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fde4c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fde4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fde50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDE50u;
    {
        const bool branch_taken_0x1fde50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE50u;
        // 0x1fde54: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde50) {
            ctx->pc = 0x1FDE5Cu;
            goto label_1fde5c;
        }
    }
    ctx->pc = 0x1FDE58u;
label_1fde58:
    // 0x1fde58: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1fde58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1fde5c:
    // 0x1fde5c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1fde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fde60: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FDE60u;
    {
        const bool branch_taken_0x1fde60 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE60u;
        // 0x1fde64: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde60) {
            ctx->pc = 0x1FDEB0u;
            goto label_1fdeb0;
        }
    }
    ctx->pc = 0x1FDE68u;
    // 0x1fde68: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fde68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde6c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fde6cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fde74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fde74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde78: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fde78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fde80: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fde80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fde84: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fde84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde88: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fde88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fde8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fde90: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fde90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fde94: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fde94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fde98: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fde98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fde9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fde9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdea0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdea0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDEA4u;
    {
        const bool branch_taken_0x1fdea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEA4u;
        // 0x1fdea8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdea4) {
            ctx->pc = 0x1FDEB8u;
            goto label_1fdeb8;
        }
    }
    ctx->pc = 0x1FDEACu;
    // 0x1fdeac: 0x0  nop
    ctx->pc = 0x1fdeacu;
    // NOP
label_1fdeb0:
    // 0x1fdeb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fdeb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fdeb4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1fdeb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1fdeb8:
    // 0x1fdeb8: 0x14a000ba  bnez        $a1, . + 4 + (0xBA << 2)
    ctx->pc = 0x1FDEB8u;
    {
        const bool branch_taken_0x1fdeb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB8u;
        // 0x1fdebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdeb8) {
            ctx->pc = 0x1FE1A4u;
            goto label_1fe1a4;
        }
    }
    ctx->pc = 0x1FDEC0u;
    // 0x1fdec0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1fdec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fdec4: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FDEC4u;
    {
        const bool branch_taken_0x1fdec4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEC4u;
        // 0x1fdec8: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdec4) {
            ctx->pc = 0x1FDF10u;
            goto label_1fdf10;
        }
    }
    ctx->pc = 0x1FDECCu;
    // 0x1fdecc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fdeccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fded0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fded0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fded4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fded4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fded8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fded8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdedc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fdedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdee0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdee4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdee4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdee8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fdee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdeec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fdeecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fdef0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdef4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdef4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdef8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fdef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdefc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fdefcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fdf00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdf04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdf04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdf08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDF08u;
    {
        const bool branch_taken_0x1fdf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF08u;
        // 0x1fdf0c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf08) {
            ctx->pc = 0x1FDF18u;
            goto label_1fdf18;
        }
    }
    ctx->pc = 0x1FDF10u;
label_1fdf10:
    // 0x1fdf10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fdf10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fdf14: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1fdf14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1fdf18:
    // 0x1fdf18: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1FDF18u;
    {
        const bool branch_taken_0x1fdf18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF18u;
        // 0x1fdf1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf18) {
            ctx->pc = 0x1FE1A4u;
            goto label_1fe1a4;
        }
    }
    ctx->pc = 0x1FDF20u;
    // 0x1fdf20: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1fdf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1fdf24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDF24u;
    {
        const bool branch_taken_0x1fdf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF24u;
        // 0x1fdf28: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf24) {
            ctx->pc = 0x1FDF3Cu;
            goto label_1fdf3c;
        }
    }
    ctx->pc = 0x1FDF2Cu;
    // 0x1fdf2c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1fdf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1fdf30: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1fdf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1fdf34: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fdf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fdf38: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fdf38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1fdf3c:
    // 0x1fdf3c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1fdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1fdf40: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FDF40u;
    {
        const bool branch_taken_0x1fdf40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF40u;
        // 0x1fdf44: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf40) {
            ctx->pc = 0x1FDF80u;
            goto label_1fdf80;
        }
    }
    ctx->pc = 0x1FDF48u;
    // 0x1fdf48: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1FDF48u;
    {
        const bool branch_taken_0x1fdf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf48) {
            ctx->pc = 0x1FE180u;
            goto label_1fe180;
        }
    }
    ctx->pc = 0x1FDF50u;
    // 0x1fdf50: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x1fdf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1fdf54: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1FDF54u;
    {
        const bool branch_taken_0x1fdf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf54) {
            ctx->pc = 0x1FE180u;
            goto label_1fe180;
        }
    }
    ctx->pc = 0x1FDF5Cu;
    // 0x1fdf5c: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x1fdf5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1fdf60: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1FDF60u;
    {
        const bool branch_taken_0x1fdf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF60u;
        // 0x1fdf64: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf60) {
            ctx->pc = 0x1FE180u;
            goto label_1fe180;
        }
    }
    ctx->pc = 0x1FDF68u;
    // 0x1fdf68: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1fdf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fdf6c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDF6Cu;
    {
        const bool branch_taken_0x1fdf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf6c) {
            ctx->pc = 0x1FDF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF6Cu;
            // 0x1fdf70: 0x2529ffe0  addiu       $t1, $t1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF94u;
            goto label_1fdf94;
        }
    }
    ctx->pc = 0x1FDF74u;
    // 0x1fdf74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1FDF74u;
    {
        const bool branch_taken_0x1fdf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF74u;
        // 0x1fdf78: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf74) {
            ctx->pc = 0x1FDFD0u;
            goto label_1fdfd0;
        }
    }
    ctx->pc = 0x1FDF7Cu;
    // 0x1fdf7c: 0x0  nop
    ctx->pc = 0x1fdf7cu;
    // NOP
label_1fdf80:
    // 0x1fdf80: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1fdf80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x1fdf84: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1fdf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fdf88: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDF88u;
    {
        const bool branch_taken_0x1fdf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf88) {
            ctx->pc = 0x1FDF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF88u;
            // 0x1fdf8c: 0xa5180  sll         $t2, $t2, 6 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFD0u;
            goto label_1fdfd0;
        }
    }
    ctx->pc = 0x1FDF90u;
    // 0x1fdf90: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1fdf90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
label_1fdf94:
    // 0x1fdf94: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1fdf94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1fdf98: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fdf98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdf9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdf9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdfa0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fdfa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdfa4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdfa8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdfac: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fdfacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdfb0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fdfb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fdfb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdfb8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdfbc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fdfbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fdfc0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fdfc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fdfc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fdfc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fdfc8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fdfc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fdfcc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fdfccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fdfd0:
    // 0x1fdfd0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fdfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fdfd4: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1fdfd8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fdfdc: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x1fdfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_1fdfe0:
    // 0x1fdfe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDFE0u;
    {
        const bool branch_taken_0x1fdfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFE0u;
        // 0x1fdfe4: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfe0) {
            ctx->pc = 0x1FDFF4u;
            goto label_1fdff4;
        }
    }
    ctx->pc = 0x1FDFE8u;
    // 0x1fdfe8: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x1fdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1fdfec: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fdff0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fdff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1fdff4:
    // 0x1fdff4: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FDFF4u;
    {
        const bool branch_taken_0x1fdff4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFF4u;
        // 0x1fdff8: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdff4) {
            ctx->pc = 0x1FE060u;
            goto label_1fe060;
        }
    }
    ctx->pc = 0x1FDFFCu;
    // 0x1fdffc: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x1fdffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x1fe000: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1fe000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fe004: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE004u;
    {
        const bool branch_taken_0x1fe004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe004) {
            ctx->pc = 0x1FE008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE004u;
            // 0x1fe008: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE04Cu;
            goto label_1fe04c;
        }
    }
    ctx->pc = 0x1FE00Cu;
    // 0x1fe00c: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1fe00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1fe010: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1fe014: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe014u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe018: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe01c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe024: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe028: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe02c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe02cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe030: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe034: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe034u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe038: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe03c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe040: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe044: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe044u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe048: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fe04c:
    // 0x1fe04c: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x1fe050: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x1fe050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1fe054: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1FE054u;
    {
        const bool branch_taken_0x1fe054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE054u;
        // 0x1fe058: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe054) {
            ctx->pc = 0x1FDFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdfe0;
        }
    }
    ctx->pc = 0x1FE05Cu;
    // 0x1fe05c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1fe05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1fe060:
    // 0x1fe060: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x1fe060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1fe064: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1FE064u;
    {
        const bool branch_taken_0x1fe064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE064u;
        // 0x1fe068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe064) {
            ctx->pc = 0x1FE1A4u;
            goto label_1fe1a4;
        }
    }
    ctx->pc = 0x1FE06Cu;
    // 0x1fe06c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1fe06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fe070: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fe070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fe074: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x1fe074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x1fe078: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1fe078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fe07c: 0x84c662f0  lh          $a2, 0x62F0($a2)
    ctx->pc = 0x1fe07cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 25328)));
    // 0x1fe080: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1fe080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1fe084: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fe084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe088: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x1fe088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fe08c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE08Cu;
    {
        const bool branch_taken_0x1fe08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE08Cu;
        // 0x1fe090: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe08c) {
            ctx->pc = 0x1FE0F8u;
            goto label_1fe0f8;
        }
    }
    ctx->pc = 0x1FE094u;
    // 0x1fe094: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1fe098: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1fe09c: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE09Cu;
    {
        const bool branch_taken_0x1fe09c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe09c) {
            ctx->pc = 0x1FE0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE09Cu;
            // 0x1fe0a0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE0B8u;
            goto label_1fe0b8;
        }
    }
    ctx->pc = 0x1FE0A4u;
    // 0x1fe0a4: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x1fe0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1fe0a8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fe0ac: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fe0acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fe0b0: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1fe0b4: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_1fe0b8:
    // 0x1fe0b8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe0b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe0bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe0c0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe0c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe0c8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe0cc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe0d0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe0d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe0d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe0dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe0e0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe0e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe0e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe0e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE0ECu;
    {
        const bool branch_taken_0x1fe0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0ECu;
        // 0x1fe0f0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0ec) {
            ctx->pc = 0x1FE100u;
            goto label_1fe100;
        }
    }
    ctx->pc = 0x1FE0F4u;
    // 0x1fe0f4: 0x0  nop
    ctx->pc = 0x1fe0f4u;
    // NOP
label_1fe0f8:
    // 0x1fe0f8: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x1fe0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x1fe0fc: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1fe0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1fe100:
    // 0x1fe100: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x1fe100u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1fe104: 0x14a30027  bne         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FE104u;
    {
        const bool branch_taken_0x1fe104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE104u;
        // 0x1fe108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe104) {
            ctx->pc = 0x1FE1A4u;
            goto label_1fe1a4;
        }
    }
    ctx->pc = 0x1FE10Cu;
    // 0x1fe10c: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1fe10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1fe110: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE110u;
    {
        const bool branch_taken_0x1fe110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE110u;
        // 0x1fe114: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe110) {
            ctx->pc = 0x1FE128u;
            goto label_1fe128;
        }
    }
    ctx->pc = 0x1FE118u;
    // 0x1fe118: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1fe118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1fe11c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1fe11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1fe120: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fe120u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fe124: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fe124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1fe128:
    // 0x1fe128: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1fe128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1fe12c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE12Cu;
    {
        const bool branch_taken_0x1fe12c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE12Cu;
        // 0x1fe130: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe12c) {
            ctx->pc = 0x1FE160u;
            goto label_1fe160;
        }
    }
    ctx->pc = 0x1FE134u;
    // 0x1fe134: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE134u;
    {
        const bool branch_taken_0x1fe134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe134) {
            ctx->pc = 0x1FE180u;
            goto label_1fe180;
        }
    }
    ctx->pc = 0x1FE13Cu;
    // 0x1fe13c: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x1fe13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1fe140: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FE140u;
    {
        const bool branch_taken_0x1fe140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe140) {
            ctx->pc = 0x1FE180u;
            goto label_1fe180;
        }
    }
    ctx->pc = 0x1FE148u;
    // 0x1fe148: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x1fe148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1fe14c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE14Cu;
    {
        const bool branch_taken_0x1fe14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE14Cu;
        // 0x1fe150: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe14c) {
            ctx->pc = 0x1FE180u;
            goto label_1fe180;
        }
    }
    ctx->pc = 0x1FE154u;
    // 0x1fe154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE154u;
    {
        const bool branch_taken_0x1fe154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE154u;
        // 0x1fe158: 0x29220020  slti        $v0, $t1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe154) {
            ctx->pc = 0x1FE168u;
            goto label_1fe168;
        }
    }
    ctx->pc = 0x1FE15Cu;
    // 0x1fe15c: 0x0  nop
    ctx->pc = 0x1fe15cu;
    // NOP
label_1fe160:
    // 0x1fe160: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1fe160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x1fe164: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1fe164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fe168:
    // 0x1fe168: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE168u;
    {
        const bool branch_taken_0x1fe168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe168) {
            ctx->pc = 0x1FE16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE168u;
            // 0x1fe16c: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE18Cu;
            goto label_1fe18c;
        }
    }
    ctx->pc = 0x1FE170u;
    // 0x1fe170: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1fe174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE174u;
    {
        const bool branch_taken_0x1fe174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE174u;
        // 0x1fe178: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe174) {
            ctx->pc = 0x1FE188u;
            goto label_1fe188;
        }
    }
    ctx->pc = 0x1FE17Cu;
    // 0x1fe17c: 0x0  nop
    ctx->pc = 0x1fe17cu;
    // NOP
label_1fe180:
    // 0x1fe180: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE180u;
        // 0x1fe184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE188u;
label_1fe188:
    // 0x1fe188: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x1fe188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1fe18c:
    // 0x1fe18c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1fe190: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1fe190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1fe194: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1fe194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1fe198: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1fe19c: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x1fe19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe1a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fe1a4:
    // 0x1fe1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1ACu;
}
