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

// Function: sub_003201A0
// Address: 0x3201a0 - 0x32024c
void sub_003201A0_0x3201a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003201A0_0x3201a0");
#endif

    switch (ctx->pc) {
        case 0x3201e8u: goto label_3201e8;
        case 0x320208u: goto label_320208;
        case 0x32022cu: goto label_32022c;
        default: break;
    }

    ctx->pc = 0x3201a0u;

    // 0x3201a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3201a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3201a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3201a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3201a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3201a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3201ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3201acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3201b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3201b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3201b4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3201b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3201b8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3201b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3201bc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3201bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3201c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3201c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3201c4: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x3201c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3201c8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x3201c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3201cc: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3201ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3201d0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x3201d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x3201d4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3201d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3201d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3201D8u;
    {
        const bool branch_taken_0x3201d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3201DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201D8u;
        // 0x3201dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201d8) {
            ctx->pc = 0x3201F8u;
            goto label_3201f8;
        }
    }
    ctx->pc = 0x3201E0u;
    // 0x3201e0: 0xc0c8094  jal         func_320250
    ctx->pc = 0x3201E0u;
    SET_GPR_U32(ctx, 31, 0x3201E8u);
    ctx->pc = 0x3201E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201E0u;
    // 0x3201e4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320250u, 0x3201E0u, 0x3201E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201E8u;
label_3201e8:
    // 0x3201e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3201E8u;
    {
        const bool branch_taken_0x3201e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3201e8) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x3201F0u;
    // 0x3201f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3201F0u;
    {
        const bool branch_taken_0x3201f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201F0u;
        // 0x3201f4: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201f0) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x3201F8u;
label_3201f8:
    // 0x3201f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3201F8u;
    {
        const bool branch_taken_0x3201f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3201FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201F8u;
        // 0x3201fc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201f8) {
            ctx->pc = 0x320218u;
            goto label_320218;
        }
    }
    ctx->pc = 0x320200u;
    // 0x320200: 0xc0c80c4  jal         func_320310
    ctx->pc = 0x320200u;
    SET_GPR_U32(ctx, 31, 0x320208u);
    ctx->pc = 0x320310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320310u, 0x320200u, 0x320208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320208u;
label_320208:
    // 0x320208: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x320208u;
    {
        const bool branch_taken_0x320208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320208) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x320210u;
    // 0x320210: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x320210u;
    {
        const bool branch_taken_0x320210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320210u;
        // 0x320214: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320210) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x320218u;
label_320218:
    // 0x320218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32021c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32021Cu;
    {
        const bool branch_taken_0x32021c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32021Cu;
        // 0x320220: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32021c) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x320224u;
    // 0x320224: 0xc0c8414  jal         func_321050
    ctx->pc = 0x320224u;
    SET_GPR_U32(ctx, 31, 0x32022Cu);
    ctx->pc = 0x321050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321050u, 0x320224u, 0x32022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32022Cu;
label_32022c:
    // 0x32022c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32022Cu;
    {
        const bool branch_taken_0x32022c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32022c) {
            ctx->pc = 0x320238u;
            goto label_320238;
        }
    }
    ctx->pc = 0x320234u;
    // 0x320234: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x320234u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_320238:
    // 0x320238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x320238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32023c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320244: 0x3e00008  jr          $ra
    ctx->pc = 0x320244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320244u;
        // 0x320248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32024Cu;
}
