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

// Function: sub_00252590
// Address: 0x252590 - 0x252600
void sub_00252590_0x252590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252590_0x252590");
#endif

    switch (ctx->pc) {
        case 0x2525c4u: goto label_2525c4;
        default: break;
    }

    ctx->pc = 0x252590u;

    // 0x252590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252594: 0x3c050089  lui         $a1, 0x89
    ctx->pc = 0x252594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)137 << 16));
    // 0x252598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25259c: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x25259cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x2525a0: 0x24a584c0  addiu       $a1, $a1, -0x7B40
    ctx->pc = 0x2525a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935744));
    // 0x2525a4: 0x261085c0  addiu       $s0, $s0, -0x7A40
    ctx->pc = 0x2525a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936000));
    // 0x2525a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2525a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2525ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2525acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525b0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2525b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8884C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C0u, _value); } while (0);
    // 0x2525b4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2525b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2525b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2525b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2525bc: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x2525BCu;
    SET_GPR_U32(ctx, 31, 0x2525C4u);
    ctx->pc = 0x2525C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2525BCu;
    // 0x2525c0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x2525BCu, 0x2525C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525C4u;
label_2525c4:
    // 0x2525c4: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x2525c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x2525c8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2525c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2525cc: 0x24638480  addiu       $v1, $v1, -0x7B80
    ctx->pc = 0x2525ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935680));
    // 0x2525d0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2525d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2525d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2525d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2525d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2525dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2525dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2525e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2525e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2525e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2525e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2525e8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2525e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x888480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x888480u, _value); } while (0);
    // 0x2525ec: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2525ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x888484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x888484u, _value); } while (0);
    // 0x2525f0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2525f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x888488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x888488u, _value); } while (0);
    // 0x2525f4: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x2525f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x88848Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88848Cu, _value); } while (0);
    // 0x2525f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2525F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2525FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525F8u;
        // 0x2525fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2525F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252600u;
}
