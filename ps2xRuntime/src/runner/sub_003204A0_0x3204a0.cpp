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

// Function: sub_003204A0
// Address: 0x3204a0 - 0x32056c
void sub_003204A0_0x3204a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003204A0_0x3204a0");
#endif

    switch (ctx->pc) {
        case 0x3204fcu: goto label_3204fc;
        case 0x320514u: goto label_320514;
        case 0x320540u: goto label_320540;
        default: break;
    }

    ctx->pc = 0x3204a0u;

    // 0x3204a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3204a4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3204a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3204a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3204a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3204ac: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3204acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3204b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3204b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3204b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3204b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3204b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3204b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3204bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3204bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3204c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3204c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3204c4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3204c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3204c8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3204c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3204cc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3204ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3204d0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3204d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3204d4: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3204d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3204d8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3204d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3204dc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3204dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3204e0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3204e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3204e4: 0x8486000e  lh          $a2, 0xE($a0)
    ctx->pc = 0x3204e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3204e8: 0x14c2000f  bne         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3204E8u;
    {
        const bool branch_taken_0x3204e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3204ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204E8u;
        // 0x3204ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204e8) {
            ctx->pc = 0x320528u;
            goto label_320528;
        }
    }
    ctx->pc = 0x3204F0u;
    // 0x3204f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3204f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3204f4: 0xc0c82e0  jal         func_320B80
    ctx->pc = 0x3204F4u;
    SET_GPR_U32(ctx, 31, 0x3204FCu);
    ctx->pc = 0x3204F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204F4u;
    // 0x3204f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B80u, 0x3204F4u, 0x3204FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204FCu;
label_3204fc:
    // 0x3204fc: 0x8647000e  lh          $a3, 0xE($s2)
    ctx->pc = 0x3204fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x320500: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x320500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x320504: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x320504u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x320508: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32050c: 0xc0c8228  jal         func_3208A0
    ctx->pc = 0x32050Cu;
    SET_GPR_U32(ctx, 31, 0x320514u);
    ctx->pc = 0x320510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32050Cu;
    // 0x320510: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3208A0u, 0x32050Cu, 0x320514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320514u;
label_320514:
    // 0x320514: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x320514u;
    {
        const bool branch_taken_0x320514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320514) {
            ctx->pc = 0x320550u;
            goto label_320550;
        }
    }
    ctx->pc = 0x32051Cu;
    // 0x32051c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32051Cu;
    {
        const bool branch_taken_0x32051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32051Cu;
        // 0x320520: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32051c) {
            ctx->pc = 0x320550u;
            goto label_320550;
        }
    }
    ctx->pc = 0x320524u;
    // 0x320524: 0x0  nop
    ctx->pc = 0x320524u;
    // NOP
label_320528:
    // 0x320528: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x320528u;
    {
        const bool branch_taken_0x320528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x320528) {
            ctx->pc = 0x320550u;
            goto label_320550;
        }
    }
    ctx->pc = 0x320530u;
    // 0x320530: 0x8644000c  lh          $a0, 0xC($s2)
    ctx->pc = 0x320530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x320534: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x320534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x320538: 0xc0c8298  jal         func_320A60
    ctx->pc = 0x320538u;
    SET_GPR_U32(ctx, 31, 0x320540u);
    ctx->pc = 0x32053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320538u;
    // 0x32053c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A60u, 0x320538u, 0x320540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320540u;
label_320540:
    // 0x320540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320540u;
    {
        const bool branch_taken_0x320540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320540) {
            ctx->pc = 0x320550u;
            goto label_320550;
        }
    }
    ctx->pc = 0x320548u;
    // 0x320548: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x320548u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x32054c: 0x0  nop
    ctx->pc = 0x32054cu;
    // NOP
label_320550:
    // 0x320550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x320550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320554: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x320554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32055c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32055cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320564: 0x3e00008  jr          $ra
    ctx->pc = 0x320564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320564u;
        // 0x320568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32056Cu;
}
