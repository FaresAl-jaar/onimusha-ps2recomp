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

// Function: sub_00363360
// Address: 0x363360 - 0x36342c
void sub_00363360_0x363360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363360_0x363360");
#endif

    switch (ctx->pc) {
        case 0x363378u: goto label_363378;
        case 0x36340cu: goto label_36340c;
        case 0x363420u: goto label_363420;
        default: break;
    }

    ctx->pc = 0x363360u;

    // 0x363360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363364: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x363364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x363368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36336c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x36336cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x363370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x363370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363374: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x363374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
label_363378:
    // 0x363378: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x363378u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x36337c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36337Cu;
    {
        const bool branch_taken_0x36337c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x363380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36337Cu;
        // 0x363380: 0x6163c  dsll32      $v0, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36337c) {
            ctx->pc = 0x363398u;
            goto label_363398;
        }
    }
    ctx->pc = 0x363384u;
    // 0x363384: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x363384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x363388: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x363388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36338c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x36338Cu;
    {
        const bool branch_taken_0x36338c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36338c) {
            ctx->pc = 0x363398u;
            goto label_363398;
        }
    }
    ctx->pc = 0x363394u;
    // 0x363394: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x363394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_363398:
    // 0x363398: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x363398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36339c: 0x28a2010e  slti        $v0, $a1, 0x10E
    ctx->pc = 0x36339cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x3633a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3633A0u;
    {
        const bool branch_taken_0x3633a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3633A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633A0u;
        // 0x3633a4: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3633a0) {
            ctx->pc = 0x363378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363378;
        }
    }
    ctx->pc = 0x3633A8u;
    // 0x3633a8: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x3633a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x3633ac: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3633acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3633b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3633b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3633b4: 0xa420c0f0  sh          $zero, -0x3F10($at)
    ctx->pc = 0x3633b4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294951152), (uint16_t)GPR_U32(ctx, 0));
    // 0x3633b8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3633b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3633bc: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3633bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3633c0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3633c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3633c4: 0xac20c0f4  sw          $zero, -0x3F0C($at)
    ctx->pc = 0x3633c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x91C0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0F4u, _value); } while (0);
    // 0x3633c8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3633c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3633cc: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3633ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3633d0: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x3633d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3633d4: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x3633d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x3633d8: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3633d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3633dc: 0x2484c0f8  addiu       $a0, $a0, -0x3F08
    ctx->pc = 0x3633dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951160));
    // 0x3633e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3633e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633e4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3633e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3633e8: 0x1010  mfhi        $v0
    ctx->pc = 0x3633e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3633ec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3633ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3633f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3633f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3633f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3633f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3633f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3633fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3633fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x363400: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x363400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x363404: 0xc049590  jal         func_125640
    ctx->pc = 0x363404u;
    SET_GPR_U32(ctx, 31, 0x36340Cu);
    ctx->pc = 0x363408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363404u;
    // 0x363408: 0xa422c0f2  sh          $v0, -0x3F0E($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294951154), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x363404u, 0x36340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36340Cu;
label_36340c:
    // 0x36340c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x36340cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x363410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x363410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363414: 0x2484c178  addiu       $a0, $a0, -0x3E88
    ctx->pc = 0x363414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951288));
    // 0x363418: 0xc049590  jal         func_125640
    ctx->pc = 0x363418u;
    SET_GPR_U32(ctx, 31, 0x363420u);
    ctx->pc = 0x36341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363418u;
    // 0x36341c: 0x2406010e  addiu       $a2, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x363418u, 0x363420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363420u;
label_363420:
    // 0x363420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363424: 0x3e00008  jr          $ra
    ctx->pc = 0x363424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363424u;
        // 0x363428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36342Cu;
}
