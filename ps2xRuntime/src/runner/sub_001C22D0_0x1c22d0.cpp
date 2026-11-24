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

// Function: sub_001C22D0
// Address: 0x1c22d0 - 0x1c25cc
void sub_001C22D0_0x1c22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22D0_0x1c22d0");
#endif

    switch (ctx->pc) {
        case 0x1c22f8u: goto label_1c22f8;
        case 0x1c2328u: goto label_1c2328;
        case 0x1c2338u: goto label_1c2338;
        case 0x1c234cu: goto label_1c234c;
        case 0x1c2360u: goto label_1c2360;
        case 0x1c2374u: goto label_1c2374;
        case 0x1c2398u: goto label_1c2398;
        case 0x1c23b4u: goto label_1c23b4;
        case 0x1c23d8u: goto label_1c23d8;
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c2418u: goto label_1c2418;
        case 0x1c2434u: goto label_1c2434;
        case 0x1c2458u: goto label_1c2458;
        case 0x1c2474u: goto label_1c2474;
        case 0x1c2498u: goto label_1c2498;
        case 0x1c24b4u: goto label_1c24b4;
        case 0x1c24d8u: goto label_1c24d8;
        case 0x1c24f4u: goto label_1c24f4;
        case 0x1c2518u: goto label_1c2518;
        case 0x1c2534u: goto label_1c2534;
        case 0x1c2558u: goto label_1c2558;
        case 0x1c2574u: goto label_1c2574;
        case 0x1c2598u: goto label_1c2598;
        case 0x1c25b4u: goto label_1c25b4;
        default: break;
    }

    ctx->pc = 0x1c22d0u;

    // 0x1c22d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c22d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c22d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c22d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c22dc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c22dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c22e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c22e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c22e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c22e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c22e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c22e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c22ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22f0: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C22F0u;
    SET_GPR_U32(ctx, 31, 0x1C22F8u);
    ctx->pc = 0x1C22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22F0u;
    // 0x1c22f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C22F0u, 0x1C22F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22F8u;
label_1c22f8:
    // 0x1c22f8: 0x2e010016  sltiu       $at, $s0, 0x16
    ctx->pc = 0x1c22f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1c22fc: 0x102000ae  beqz        $at, . + 4 + (0xAE << 2)
    ctx->pc = 0x1C22FCu;
    {
        const bool branch_taken_0x1c22fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22FCu;
        // 0x1c2300: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22fc) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C2304u;
    // 0x1c2304: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c2308: 0x248459e0  addiu       $a0, $a0, 0x59E0
    ctx->pc = 0x1c2308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23008));
    // 0x1c230c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c2310: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2314: 0x600008  jr          $v1
    ctx->pc = 0x1C2314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2320u: goto label_1c2320;
            case 0x1C2330u: goto label_1c2330;
            case 0x1C2358u: goto label_1c2358;
            case 0x1C2380u: goto label_1c2380;
            case 0x1C23A0u: goto label_1c23a0;
            case 0x1C23C0u: goto label_1c23c0;
            case 0x1C23E0u: goto label_1c23e0;
            case 0x1C2400u: goto label_1c2400;
            case 0x1C2420u: goto label_1c2420;
            case 0x1C2440u: goto label_1c2440;
            case 0x1C2460u: goto label_1c2460;
            case 0x1C2480u: goto label_1c2480;
            case 0x1C24A0u: goto label_1c24a0;
            case 0x1C24C0u: goto label_1c24c0;
            case 0x1C24E0u: goto label_1c24e0;
            case 0x1C2500u: goto label_1c2500;
            case 0x1C2520u: goto label_1c2520;
            case 0x1C2540u: goto label_1c2540;
            case 0x1C2560u: goto label_1c2560;
            case 0x1C2580u: goto label_1c2580;
            case 0x1C25A0u: goto label_1c25a0;
            case 0x1C25B8u: goto label_1c25b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2314u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C231Cu;
    // 0x1c231c: 0x0  nop
    ctx->pc = 0x1c231cu;
    // NOP
label_1c2320:
    // 0x1c2320: 0xc070cdc  jal         func_1C3370
    ctx->pc = 0x1C2320u;
    SET_GPR_U32(ctx, 31, 0x1C2328u);
    ctx->pc = 0x1C2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2320u;
    // 0x1c2324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3370u, 0x1C2320u, 0x1C2328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2328u;
label_1c2328:
    // 0x1c2328: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1C2328u;
    {
        const bool branch_taken_0x1c2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2328) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C2330u;
label_1c2330:
    // 0x1c2330: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1C2330u;
    SET_GPR_U32(ctx, 31, 0x1C2338u);
    ctx->pc = 0x1C2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2330u;
    // 0x1c2334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1C2330u, 0x1C2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2338u;
label_1c2338:
    // 0x1c2338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c233c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c233cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2340: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c2344: 0xc070a5c  jal         func_1C2970
    ctx->pc = 0x1C2344u;
    SET_GPR_U32(ctx, 31, 0x1C234Cu);
    ctx->pc = 0x1C2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2344u;
    // 0x1c2348: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2970u, 0x1C2344u, 0x1C234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C234Cu;
label_1c234c:
    // 0x1c234c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1C234Cu;
    {
        const bool branch_taken_0x1c234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c234c) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C2354u;
    // 0x1c2354: 0x0  nop
    ctx->pc = 0x1c2354u;
    // NOP
label_1c2358:
    // 0x1c2358: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1C2358u;
    SET_GPR_U32(ctx, 31, 0x1C2360u);
    ctx->pc = 0x1C235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2358u;
    // 0x1c235c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1C2358u, 0x1C2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2360u;
label_1c2360:
    // 0x1c2360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2368: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1c2368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c236c: 0xc070db8  jal         func_1C36E0
    ctx->pc = 0x1C236Cu;
    SET_GPR_U32(ctx, 31, 0x1C2374u);
    ctx->pc = 0x1C2370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C236Cu;
    // 0x1c2370: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C36E0u, 0x1C236Cu, 0x1C2374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2374u;
label_1c2374:
    // 0x1c2374: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1C2374u;
    {
        const bool branch_taken_0x1c2374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2374) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C237Cu;
    // 0x1c237c: 0x0  nop
    ctx->pc = 0x1c237cu;
    // NOP
label_1c2380:
    // 0x1c2380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2384: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c2384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c2388: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c238c: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1c2390: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C2390u;
    SET_GPR_U32(ctx, 31, 0x1C2398u);
    ctx->pc = 0x1C2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2390u;
    // 0x1c2394: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C2390u, 0x1C2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2398u;
label_1c2398:
    // 0x1c2398: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1C2398u;
    {
        const bool branch_taken_0x1c2398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2398) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C23A0u;
label_1c23a0:
    // 0x1c23a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23a4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c23a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c23a8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1c23a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c23ac: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C23ACu;
    SET_GPR_U32(ctx, 31, 0x1C23B4u);
    ctx->pc = 0x1C23B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23ACu;
    // 0x1c23b0: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C23ACu, 0x1C23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23B4u;
label_1c23b4:
    // 0x1c23b4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1C23B4u;
    {
        const bool branch_taken_0x1c23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23b4) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C23BCu;
    // 0x1c23bc: 0x0  nop
    ctx->pc = 0x1c23bcu;
    // NOP
label_1c23c0:
    // 0x1c23c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23c4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c23c8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c23c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c23cc: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1c23d0: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C23D0u;
    SET_GPR_U32(ctx, 31, 0x1C23D8u);
    ctx->pc = 0x1C23D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23D0u;
    // 0x1c23d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C23D0u, 0x1C23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23D8u;
label_1c23d8:
    // 0x1c23d8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1C23D8u;
    {
        const bool branch_taken_0x1c23d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23d8) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C23E0u;
label_1c23e0:
    // 0x1c23e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23e4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c23e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c23e8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c23e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c23ec: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C23ECu;
    SET_GPR_U32(ctx, 31, 0x1C23F4u);
    ctx->pc = 0x1C23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23ECu;
    // 0x1c23f0: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C23ECu, 0x1C23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23F4u;
label_1c23f4:
    // 0x1c23f4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1C23F4u;
    {
        const bool branch_taken_0x1c23f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23f4) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C23FCu;
    // 0x1c23fc: 0x0  nop
    ctx->pc = 0x1c23fcu;
    // NOP
label_1c2400:
    // 0x1c2400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2404: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1c2404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1c2408: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c2408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c240c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1c240cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1c2410: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C2410u;
    SET_GPR_U32(ctx, 31, 0x1C2418u);
    ctx->pc = 0x1C2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2410u;
    // 0x1c2414: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C2410u, 0x1C2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2418u;
label_1c2418:
    // 0x1c2418: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C2418u;
    {
        const bool branch_taken_0x1c2418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2418) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C2420u;
label_1c2420:
    // 0x1c2420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2424: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1c2424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1c2428: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c2428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c242c: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C242Cu;
    SET_GPR_U32(ctx, 31, 0x1C2434u);
    ctx->pc = 0x1C2430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C242Cu;
    // 0x1c2430: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C242Cu, 0x1C2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2434u;
label_1c2434:
    // 0x1c2434: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1C2434u;
    {
        const bool branch_taken_0x1c2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2434) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C243Cu;
    // 0x1c243c: 0x0  nop
    ctx->pc = 0x1c243cu;
    // NOP
label_1c2440:
    // 0x1c2440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2444: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c2444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c2448: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c2448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c244c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1c244cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1c2450: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C2450u;
    SET_GPR_U32(ctx, 31, 0x1C2458u);
    ctx->pc = 0x1C2454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2450u;
    // 0x1c2454: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C2450u, 0x1C2458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2458u;
label_1c2458:
    // 0x1c2458: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C2458u;
    {
        const bool branch_taken_0x1c2458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2458) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C2460u;
label_1c2460:
    // 0x1c2460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2464: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c2464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c2468: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c2468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c246c: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C246Cu;
    SET_GPR_U32(ctx, 31, 0x1C2474u);
    ctx->pc = 0x1C2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C246Cu;
    // 0x1c2470: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C246Cu, 0x1C2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2474u;
label_1c2474:
    // 0x1c2474: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1C2474u;
    {
        const bool branch_taken_0x1c2474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2474) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C247Cu;
    // 0x1c247c: 0x0  nop
    ctx->pc = 0x1c247cu;
    // NOP
label_1c2480:
    // 0x1c2480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2484: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x1c2484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1c2488: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c2488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c248c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1c248cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1c2490: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C2490u;
    SET_GPR_U32(ctx, 31, 0x1C2498u);
    ctx->pc = 0x1C2494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2490u;
    // 0x1c2494: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C2490u, 0x1C2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2498u;
label_1c2498:
    // 0x1c2498: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C2498u;
    {
        const bool branch_taken_0x1c2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2498) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C24A0u;
label_1c24a0:
    // 0x1c24a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c24a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24a4: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x1c24a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1c24a8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c24a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c24ac: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C24ACu;
    SET_GPR_U32(ctx, 31, 0x1C24B4u);
    ctx->pc = 0x1C24B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24ACu;
    // 0x1c24b0: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C24ACu, 0x1C24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24B4u;
label_1c24b4:
    // 0x1c24b4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C24B4u;
    {
        const bool branch_taken_0x1c24b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24b4) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C24BCu;
    // 0x1c24bc: 0x0  nop
    ctx->pc = 0x1c24bcu;
    // NOP
label_1c24c0:
    // 0x1c24c0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c24c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c24c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c24c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24c8: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x1c24c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c24cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c24ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24d0: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C24D0u;
    SET_GPR_U32(ctx, 31, 0x1C24D8u);
    ctx->pc = 0x1C24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24D0u;
    // 0x1c24d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C24D0u, 0x1C24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24D8u;
label_1c24d8:
    // 0x1c24d8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1C24D8u;
    {
        const bool branch_taken_0x1c24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24d8) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C24E0u;
label_1c24e0:
    // 0x1c24e0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c24e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c24e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c24e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24e8: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x1c24e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c24ec: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C24ECu;
    SET_GPR_U32(ctx, 31, 0x1C24F4u);
    ctx->pc = 0x1C24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24ECu;
    // 0x1c24f0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C24ECu, 0x1C24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24F4u;
label_1c24f4:
    // 0x1c24f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1C24F4u;
    {
        const bool branch_taken_0x1c24f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24f4) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C24FCu;
    // 0x1c24fc: 0x0  nop
    ctx->pc = 0x1c24fcu;
    // NOP
label_1c2500:
    // 0x1c2500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2504: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1c2504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1c2508: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c2508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c250c: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x1c250cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c2510: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C2510u;
    SET_GPR_U32(ctx, 31, 0x1C2518u);
    ctx->pc = 0x1C2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2510u;
    // 0x1c2514: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C2510u, 0x1C2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2518u;
label_1c2518:
    // 0x1c2518: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C2518u;
    {
        const bool branch_taken_0x1c2518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2518) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C2520u;
label_1c2520:
    // 0x1c2520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2524: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1c2524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1c2528: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c2528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c252c: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C252Cu;
    SET_GPR_U32(ctx, 31, 0x1C2534u);
    ctx->pc = 0x1C2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C252Cu;
    // 0x1c2530: 0x24070038  addiu       $a3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C252Cu, 0x1C2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2534u;
label_1c2534:
    // 0x1c2534: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C2534u;
    {
        const bool branch_taken_0x1c2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2534) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C253Cu;
    // 0x1c253c: 0x0  nop
    ctx->pc = 0x1c253cu;
    // NOP
label_1c2540:
    // 0x1c2540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2544: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c2544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c2548: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c2548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c254c: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x1c254cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c2550: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C2550u;
    SET_GPR_U32(ctx, 31, 0x1C2558u);
    ctx->pc = 0x1C2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2550u;
    // 0x1c2554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C2550u, 0x1C2558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2558u;
label_1c2558:
    // 0x1c2558: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C2558u;
    {
        const bool branch_taken_0x1c2558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2558) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C2560u;
label_1c2560:
    // 0x1c2560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2564: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c2564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c2568: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c2568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c256c: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C256Cu;
    SET_GPR_U32(ctx, 31, 0x1C2574u);
    ctx->pc = 0x1C2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C256Cu;
    // 0x1c2570: 0x24070038  addiu       $a3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C256Cu, 0x1C2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2574u;
label_1c2574:
    // 0x1c2574: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2574u;
    {
        const bool branch_taken_0x1c2574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2574) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C257Cu;
    // 0x1c257c: 0x0  nop
    ctx->pc = 0x1c257cu;
    // NOP
label_1c2580:
    // 0x1c2580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2584: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x1c2584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1c2588: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c2588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c258c: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c2590: 0xc070c40  jal         func_1C3100
    ctx->pc = 0x1C2590u;
    SET_GPR_U32(ctx, 31, 0x1C2598u);
    ctx->pc = 0x1C2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2590u;
    // 0x1c2594: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3100u, 0x1C2590u, 0x1C2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2598u;
label_1c2598:
    // 0x1c2598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2598u;
    {
        const bool branch_taken_0x1c2598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2598) {
            ctx->pc = 0x1C25B8u;
            goto label_1c25b8;
        }
    }
    ctx->pc = 0x1C25A0u;
label_1c25a0:
    // 0x1c25a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25a4: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x1c25a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1c25a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c25a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c25ac: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C25ACu;
    SET_GPR_U32(ctx, 31, 0x1C25B4u);
    ctx->pc = 0x1C25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25ACu;
    // 0x1c25b0: 0x24070038  addiu       $a3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C25ACu, 0x1C25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25B4u;
label_1c25b4:
    // 0x1c25b4: 0x0  nop
    ctx->pc = 0x1c25b4u;
    // NOP
label_1c25b8:
    // 0x1c25b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c25b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c25bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c25bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c25c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c25c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c25c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25C4u;
        // 0x1c25c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25CCu;
}
