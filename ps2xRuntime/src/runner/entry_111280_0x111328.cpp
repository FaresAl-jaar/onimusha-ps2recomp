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

// Function: entry_111280
// Address: 0x111280 - 0x111328
void entry_111280_0x111328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_111280_0x111328");
#endif

    switch (ctx->pc) {
        case 0x1112e0u: goto label_1112e0;
        case 0x1112f4u: goto label_1112f4;
        case 0x111304u: goto label_111304;
        default: break;
    }

    ctx->pc = 0x111280u;

    // 0x111280: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x111280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111284: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x111284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x111288: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11128c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x11128cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x111290: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111294: 0x8c44d1e0  lw          $a0, -0x2E20($v0)
    ctx->pc = 0x111294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x68D1E0u));
    // 0x111298: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x111298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x11129c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x11129cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1112a0: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1112a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1112a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1112a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1112a8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1112a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1112ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1112acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1112b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1112b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1112b4: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1112b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1112b8: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1112b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1112bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1112bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1112c0: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1112c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1112c4: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1112c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1112c8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1112c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1112cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1112ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1112d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1112d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1112d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112d8: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x1112D8u;
    SET_GPR_U32(ctx, 31, 0x1112E0u);
    ctx->pc = 0x1112DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112D8u;
    // 0x1112dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x1112D8u, 0x1112E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E0u;
label_1112e0:
    // 0x1112e0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1112e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1112e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1112E4u;
    {
        const bool branch_taken_0x1112e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112E4u;
        // 0x1112e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112e4) {
            ctx->pc = 0x1112FCu;
            goto label_1112fc;
        }
    }
    ctx->pc = 0x1112ECu;
    // 0x1112ec: 0xc0438ec  jal         func_10E3B0
    ctx->pc = 0x1112ECu;
    SET_GPR_U32(ctx, 31, 0x1112F4u);
    ctx->pc = 0x1112F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112ECu;
    // 0x1112f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3B0u, 0x1112ECu, 0x1112F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112F4u;
label_1112f4:
    // 0x1112f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1112F4u;
    {
        const bool branch_taken_0x1112f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F4u;
        // 0x1112f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112f4) {
            ctx->pc = 0x111308u;
            goto label_111308;
        }
    }
    ctx->pc = 0x1112FCu;
label_1112fc:
    // 0x1112fc: 0xc0438e8  jal         func_10E3A0
    ctx->pc = 0x1112FCu;
    SET_GPR_U32(ctx, 31, 0x111304u);
    ctx->pc = 0x111300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112FCu;
    // 0x111300: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3A0u, 0x1112FCu, 0x111304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111304u;
label_111304:
    // 0x111304: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x111304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_111308:
    // 0x111308: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x111308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11130c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111310: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x111310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111314: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x111314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111318: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11131c: 0x3e00008  jr          $ra
    ctx->pc = 0x11131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11131Cu;
        // 0x111320: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11131Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111324u;
    // 0x111324: 0x0  nop
    ctx->pc = 0x111324u;
    // NOP
    ctx->pc = 0x111328u;
}
