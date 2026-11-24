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

// Function: sub_00245998
// Address: 0x245998 - 0x245a38
void sub_00245998_0x245998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245998_0x245998");
#endif

    switch (ctx->pc) {
        case 0x2459b4u: goto label_2459b4;
        case 0x2459d4u: goto label_2459d4;
        case 0x245a04u: goto label_245a04;
        case 0x245a0cu: goto label_245a0c;
        default: break;
    }

    ctx->pc = 0x245998u;

    // 0x245998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24599c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2459a0: 0x3c11004d  lui         $s1, 0x4D
    ctx->pc = 0x2459a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)77 << 16));
    // 0x2459a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2459a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2459a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2459a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2459ac: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x2459ACu;
    SET_GPR_U32(ctx, 31, 0x2459B4u);
    ctx->pc = 0x2459B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459ACu;
    // 0x2459b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x2459ACu, 0x2459B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459B4u;
label_2459b4:
    // 0x2459b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2459b8: 0x2622e980  addiu       $v0, $s1, -0x1680
    ctx->pc = 0x2459b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961536));
    // 0x2459bc: 0x2484c870  addiu       $a0, $a0, -0x3790
    ctx->pc = 0x2459bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953072));
    // 0x2459c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2459c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459c4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2459C4u;
    {
        const bool branch_taken_0x2459c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2459C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459C4u;
        // 0x2459c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459c4) {
            ctx->pc = 0x2459E0u;
            goto label_2459e0;
        }
    }
    ctx->pc = 0x2459CCu;
    // 0x2459cc: 0xc044332  jal         func_110CC8
    ctx->pc = 0x2459CCu;
    SET_GPR_U32(ctx, 31, 0x2459D4u);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x2459CCu, 0x2459D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459D4u;
label_2459d4:
    // 0x2459d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2459D4u;
    {
        const bool branch_taken_0x2459d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459D4u;
        // 0x2459d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459d4) {
            ctx->pc = 0x245A28u;
            goto label_245a28;
        }
    }
    ctx->pc = 0x2459DCu;
    // 0x2459dc: 0x0  nop
    ctx->pc = 0x2459dcu;
    // NOP
label_2459e0:
    // 0x2459e0: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x2459e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2459e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2459E4u;
    {
        const bool branch_taken_0x2459e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2459E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459E4u;
        // 0x2459e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459e4) {
            ctx->pc = 0x245A04u;
            goto label_245a04;
        }
    }
    ctx->pc = 0x2459ECu;
    // 0x2459ec: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2459ECu;
    {
        const bool branch_taken_0x2459ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2459F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459ECu;
        // 0x2459f0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459ec) {
            ctx->pc = 0x245A04u;
            goto label_245a04;
        }
    }
    ctx->pc = 0x2459F4u;
    // 0x2459f4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2459F4u;
    {
        const bool branch_taken_0x2459f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2459F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2459F4u;
        // 0x2459f8: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2459f4) {
            ctx->pc = 0x245A04u;
            goto label_245a04;
        }
    }
    ctx->pc = 0x2459FCu;
    // 0x2459fc: 0xc044332  jal         func_110CC8
    ctx->pc = 0x2459FCu;
    SET_GPR_U32(ctx, 31, 0x245A04u);
    ctx->pc = 0x245A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459FCu;
    // 0x245a00: 0x2484c8b0  addiu       $a0, $a0, -0x3750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x2459FCu, 0x245A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A04u;
label_245a04:
    // 0x245a04: 0xc091638  jal         func_2458E0
    ctx->pc = 0x245A04u;
    SET_GPR_U32(ctx, 31, 0x245A0Cu);
    ctx->pc = 0x2458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2458E0u, 0x245A04u, 0x245A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A0Cu;
label_245a0c:
    // 0x245a0c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x245a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x245a10: 0xa220e980  sb          $zero, -0x1680($s1)
    ctx->pc = 0x245a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294961536), (uint8_t)GPR_U32(ctx, 0));
    // 0x245a14: 0x2463e9e4  addiu       $v1, $v1, -0x161C
    ctx->pc = 0x245a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961636));
    // 0x245a18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9E4u));
    // 0x245a1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245a20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x245a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9E4u, _value); } while (0);
    // 0x245a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245a28:
    // 0x245a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245a30: 0x8094bd2  j           func_252F48
    ctx->pc = 0x245A30u;
    ctx->pc = 0x245A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245A30u;
    // 0x245a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F48u;
    sub_00252F48_0x252f48(rdram, ctx, runtime); return;
    ctx->pc = 0x245A38u;
}
