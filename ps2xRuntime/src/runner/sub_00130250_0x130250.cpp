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

// Function: sub_00130250
// Address: 0x130250 - 0x1302e4
void sub_00130250_0x130250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130250_0x130250");
#endif

    ctx->pc = 0x130250u;

    // 0x130250: 0x5193c  dsll32      $v1, $a1, 4
    ctx->pc = 0x130250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 4));
    // 0x130254: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x130254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x130258: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x130258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13025c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13025cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x130260: 0x34660004  ori         $a2, $v1, 0x4
    ctx->pc = 0x130260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x130264: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x130264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x130268: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x130268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x13026c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x13026cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x130270: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x130270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x130274: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x130274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x130278: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x130278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x13027c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x13027cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x130280: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x130280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x130284: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x130284u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x130288: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x130288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13028c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x13028cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130290: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x130290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x130294: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x130294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x130298: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x130298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x13029c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13029cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1302a0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1302a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1302a4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1302a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1302a8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1302a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1302ac: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1302acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1302b0: 0x346417fd  ori         $a0, $v1, 0x17FD
    ctx->pc = 0x1302b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6141);
    // 0x1302b4: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x1302b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x1302b8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1302b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1302bc: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x1302bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x1302c0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1302c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1302c4: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x1302c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x1302c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1302c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1302cc: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x1302ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x1302d0: 0x24040360  addiu       $a0, $zero, 0x360
    ctx->pc = 0x1302d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x1302d4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1302d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1302d8: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x1302d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 4));
    // 0x1302dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1302DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302DCu;
        // 0x1302e0: 0xfca30038  sd          $v1, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1302DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1302E4u;
}
