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

// Function: sub_003B9430
// Address: 0x3b9430 - 0x3b9620
void sub_003B9430_0x3b9430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9430_0x3b9430");
#endif

    switch (ctx->pc) {
        case 0x3b947cu: goto label_3b947c;
        case 0x3b953cu: goto label_3b953c;
        case 0x3b9610u: goto label_3b9610;
        default: break;
    }

    ctx->pc = 0x3b9430u;

    // 0x3b9430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b9438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b943c: 0x90832b55  lbu         $v1, 0x2B55($a0)
    ctx->pc = 0x3b943cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11093)));
    // 0x3b9440: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3b9440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3b9444: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x3B9444u;
    {
        const bool branch_taken_0x3b9444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9444u;
        // 0x3b9448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9444) {
            ctx->pc = 0x3B9610u;
            goto label_3b9610;
        }
    }
    ctx->pc = 0x3B944Cu;
    // 0x3b944c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b944cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b9450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b9450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b9454: 0x24a52d20  addiu       $a1, $a1, 0x2D20
    ctx->pc = 0x3b9454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11552));
    // 0x3b9458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b9458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b945c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b9460: 0x600008  jr          $v1
    ctx->pc = 0x3B9460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B9468u: goto label_3b9468;
            case 0x3B94A0u: goto label_3b94a0;
            case 0x3B94D0u: goto label_3b94d0;
            case 0x3B94F8u: goto label_3b94f8;
            case 0x3B9520u: goto label_3b9520;
            case 0x3B9568u: goto label_3b9568;
            case 0x3B95F0u: goto label_3b95f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9460u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B9468u;
label_3b9468:
    // 0x3b9468: 0xa6002b46  sh          $zero, 0x2B46($s0)
    ctx->pc = 0x3b9468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b946c: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b946cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9470: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b9474: 0xc0eeed4  jal         func_3BBB50
    ctx->pc = 0x3B9474u;
    SET_GPR_U32(ctx, 31, 0x3B947Cu);
    ctx->pc = 0x3B9478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9474u;
    // 0x3b9478: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBB50u, 0x3B9474u, 0x3B947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B947Cu;
label_3b947c:
    // 0x3b947c: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3b947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3b9480: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b9480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9484: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9488: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b9488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b948c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b948cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9490: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9494: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9498: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b949c: 0x0  nop
    ctx->pc = 0x3b949cu;
    // NOP
label_3b94a0:
    // 0x3b94a0: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b94a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b94a4: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x3B94A4u;
    {
        const bool branch_taken_0x3b94a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94A4u;
        // 0x3b94a8: 0x240400f5  addiu       $a0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94a4) {
            ctx->pc = 0x3B9610u;
            goto label_3b9610;
        }
    }
    ctx->pc = 0x3B94ACu;
    // 0x3b94ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b94acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b94b0: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b94b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b94b4: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b94b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b94b8: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b94b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b94bc: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b94bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b94c0: 0xa2032b83  sb          $v1, 0x2B83($s0)
    ctx->pc = 0x3b94c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b94c4: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b94c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b94c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b94cc: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b94ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b94d0:
    // 0x3b94d0: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b94d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b94d4: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x3B94D4u;
    {
        const bool branch_taken_0x3b94d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94D4u;
        // 0x3b94d8: 0x240300f2  addiu       $v1, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94d4) {
            ctx->pc = 0x3B9610u;
            goto label_3b9610;
        }
    }
    ctx->pc = 0x3B94DCu;
    // 0x3b94dc: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b94dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b94e0: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b94e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b94e4: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b94e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b94e8: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b94e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b94ec: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b94ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b94f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b94f4: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b94f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b94f8:
    // 0x3b94f8: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b94f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b94fc: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3B94FCu;
    {
        const bool branch_taken_0x3b94fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94FCu;
        // 0x3b9500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94fc) {
            ctx->pc = 0x3B9610u;
            goto label_3b9610;
        }
    }
    ctx->pc = 0x3B9504u;
    // 0x3b9504: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b9504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9508: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b950c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b950cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9510: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9514: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b9514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b951c: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b951cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9520:
    // 0x3b9520: 0x92042b91  lbu         $a0, 0x2B91($s0)
    ctx->pc = 0x3b9520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11153)));
    // 0x3b9524: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3B9524u;
    {
        const bool branch_taken_0x3b9524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9524u;
        // 0x3b9528: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9524) {
            ctx->pc = 0x3B9610u;
            goto label_3b9610;
        }
    }
    ctx->pc = 0x3B952Cu;
    // 0x3b952c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B952Cu;
    {
        const bool branch_taken_0x3b952c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b952c) {
            ctx->pc = 0x3B9540u;
            goto label_3b9540;
        }
    }
    ctx->pc = 0x3B9534u;
    // 0x3b9534: 0xc0eeed4  jal         func_3BBB50
    ctx->pc = 0x3B9534u;
    SET_GPR_U32(ctx, 31, 0x3B953Cu);
    ctx->pc = 0x3B9538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9534u;
    // 0x3b9538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBB50u, 0x3B9534u, 0x3B953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B953Cu;
label_3b953c:
    // 0x3b953c: 0x0  nop
    ctx->pc = 0x3b953cu;
    // NOP
label_3b9540:
    // 0x3b9540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b9540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9544: 0xa2032b83  sb          $v1, 0x2B83($s0)
    ctx->pc = 0x3b9544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11139), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9548: 0x240300f3  addiu       $v1, $zero, 0xF3
    ctx->pc = 0x3b9548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x3b954c: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b954cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9550: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9554: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b9554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9558: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b9558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b955c: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b955cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b9560: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b9560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b9564: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b9564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b9568:
    // 0x3b9568: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b9568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b956c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B956Cu;
    {
        const bool branch_taken_0x3b956c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B956Cu;
        // 0x3b9570: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b956c) {
            ctx->pc = 0x3B9610u;
            goto label_3b9610;
        }
    }
    ctx->pc = 0x3B9574u;
    // 0x3b9574: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3b9574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x3b9578: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b9578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b957c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b957cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b9580: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b9580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9584: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b9584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b9588: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b9588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b958c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b958cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b9590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b9590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b9594: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3b9594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b9598: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b9598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b959c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b959cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b95a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B95A0u;
    {
        const bool branch_taken_0x3b95a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b95a0) {
            ctx->pc = 0x3B95B8u;
            goto label_3b95b8;
        }
    }
    ctx->pc = 0x3B95A8u;
    // 0x3b95a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b95a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b95ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b95acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b95b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B95B0u;
    {
        const bool branch_taken_0x3b95b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B95B0u;
        // 0x3b95b4: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b95b0) {
            ctx->pc = 0x3B95D4u;
            goto label_3b95d4;
        }
    }
    ctx->pc = 0x3B95B8u;
label_3b95b8:
    // 0x3b95b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b95b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b95bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b95c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b95c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b95c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b95c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b95c8: 0x0  nop
    ctx->pc = 0x3b95c8u;
    // NOP
    // 0x3b95cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b95ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b95d0: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b95d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b95d4:
    // 0x3b95d4: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b95d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b95d8: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x3b95d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x3b95dc: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3b95dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b95e0: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b95e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b95e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b95e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b95e8: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b95e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b95ec: 0x0  nop
    ctx->pc = 0x3b95ecu;
    // NOP
label_3b95f0:
    // 0x3b95f0: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b95f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b95f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B95F4u;
    {
        const bool branch_taken_0x3b95f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b95f4) {
            ctx->pc = 0x3B9610u;
            goto label_3b9610;
        }
    }
    ctx->pc = 0x3B95FCu;
    // 0x3b95fc: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b95fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b9600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9604: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b9604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b9608: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B9608u;
    SET_GPR_U32(ctx, 31, 0x3B9610u);
    ctx->pc = 0x3B960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9608u;
    // 0x3b960c: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B9608u, 0x3B9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9610u;
label_3b9610:
    // 0x3b9610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9618: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9618u;
        // 0x3b961c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9620u;
}
