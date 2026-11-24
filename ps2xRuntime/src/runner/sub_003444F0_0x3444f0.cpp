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

// Function: sub_003444F0
// Address: 0x3444f0 - 0x344ecc
void sub_003444F0_0x3444f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003444F0_0x3444f0");
#endif

    switch (ctx->pc) {
        case 0x34454cu: goto label_34454c;
        case 0x344564u: goto label_344564;
        case 0x34459cu: goto label_34459c;
        case 0x3445b0u: goto label_3445b0;
        case 0x344610u: goto label_344610;
        case 0x344684u: goto label_344684;
        case 0x3446b8u: goto label_3446b8;
        case 0x344750u: goto label_344750;
        case 0x3447f0u: goto label_3447f0;
        case 0x344800u: goto label_344800;
        case 0x34484cu: goto label_34484c;
        case 0x34485cu: goto label_34485c;
        case 0x344870u: goto label_344870;
        case 0x344880u: goto label_344880;
        case 0x3448d8u: goto label_3448d8;
        case 0x3448f4u: goto label_3448f4;
        case 0x344908u: goto label_344908;
        case 0x344924u: goto label_344924;
        case 0x344958u: goto label_344958;
        case 0x344968u: goto label_344968;
        case 0x34497cu: goto label_34497c;
        case 0x3449ccu: goto label_3449cc;
        case 0x344a20u: goto label_344a20;
        case 0x344a30u: goto label_344a30;
        case 0x344ad8u: goto label_344ad8;
        case 0x344b08u: goto label_344b08;
        case 0x344b20u: goto label_344b20;
        case 0x344b34u: goto label_344b34;
        case 0x344b58u: goto label_344b58;
        case 0x344b68u: goto label_344b68;
        case 0x344b78u: goto label_344b78;
        case 0x344ba0u: goto label_344ba0;
        case 0x344bacu: goto label_344bac;
        case 0x344bccu: goto label_344bcc;
        case 0x344becu: goto label_344bec;
        case 0x344c0cu: goto label_344c0c;
        case 0x344c1cu: goto label_344c1c;
        case 0x344ce0u: goto label_344ce0;
        case 0x344ce8u: goto label_344ce8;
        case 0x344d20u: goto label_344d20;
        case 0x344d34u: goto label_344d34;
        case 0x344d58u: goto label_344d58;
        case 0x344d68u: goto label_344d68;
        case 0x344d78u: goto label_344d78;
        case 0x344da0u: goto label_344da0;
        case 0x344e0cu: goto label_344e0c;
        case 0x344eb8u: goto label_344eb8;
        default: break;
    }

    ctx->pc = 0x3444f0u;

    // 0x3444f0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3444f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3444f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3444f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3444f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3444f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3444fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3444fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x344500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344504: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x344504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x344508: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x344508u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x34450c: 0x1020026a  beqz        $at, . + 4 + (0x26A << 2)
    ctx->pc = 0x34450Cu;
    {
        const bool branch_taken_0x34450c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x344510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34450Cu;
        // 0x344510: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34450c) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344514u;
    // 0x344514: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x344514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x344518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x344518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34451c: 0x24a5f490  addiu       $a1, $a1, -0xB70
    ctx->pc = 0x34451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964368));
    // 0x344520: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x344520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x344524: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x344524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344528: 0x600008  jr          $v1
    ctx->pc = 0x344528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x344530u: goto label_344530;
            case 0x3445C0u: goto label_3445c0;
            case 0x3445E0u: goto label_3445e0;
            case 0x344AE0u: goto label_344ae0;
            case 0x344B10u: goto label_344b10;
            case 0x344CD0u: goto label_344cd0;
            case 0x344D10u: goto label_344d10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344528u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x344530u;
label_344530:
    // 0x344530: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x344530u;
    {
        const bool branch_taken_0x344530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x344530) {
            ctx->pc = 0x3445A8u;
            goto label_3445a8;
        }
    }
    ctx->pc = 0x344538u;
    // 0x344538: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x344538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x34453c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34453cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344540: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x344540u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x344544: 0xc0a9868  jal         func_2A61A0
    ctx->pc = 0x344544u;
    SET_GPR_U32(ctx, 31, 0x34454Cu);
    ctx->pc = 0x344548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344544u;
    // 0x344548: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A61A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A61A0u, 0x344544u, 0x34454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34454Cu;
label_34454c:
    // 0x34454c: 0xae220574  sw          $v0, 0x574($s1)
    ctx->pc = 0x34454cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 2));
    // 0x344550: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x344550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344554: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x344554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x344558: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x344558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34455c: 0xc0a9858  jal         func_2A6160
    ctx->pc = 0x34455Cu;
    SET_GPR_U32(ctx, 31, 0x344564u);
    ctx->pc = 0x344560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34455Cu;
    // 0x344560: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6160u, 0x34455Cu, 0x344564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344564u;
label_344564:
    // 0x344564: 0xae220570  sw          $v0, 0x570($s1)
    ctx->pc = 0x344564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 2));
    // 0x344568: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x344568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34456c: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x34456cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x344570: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x344570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x344574: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x344574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x344578: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x344578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x34457c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34457cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344580: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x344580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x344584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x344584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x344588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34458c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34458cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344590: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x344590u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344594: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x344594u;
    SET_GPR_U32(ctx, 31, 0x34459Cu);
    ctx->pc = 0x344598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344594u;
    // 0x344598: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x344594u, 0x34459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34459Cu;
label_34459c:
    // 0x34459c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34459Cu;
    {
        const bool branch_taken_0x34459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34459c) {
            ctx->pc = 0x3445B0u;
            goto label_3445b0;
        }
    }
    ctx->pc = 0x3445A4u;
    // 0x3445a4: 0x0  nop
    ctx->pc = 0x3445a4u;
    // NOP
label_3445a8:
    // 0x3445a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3445A8u;
    SET_GPR_U32(ctx, 31, 0x3445B0u);
    ctx->pc = 0x3445ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445A8u;
    // 0x3445ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3445A8u, 0x3445B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445B0u;
label_3445b0:
    // 0x3445b0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3445b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3445b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3445b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3445b8: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x3445B8u;
    {
        const bool branch_taken_0x3445b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3445BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445B8u;
        // 0x3445bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445b8) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x3445C0u;
label_3445c0:
    // 0x3445c0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3445c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3445c4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3445c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3445c8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3445c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3445cc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3445ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3445d0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3445d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3445d4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3445d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3445d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3445d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3445dc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3445dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3445e0:
    // 0x3445e0: 0x92230589  lbu         $v1, 0x589($s1)
    ctx->pc = 0x3445e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1417)));
    // 0x3445e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3445e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3445e8: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x3445E8u;
    {
        const bool branch_taken_0x3445e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3445ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445E8u;
        // 0x3445ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3445e8) {
            ctx->pc = 0x344778u;
            goto label_344778;
        }
    }
    ctx->pc = 0x3445F0u;
    // 0x3445f0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3445F0u;
    {
        const bool branch_taken_0x3445f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3445f0) {
            ctx->pc = 0x3446B0u;
            goto label_3446b0;
        }
    }
    ctx->pc = 0x3445F8u;
    // 0x3445f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3445F8u;
    {
        const bool branch_taken_0x3445f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3445f8) {
            ctx->pc = 0x344608u;
            goto label_344608;
        }
    }
    ctx->pc = 0x344600u;
    // 0x344600: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x344600u;
    {
        const bool branch_taken_0x344600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344600) {
            ctx->pc = 0x344800u;
            goto label_344800;
        }
    }
    ctx->pc = 0x344608u;
label_344608:
    // 0x344608: 0xc0d13b4  jal         func_344ED0
    ctx->pc = 0x344608u;
    SET_GPR_U32(ctx, 31, 0x344610u);
    ctx->pc = 0x34460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344608u;
    // 0x34460c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344ED0u, 0x344608u, 0x344610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344610u;
label_344610:
    // 0x344610: 0x9222058a  lbu         $v0, 0x58A($s1)
    ctx->pc = 0x344610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1418)));
    // 0x344614: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344614u;
    {
        const bool branch_taken_0x344614 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x344618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344614u;
        // 0x344618: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344614) {
            ctx->pc = 0x344628u;
            goto label_344628;
        }
    }
    ctx->pc = 0x34461Cu;
    // 0x34461c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34461cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x344620u;
    {
        const bool branch_taken_0x344620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344620u;
        // 0x344624: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344620) {
            ctx->pc = 0x344640u;
            goto label_344640;
        }
    }
    ctx->pc = 0x344628u;
label_344628:
    // 0x344628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34462c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x344630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344634: 0x0  nop
    ctx->pc = 0x344634u;
    // NOP
    // 0x344638: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x344638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34463c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34463cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_344640:
    // 0x344640: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x344640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x344644: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x344644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x344648: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x344648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34464c: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x34464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x344650: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x344650u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344654: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x344654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x344658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34465c: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x34465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x344660: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x344660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x344664: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x344664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x344668: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x344668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x34466c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x34466cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x344670: 0xc62c0578  lwc1        $f12, 0x578($s1)
    ctx->pc = 0x344670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344674: 0x0  nop
    ctx->pc = 0x344674u;
    // NOP
    // 0x344678: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x344678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x34467c: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x34467Cu;
    SET_GPR_U32(ctx, 31, 0x344684u);
    ctx->pc = 0x344680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34467Cu;
    // 0x344680: 0x46001341  sub.s       $f13, $f2, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x34467Cu, 0x344684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344684u;
label_344684:
    // 0x344684: 0x9222058a  lbu         $v0, 0x58A($s1)
    ctx->pc = 0x344684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1418)));
    // 0x344688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x344688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34468c: 0xa222058a  sb          $v0, 0x58A($s1)
    ctx->pc = 0x34468cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1418), (uint8_t)GPR_U32(ctx, 2));
    // 0x344690: 0x9222058a  lbu         $v0, 0x58A($s1)
    ctx->pc = 0x344690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1418)));
    // 0x344694: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x344694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x344698: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x344698u;
    {
        const bool branch_taken_0x344698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344698u;
        // 0x34469c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344698) {
            ctx->pc = 0x344800u;
            goto label_344800;
        }
    }
    ctx->pc = 0x3446A0u;
    // 0x3446a0: 0xa2220589  sb          $v0, 0x589($s1)
    ctx->pc = 0x3446a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1417), (uint8_t)GPR_U32(ctx, 2));
    // 0x3446a4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3446A4u;
    {
        const bool branch_taken_0x3446a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3446A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446A4u;
        // 0x3446a8: 0xa220058a  sb          $zero, 0x58A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1418), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446a4) {
            ctx->pc = 0x344800u;
            goto label_344800;
        }
    }
    ctx->pc = 0x3446ACu;
    // 0x3446ac: 0x0  nop
    ctx->pc = 0x3446acu;
    // NOP
label_3446b0:
    // 0x3446b0: 0xc0d13b4  jal         func_344ED0
    ctx->pc = 0x3446B0u;
    SET_GPR_U32(ctx, 31, 0x3446B8u);
    ctx->pc = 0x3446B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446B0u;
    // 0x3446b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344ED0u, 0x3446B0u, 0x3446B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446B8u;
label_3446b8:
    // 0x3446b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3446B8u;
    {
        const bool branch_taken_0x3446b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3446b8) {
            ctx->pc = 0x3446D0u;
            goto label_3446d0;
        }
    }
    ctx->pc = 0x3446C0u;
    // 0x3446c0: 0xae200518  sw          $zero, 0x518($s1)
    ctx->pc = 0x3446c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
    // 0x3446c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3446c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3446c8: 0xa2220589  sb          $v0, 0x589($s1)
    ctx->pc = 0x3446c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1417), (uint8_t)GPR_U32(ctx, 2));
    // 0x3446cc: 0x0  nop
    ctx->pc = 0x3446ccu;
    // NOP
label_3446d0:
    // 0x3446d0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3446d4: 0xc621057c  lwc1        $f1, 0x57C($s1)
    ctx->pc = 0x3446d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3446d8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3446d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3446dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3446dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3446e0: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x3446e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3446e4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3446e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3446e8: 0x2442f468  addiu       $v0, $v0, -0xB98
    ctx->pc = 0x3446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964328));
    // 0x3446ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3446ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3446f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3446f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3446f4: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x3446f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
    // 0x3446f8: 0x9224058d  lbu         $a0, 0x58D($s1)
    ctx->pc = 0x3446f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1421)));
    // 0x3446fc: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x3446fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344700: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x344700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x344704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x344704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x344708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x344708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34470c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x344710: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x344710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344714: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x344714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344718: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x344718u;
    {
        const bool branch_taken_0x344718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344718) {
            ctx->pc = 0x344728u;
            goto label_344728;
        }
    }
    ctx->pc = 0x344720u;
    // 0x344720: 0xe6210578  swc1        $f1, 0x578($s1)
    ctx->pc = 0x344720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
    // 0x344724: 0x0  nop
    ctx->pc = 0x344724u;
    // NOP
label_344728:
    // 0x344728: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x344728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34472c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34472cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344730: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x344730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x344734: 0xc62c0578  lwc1        $f12, 0x578($s1)
    ctx->pc = 0x344734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344738: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x344738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x34473c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x34473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x344740: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x344740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x344744: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x344744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x344748: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x344748u;
    SET_GPR_U32(ctx, 31, 0x344750u);
    ctx->pc = 0x34474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344748u;
    // 0x34474c: 0x26260550  addiu       $a2, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x344748u, 0x344750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344750u;
label_344750:
    // 0x344750: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x344750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x344754: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x344754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x344758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x344758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34475c: 0x0  nop
    ctx->pc = 0x34475cu;
    // NOP
    // 0x344760: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x344760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344764: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x344764u;
    {
        const bool branch_taken_0x344764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344764u;
        // 0x344768: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344764) {
            ctx->pc = 0x344800u;
            goto label_344800;
        }
    }
    ctx->pc = 0x34476Cu;
    // 0x34476c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x34476Cu;
    {
        const bool branch_taken_0x34476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34476Cu;
        // 0x344770: 0xa2220589  sb          $v0, 0x589($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1417), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34476c) {
            ctx->pc = 0x344800u;
            goto label_344800;
        }
    }
    ctx->pc = 0x344774u;
    // 0x344774: 0x0  nop
    ctx->pc = 0x344774u;
    // NOP
label_344778:
    // 0x344778: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x344778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x34477c: 0xc621057c  lwc1        $f1, 0x57C($s1)
    ctx->pc = 0x34477cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344780: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x344780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x344784: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x344784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344788: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x344788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34478c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34478cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x344790: 0x2442f468  addiu       $v0, $v0, -0xB98
    ctx->pc = 0x344790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964328));
    // 0x344794: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x344794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x344798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x344798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34479c: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x34479cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
    // 0x3447a0: 0x9224058d  lbu         $a0, 0x58D($s1)
    ctx->pc = 0x3447a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1421)));
    // 0x3447a4: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x3447a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3447a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3447a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3447ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3447acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3447b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3447b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3447b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3447b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3447b8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3447b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3447bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3447bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3447c0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3447C0u;
    {
        const bool branch_taken_0x3447c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3447c0) {
            ctx->pc = 0x3447D0u;
            goto label_3447d0;
        }
    }
    ctx->pc = 0x3447C8u;
    // 0x3447c8: 0xe6210578  swc1        $f1, 0x578($s1)
    ctx->pc = 0x3447c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
    // 0x3447cc: 0x0  nop
    ctx->pc = 0x3447ccu;
    // NOP
label_3447d0:
    // 0x3447d0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3447d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3447d4: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x3447d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3447d8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3447d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3447dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3447dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3447e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3447e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3447e4: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3447e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3447e8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3447E8u;
    SET_GPR_U32(ctx, 31, 0x3447F0u);
    ctx->pc = 0x3447ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447E8u;
    // 0x3447ec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3447E8u, 0x3447F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447F0u;
label_3447f0:
    // 0x3447f0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3447f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3447f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3447f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3447f8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3447F8u;
    SET_GPR_U32(ctx, 31, 0x344800u);
    ctx->pc = 0x3447FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447F8u;
    // 0x3447fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3447F8u, 0x344800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344800u;
label_344800:
    // 0x344800: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x344800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x344804: 0x78276c20  lq          $a3, 0x6C20($at)
    ctx->pc = 0x344804u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x696C20u));
    // 0x344808: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x344808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34480c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34480cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344810: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x344810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x344814: 0x7fa700b0  sq          $a3, 0xB0($sp)
    ctx->pc = 0x344814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 7));
    // 0x344818: 0x78266c30  lq          $a2, 0x6C30($at)
    ctx->pc = 0x344818u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x696C30u));
    // 0x34481c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x34481cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x344820: 0x7fa600c0  sq          $a2, 0xC0($sp)
    ctx->pc = 0x344820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    // 0x344824: 0x78236c40  lq          $v1, 0x6C40($at)
    ctx->pc = 0x344824u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x696C40u));
    // 0x344828: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x344828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x34482c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x34482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x344830: 0x78226c50  lq          $v0, 0x6C50($at)
    ctx->pc = 0x344830u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696C50u));
    // 0x344834: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x344834u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x344838: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x344838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34483c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x34483cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x344840: 0x8e260570  lw          $a2, 0x570($s1)
    ctx->pc = 0x344840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x344844: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x344844u;
    SET_GPR_U32(ctx, 31, 0x34484Cu);
    ctx->pc = 0x344848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344844u;
    // 0x344848: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x344844u, 0x34484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34484Cu;
label_34484c:
    // 0x34484c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34484Cu;
    {
        const bool branch_taken_0x34484c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34484Cu;
        // 0x344850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34484c) {
            ctx->pc = 0x344860u;
            goto label_344860;
        }
    }
    ctx->pc = 0x344854u;
    // 0x344854: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344854u;
    SET_GPR_U32(ctx, 31, 0x34485Cu);
    ctx->pc = 0x344858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344854u;
    // 0x344858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344854u, 0x34485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34485Cu;
label_34485c:
    // 0x34485c: 0x0  nop
    ctx->pc = 0x34485cu;
    // NOP
label_344860:
    // 0x344860: 0x8e260574  lw          $a2, 0x574($s1)
    ctx->pc = 0x344860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x344864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344868: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x344868u;
    SET_GPR_U32(ctx, 31, 0x344870u);
    ctx->pc = 0x34486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344868u;
    // 0x34486c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x344868u, 0x344870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344870u;
label_344870:
    // 0x344870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344870u;
    {
        const bool branch_taken_0x344870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344870u;
        // 0x344874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344870) {
            ctx->pc = 0x344880u;
            goto label_344880;
        }
    }
    ctx->pc = 0x344878u;
    // 0x344878: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344878u;
    SET_GPR_U32(ctx, 31, 0x344880u);
    ctx->pc = 0x34487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344878u;
    // 0x34487c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344878u, 0x344880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344880u;
label_344880:
    // 0x344880: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x344884: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x344884u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x344888: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x344888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x34488c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344890: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x344890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x344894: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344898: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34489c: 0x7fa900f0  sq          $t1, 0xF0($sp)
    ctx->pc = 0x34489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 9));
    // 0x3448a0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3448a0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3448a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3448a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3448a8: 0x7fa60100  sq          $a2, 0x100($sp)
    ctx->pc = 0x3448a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 6));
    // 0x3448ac: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3448acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3448b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3448b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3448b4: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x3448b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x3448b8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3448b8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3448bc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3448bcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3448c0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3448c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3448c4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3448c4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3448c8: 0x9226058b  lbu         $a2, 0x58B($s1)
    ctx->pc = 0x3448c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1419)));
    // 0x3448cc: 0xc62c0580  lwc1        $f12, 0x580($s1)
    ctx->pc = 0x3448ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3448d0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3448D0u;
    SET_GPR_U32(ctx, 31, 0x3448D8u);
    ctx->pc = 0x3448D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448D0u;
    // 0x3448d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3448D0u, 0x3448D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448D8u;
label_3448d8:
    // 0x3448d8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3448D8u;
    {
        const bool branch_taken_0x3448d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3448d8) {
            ctx->pc = 0x3449E0u;
            goto label_3449e0;
        }
    }
    ctx->pc = 0x3448E0u;
    // 0x3448e0: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x3448e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x3448e4: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3448e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x3448e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3448e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448ec: 0xc097184  jal         func_25C610
    ctx->pc = 0x3448ECu;
    SET_GPR_U32(ctx, 31, 0x3448F4u);
    ctx->pc = 0x3448F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448ECu;
    // 0x3448f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x3448ECu, 0x3448F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448F4u;
label_3448f4:
    // 0x3448f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3448f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3448F8u;
    {
        const bool branch_taken_0x3448f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3448FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448F8u;
        // 0x3448fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448f8) {
            ctx->pc = 0x344910u;
            goto label_344910;
        }
    }
    ctx->pc = 0x344900u;
    // 0x344900: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344900u;
    SET_GPR_U32(ctx, 31, 0x344908u);
    ctx->pc = 0x344904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344900u;
    // 0x344904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344900u, 0x344908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344908u;
label_344908:
    // 0x344908: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x344908u;
    {
        const bool branch_taken_0x344908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344908) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344910u;
label_344910:
    // 0x344910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344914: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x344914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x344918: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x344918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34491c: 0xc0a22a8  jal         func_288AA0
    ctx->pc = 0x34491Cu;
    SET_GPR_U32(ctx, 31, 0x344924u);
    ctx->pc = 0x344920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34491Cu;
    // 0x344920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288AA0u, 0x34491Cu, 0x344924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344924u;
label_344924:
    // 0x344924: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x344924u;
    {
        const bool branch_taken_0x344924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344924) {
            ctx->pc = 0x344970u;
            goto label_344970;
        }
    }
    ctx->pc = 0x34492Cu;
    // 0x34492c: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x34492cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x344930: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x344930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x344934: 0xa222058e  sb          $v0, 0x58E($s1)
    ctx->pc = 0x344934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1422), (uint8_t)GPR_U32(ctx, 2));
    // 0x344938: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x344938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34493c: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x34493cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x344940: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x344940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x344944: 0x9223058e  lbu         $v1, 0x58E($s1)
    ctx->pc = 0x344944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1422)));
    // 0x344948: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x34494c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x34494cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344950: 0xc0766ec  jal         func_1D9BB0
    ctx->pc = 0x344950u;
    SET_GPR_U32(ctx, 31, 0x344958u);
    ctx->pc = 0x344954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344950u;
    // 0x344954: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BB0u, 0x344950u, 0x344958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344958u;
label_344958:
    // 0x344958: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x344958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x34495c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34495cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x344960: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x344960u;
    SET_GPR_U32(ctx, 31, 0x344968u);
    ctx->pc = 0x344964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344960u;
    // 0x344964: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x344960u, 0x344968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344968u;
label_344968:
    // 0x344968: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x344968u;
    {
        const bool branch_taken_0x344968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344968) {
            ctx->pc = 0x344998u;
            goto label_344998;
        }
    }
    ctx->pc = 0x344970u;
label_344970:
    // 0x344970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344974: 0xc096f84  jal         func_25BE10
    ctx->pc = 0x344974u;
    SET_GPR_U32(ctx, 31, 0x34497Cu);
    ctx->pc = 0x344978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344974u;
    // 0x344978: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE10u, 0x344974u, 0x34497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34497Cu;
label_34497c:
    // 0x34497c: 0xa222058e  sb          $v0, 0x58E($s1)
    ctx->pc = 0x34497cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1422), (uint8_t)GPR_U32(ctx, 2));
    // 0x344980: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x344984: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x344984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x344988: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x344988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x34498c: 0x78225c80  lq          $v0, 0x5C80($at)
    ctx->pc = 0x34498cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C80u));
    // 0x344990: 0x7e220560  sq          $v0, 0x560($s1)
    ctx->pc = 0x344990u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1376), GPR_VEC(ctx, 2));
    // 0x344994: 0x0  nop
    ctx->pc = 0x344994u;
    // NOP
label_344998:
    // 0x344998: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x344998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34499c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34499cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3449a0: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x3449a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
    // 0x3449a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3449a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3449a8: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x3449a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x3449ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3449acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449b0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3449b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3449b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3449b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3449b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3449bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3449c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3449C4u;
    SET_GPR_U32(ctx, 31, 0x3449CCu);
    ctx->pc = 0x3449C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449C4u;
    // 0x3449c8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3449C4u, 0x3449CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449CCu;
label_3449cc:
    // 0x3449cc: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3449ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3449d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3449d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3449d4: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x3449D4u;
    {
        const bool branch_taken_0x3449d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449D4u;
        // 0x3449d8: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449d4) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x3449DCu;
    // 0x3449dc: 0x0  nop
    ctx->pc = 0x3449dcu;
    // NOP
label_3449e0:
    // 0x3449e0: 0x9225058d  lbu         $a1, 0x58D($s1)
    ctx->pc = 0x3449e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1421)));
    // 0x3449e4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3449e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3449e8: 0x2463f471  addiu       $v1, $v1, -0xB8F
    ctx->pc = 0x3449e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964337));
    // 0x3449ec: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3449ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3449f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3449f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3449f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3449f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3449f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3449f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3449fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3449fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344a00: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x344A00u;
    {
        const bool branch_taken_0x344a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344a00) {
            ctx->pc = 0x344A30u;
            goto label_344a30;
        }
    }
    ctx->pc = 0x344A08u;
    // 0x344a08: 0x9226058c  lbu         $a2, 0x58C($s1)
    ctx->pc = 0x344a08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1420)));
    // 0x344a0c: 0xc62c0584  lwc1        $f12, 0x584($s1)
    ctx->pc = 0x344a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a14: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x344a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x344a18: 0xc0c0960  jal         func_302580
    ctx->pc = 0x344A18u;
    SET_GPR_U32(ctx, 31, 0x344A20u);
    ctx->pc = 0x344A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A18u;
    // 0x344a1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x344A18u, 0x344A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A20u;
label_344a20:
    // 0x344a20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344A20u;
    {
        const bool branch_taken_0x344a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A20u;
        // 0x344a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a20) {
            ctx->pc = 0x344A30u;
            goto label_344a30;
        }
    }
    ctx->pc = 0x344A28u;
    // 0x344a28: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344A28u;
    SET_GPR_U32(ctx, 31, 0x344A30u);
    ctx->pc = 0x344A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A28u;
    // 0x344a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344A28u, 0x344A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A30u;
label_344a30:
    // 0x344a30: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x344a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x344a34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x344A34u;
    {
        const bool branch_taken_0x344a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A34u;
        // 0x344a38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a34) {
            ctx->pc = 0x344A48u;
            goto label_344a48;
        }
    }
    ctx->pc = 0x344A3Cu;
    // 0x344a3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x344A3Cu;
    {
        const bool branch_taken_0x344a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344a3c) {
            ctx->pc = 0x344AC8u;
            goto label_344ac8;
        }
    }
    ctx->pc = 0x344A44u;
    // 0x344a44: 0x0  nop
    ctx->pc = 0x344a44u;
    // NOP
label_344a48:
    // 0x344a48: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x344a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344a4c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x344a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x344a50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x344a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x344a54: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344a54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344a58: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x344a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x344a5c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x344A5Cu;
    {
        const bool branch_taken_0x344a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x344a5c) {
            ctx->pc = 0x344A98u;
            goto label_344a98;
        }
    }
    ctx->pc = 0x344A64u;
    // 0x344a64: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x344a64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344a68: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x344a68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x344a6c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x344A6Cu;
    {
        const bool branch_taken_0x344a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x344A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A6Cu;
        // 0x344a70: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a6c) {
            ctx->pc = 0x344AC0u;
            goto label_344ac0;
        }
    }
    ctx->pc = 0x344A74u;
    // 0x344a74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a78: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x344a78u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x344a7c: 0x0  nop
    ctx->pc = 0x344a7cu;
    // NOP
    // 0x344a80: 0x0  nop
    ctx->pc = 0x344a80u;
    // NOP
    // 0x344a84: 0x2010  mfhi        $a0
    ctx->pc = 0x344a84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x344a88: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344a88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344a8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x344A8Cu;
    {
        const bool branch_taken_0x344a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A8Cu;
        // 0x344a90: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a8c) {
            ctx->pc = 0x344AC0u;
            goto label_344ac0;
        }
    }
    ctx->pc = 0x344A94u;
    // 0x344a94: 0x0  nop
    ctx->pc = 0x344a94u;
    // NOP
label_344a98:
    // 0x344a98: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x344a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344a9c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x344a9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x344aa0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344AA0u;
    {
        const bool branch_taken_0x344aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344aa0) {
            ctx->pc = 0x344AC0u;
            goto label_344ac0;
        }
    }
    ctx->pc = 0x344AA8u;
    // 0x344aa8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ab0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x344ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x344AB4u;
    {
        const bool branch_taken_0x344ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AB4u;
        // 0x344ab8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ab4) {
            ctx->pc = 0x344AC8u;
            goto label_344ac8;
        }
    }
    ctx->pc = 0x344ABCu;
    // 0x344abc: 0x0  nop
    ctx->pc = 0x344abcu;
    // NOP
label_344ac0:
    // 0x344ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ac4: 0x0  nop
    ctx->pc = 0x344ac4u;
    // NOP
label_344ac8:
    // 0x344ac8: 0x146000fb  bnez        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x344AC8u;
    {
        const bool branch_taken_0x344ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x344ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AC8u;
        // 0x344acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ac8) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344AD0u;
    // 0x344ad0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344AD0u;
    SET_GPR_U32(ctx, 31, 0x344AD8u);
    ctx->pc = 0x344AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344AD0u;
    // 0x344ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344AD0u, 0x344AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344AD8u;
label_344ad8:
    // 0x344ad8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x344AD8u;
    {
        const bool branch_taken_0x344ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344ad8) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344AE0u;
label_344ae0:
    // 0x344ae0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x344ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x344ae4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x344ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x344ae8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x344ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x344aec: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x344aecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x344af0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x344af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x344af4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x344af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x344af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x344af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x344afc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x344afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x344b00: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x344B00u;
    SET_GPR_U32(ctx, 31, 0x344B08u);
    ctx->pc = 0x344B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B00u;
    // 0x344b04: 0x8e240574  lw          $a0, 0x574($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x344B00u, 0x344B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B08u;
label_344b08:
    // 0x344b08: 0xae200574  sw          $zero, 0x574($s1)
    ctx->pc = 0x344b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 0));
    // 0x344b0c: 0x0  nop
    ctx->pc = 0x344b0cu;
    // NOP
label_344b10:
    // 0x344b10: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x344b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x344b14: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x344b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x344b18: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x344B18u;
    SET_GPR_U32(ctx, 31, 0x344B20u);
    ctx->pc = 0x344B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B18u;
    // 0x344b1c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x344B18u, 0x344B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B20u;
label_344b20:
    // 0x344b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b24: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344B24u;
    {
        const bool branch_taken_0x344b24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x344B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B24u;
        // 0x344b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b24) {
            ctx->pc = 0x344B40u;
            goto label_344b40;
        }
    }
    ctx->pc = 0x344B2Cu;
    // 0x344b2c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344B2Cu;
    SET_GPR_U32(ctx, 31, 0x344B34u);
    ctx->pc = 0x344B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B2Cu;
    // 0x344b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344B2Cu, 0x344B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B34u;
label_344b34:
    // 0x344b34: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x344B34u;
    {
        const bool branch_taken_0x344b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344b34) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344B3Cu;
    // 0x344b3c: 0x0  nop
    ctx->pc = 0x344b3cu;
    // NOP
label_344b40:
    // 0x344b40: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x344b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x344b44: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x344b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344b48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344B48u;
    {
        const bool branch_taken_0x344b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B48u;
        // 0x344b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b48) {
            ctx->pc = 0x344B60u;
            goto label_344b60;
        }
    }
    ctx->pc = 0x344B50u;
    // 0x344b50: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344B50u;
    SET_GPR_U32(ctx, 31, 0x344B58u);
    ctx->pc = 0x344B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B50u;
    // 0x344b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344B50u, 0x344B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B58u;
label_344b58:
    // 0x344b58: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x344B58u;
    {
        const bool branch_taken_0x344b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344b58) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344B60u;
label_344b60:
    // 0x344b60: 0xc097864  jal         func_25E190
    ctx->pc = 0x344B60u;
    SET_GPR_U32(ctx, 31, 0x344B68u);
    ctx->pc = 0x344B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B60u;
    // 0x344b64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x344B60u, 0x344B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B68u;
label_344b68:
    // 0x344b68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344B68u;
    {
        const bool branch_taken_0x344b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B68u;
        // 0x344b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b68) {
            ctx->pc = 0x344B80u;
            goto label_344b80;
        }
    }
    ctx->pc = 0x344B70u;
    // 0x344b70: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344B70u;
    SET_GPR_U32(ctx, 31, 0x344B78u);
    ctx->pc = 0x344B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B70u;
    // 0x344b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344B70u, 0x344B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B78u;
label_344b78:
    // 0x344b78: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x344B78u;
    {
        const bool branch_taken_0x344b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344b78) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344B80u;
label_344b80:
    // 0x344b80: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x344b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x344b84: 0x9223058e  lbu         $v1, 0x58E($s1)
    ctx->pc = 0x344b84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1422)));
    // 0x344b88: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x344b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x344b8c: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x344b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x344b90: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x344b94: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x344b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344b98: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x344B98u;
    SET_GPR_U32(ctx, 31, 0x344BA0u);
    ctx->pc = 0x344B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B98u;
    // 0x344b9c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x344B98u, 0x344BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BA0u;
label_344ba0:
    // 0x344ba0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x344ba4: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x344BA4u;
    SET_GPR_U32(ctx, 31, 0x344BACu);
    ctx->pc = 0x344BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BA4u;
    // 0x344ba8: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x344BA4u, 0x344BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BACu;
label_344bac:
    // 0x344bac: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x344bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x344bb0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x344bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x344bb4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x344bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x344bb8: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x344bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x344bbc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x344bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x344bc0: 0x24e75c10  addiu       $a3, $a3, 0x5C10
    ctx->pc = 0x344bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23568));
    // 0x344bc4: 0xc097384  jal         func_25CE10
    ctx->pc = 0x344BC4u;
    SET_GPR_U32(ctx, 31, 0x344BCCu);
    ctx->pc = 0x344BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BC4u;
    // 0x344bc8: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x344BC4u, 0x344BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BCCu;
label_344bcc:
    // 0x344bcc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x344bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x344bd0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x344bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x344bd4: 0x9223058e  lbu         $v1, 0x58E($s1)
    ctx->pc = 0x344bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1422)));
    // 0x344bd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x344bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344bdc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x344be0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x344be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344be4: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x344BE4u;
    SET_GPR_U32(ctx, 31, 0x344BECu);
    ctx->pc = 0x344BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BE4u;
    // 0x344be8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x344BE4u, 0x344BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BECu;
label_344bec:
    // 0x344bec: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x344becu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x344bf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x344bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344bf8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x344bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x344bfc: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x344bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x344c00: 0x8e260570  lw          $a2, 0x570($s1)
    ctx->pc = 0x344c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x344c04: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x344C04u;
    SET_GPR_U32(ctx, 31, 0x344C0Cu);
    ctx->pc = 0x344C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C04u;
    // 0x344c08: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x344C04u, 0x344C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C0Cu;
label_344c0c:
    // 0x344c0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344C0Cu;
    {
        const bool branch_taken_0x344c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C0Cu;
        // 0x344c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c0c) {
            ctx->pc = 0x344C20u;
            goto label_344c20;
        }
    }
    ctx->pc = 0x344C14u;
    // 0x344c14: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344C14u;
    SET_GPR_U32(ctx, 31, 0x344C1Cu);
    ctx->pc = 0x344C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C14u;
    // 0x344c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344C14u, 0x344C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C1Cu;
label_344c1c:
    // 0x344c1c: 0x0  nop
    ctx->pc = 0x344c1cu;
    // NOP
label_344c20:
    // 0x344c20: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x344c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x344c24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x344C24u;
    {
        const bool branch_taken_0x344c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C24u;
        // 0x344c28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c24) {
            ctx->pc = 0x344C38u;
            goto label_344c38;
        }
    }
    ctx->pc = 0x344C2Cu;
    // 0x344c2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x344C2Cu;
    {
        const bool branch_taken_0x344c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344c2c) {
            ctx->pc = 0x344CB8u;
            goto label_344cb8;
        }
    }
    ctx->pc = 0x344C34u;
    // 0x344c34: 0x0  nop
    ctx->pc = 0x344c34u;
    // NOP
label_344c38:
    // 0x344c38: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x344c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344c3c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x344c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x344c40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x344c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x344c44: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344c44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344c48: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x344c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x344c4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x344C4Cu;
    {
        const bool branch_taken_0x344c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x344c4c) {
            ctx->pc = 0x344C88u;
            goto label_344c88;
        }
    }
    ctx->pc = 0x344C54u;
    // 0x344c54: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x344c54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344c58: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x344c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x344c5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x344C5Cu;
    {
        const bool branch_taken_0x344c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x344C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C5Cu;
        // 0x344c60: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c5c) {
            ctx->pc = 0x344CB0u;
            goto label_344cb0;
        }
    }
    ctx->pc = 0x344C64u;
    // 0x344c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344c68: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x344c68u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x344c6c: 0x0  nop
    ctx->pc = 0x344c6cu;
    // NOP
    // 0x344c70: 0x0  nop
    ctx->pc = 0x344c70u;
    // NOP
    // 0x344c74: 0x2010  mfhi        $a0
    ctx->pc = 0x344c74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x344c78: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344c78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344c7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x344C7Cu;
    {
        const bool branch_taken_0x344c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C7Cu;
        // 0x344c80: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c7c) {
            ctx->pc = 0x344CB0u;
            goto label_344cb0;
        }
    }
    ctx->pc = 0x344C84u;
    // 0x344c84: 0x0  nop
    ctx->pc = 0x344c84u;
    // NOP
label_344c88:
    // 0x344c88: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x344c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344c8c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x344c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x344c90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344C90u;
    {
        const bool branch_taken_0x344c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344c90) {
            ctx->pc = 0x344CB0u;
            goto label_344cb0;
        }
    }
    ctx->pc = 0x344C98u;
    // 0x344c98: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ca0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x344ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x344CA4u;
    {
        const bool branch_taken_0x344ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CA4u;
        // 0x344ca8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ca4) {
            ctx->pc = 0x344CB8u;
            goto label_344cb8;
        }
    }
    ctx->pc = 0x344CACu;
    // 0x344cac: 0x0  nop
    ctx->pc = 0x344cacu;
    // NOP
label_344cb0:
    // 0x344cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344cb4: 0x0  nop
    ctx->pc = 0x344cb4u;
    // NOP
label_344cb8:
    // 0x344cb8: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x344CB8u;
    {
        const bool branch_taken_0x344cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344cb8) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344CC0u;
    // 0x344cc0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x344cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x344cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x344cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x344cc8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x344CC8u;
    {
        const bool branch_taken_0x344cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CC8u;
        // 0x344ccc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cc8) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344CD0u;
label_344cd0:
    // 0x344cd0: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x344cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x344cd4: 0xa222058b  sb          $v0, 0x58B($s1)
    ctx->pc = 0x344cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1419), (uint8_t)GPR_U32(ctx, 2));
    // 0x344cd8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x344CD8u;
    SET_GPR_U32(ctx, 31, 0x344CE0u);
    ctx->pc = 0x344CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CD8u;
    // 0x344cdc: 0x8e240570  lw          $a0, 0x570($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x344CD8u, 0x344CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344CE0u;
label_344ce0:
    // 0x344ce0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x344CE0u;
    SET_GPR_U32(ctx, 31, 0x344CE8u);
    ctx->pc = 0x344CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CE0u;
    // 0x344ce4: 0x8e240574  lw          $a0, 0x574($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x344CE0u, 0x344CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344CE8u;
label_344ce8:
    // 0x344ce8: 0xae200570  sw          $zero, 0x570($s1)
    ctx->pc = 0x344ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
    // 0x344cec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x344cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x344cf0: 0xae200574  sw          $zero, 0x574($s1)
    ctx->pc = 0x344cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 0));
    // 0x344cf4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x344cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x344cf8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x344cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x344cfc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x344cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x344d00: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x344d00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x344d04: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x344d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x344d08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x344d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x344d0c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x344d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_344d10:
    // 0x344d10: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x344d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x344d14: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x344d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x344d18: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x344D18u;
    SET_GPR_U32(ctx, 31, 0x344D20u);
    ctx->pc = 0x344D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D18u;
    // 0x344d1c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x344D18u, 0x344D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D20u;
label_344d20:
    // 0x344d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d24: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344D24u;
    {
        const bool branch_taken_0x344d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x344D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D24u;
        // 0x344d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d24) {
            ctx->pc = 0x344D40u;
            goto label_344d40;
        }
    }
    ctx->pc = 0x344D2Cu;
    // 0x344d2c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344D2Cu;
    SET_GPR_U32(ctx, 31, 0x344D34u);
    ctx->pc = 0x344D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D2Cu;
    // 0x344d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344D2Cu, 0x344D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D34u;
label_344d34:
    // 0x344d34: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x344D34u;
    {
        const bool branch_taken_0x344d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344d34) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344D3Cu;
    // 0x344d3c: 0x0  nop
    ctx->pc = 0x344d3cu;
    // NOP
label_344d40:
    // 0x344d40: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x344d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x344d44: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x344d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344d48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344D48u;
    {
        const bool branch_taken_0x344d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D48u;
        // 0x344d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d48) {
            ctx->pc = 0x344D60u;
            goto label_344d60;
        }
    }
    ctx->pc = 0x344D50u;
    // 0x344d50: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344D50u;
    SET_GPR_U32(ctx, 31, 0x344D58u);
    ctx->pc = 0x344D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D50u;
    // 0x344d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344D50u, 0x344D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D58u;
label_344d58:
    // 0x344d58: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x344D58u;
    {
        const bool branch_taken_0x344d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344d58) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344D60u;
label_344d60:
    // 0x344d60: 0xc097864  jal         func_25E190
    ctx->pc = 0x344D60u;
    SET_GPR_U32(ctx, 31, 0x344D68u);
    ctx->pc = 0x344D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D60u;
    // 0x344d64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x344D60u, 0x344D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D68u;
label_344d68:
    // 0x344d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344D68u;
    {
        const bool branch_taken_0x344d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D68u;
        // 0x344d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d68) {
            ctx->pc = 0x344D80u;
            goto label_344d80;
        }
    }
    ctx->pc = 0x344D70u;
    // 0x344d70: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344D70u;
    SET_GPR_U32(ctx, 31, 0x344D78u);
    ctx->pc = 0x344D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D70u;
    // 0x344d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344D70u, 0x344D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D78u;
label_344d78:
    // 0x344d78: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x344D78u;
    {
        const bool branch_taken_0x344d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344d78) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344D80u;
label_344d80:
    // 0x344d80: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x344d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x344d84: 0x9223058e  lbu         $v1, 0x58E($s1)
    ctx->pc = 0x344d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1422)));
    // 0x344d88: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x344d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x344d8c: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x344d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x344d90: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x344d94: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x344d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344d98: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x344D98u;
    SET_GPR_U32(ctx, 31, 0x344DA0u);
    ctx->pc = 0x344D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D98u;
    // 0x344d9c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x344D98u, 0x344DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344DA0u;
label_344da0:
    // 0x344da0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x344da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344da4: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x344DA4u;
    {
        const bool branch_taken_0x344da4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x344DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DA4u;
        // 0x344da8: 0x28610009  slti        $at, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344da4) {
            ctx->pc = 0x344E10u;
            goto label_344e10;
        }
    }
    ctx->pc = 0x344DACu;
    // 0x344dac: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x344DACu;
    {
        const bool branch_taken_0x344dac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x344dac) {
            ctx->pc = 0x344E10u;
            goto label_344e10;
        }
    }
    ctx->pc = 0x344DB4u;
    // 0x344db4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x344db8: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x344db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x344dbc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x344dbcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x344dc0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x344dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344dc8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x344dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x344dcc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x344dd0: 0x7fa900f0  sq          $t1, 0xF0($sp)
    ctx->pc = 0x344dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 9));
    // 0x344dd4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x344dd4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x344dd8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x344ddc: 0x7fa60100  sq          $a2, 0x100($sp)
    ctx->pc = 0x344ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 6));
    // 0x344de0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x344de0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x344de4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x344de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x344de8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x344de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x344dec: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x344decu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x344df0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x344df0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x344df4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x344df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x344df8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x344df8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x344dfc: 0x9226058b  lbu         $a2, 0x58B($s1)
    ctx->pc = 0x344dfcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1419)));
    // 0x344e00: 0xc62c0580  lwc1        $f12, 0x580($s1)
    ctx->pc = 0x344e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344e04: 0xc0c0900  jal         func_302400
    ctx->pc = 0x344E04u;
    SET_GPR_U32(ctx, 31, 0x344E0Cu);
    ctx->pc = 0x344E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E04u;
    // 0x344e08: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x344E04u, 0x344E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E0Cu;
label_344e0c:
    // 0x344e0c: 0x0  nop
    ctx->pc = 0x344e0cu;
    // NOP
label_344e10:
    // 0x344e10: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x344e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x344e14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x344E14u;
    {
        const bool branch_taken_0x344e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E14u;
        // 0x344e18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e14) {
            ctx->pc = 0x344E28u;
            goto label_344e28;
        }
    }
    ctx->pc = 0x344E1Cu;
    // 0x344e1c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x344E1Cu;
    {
        const bool branch_taken_0x344e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344e1c) {
            ctx->pc = 0x344EA8u;
            goto label_344ea8;
        }
    }
    ctx->pc = 0x344E24u;
    // 0x344e24: 0x0  nop
    ctx->pc = 0x344e24u;
    // NOP
label_344e28:
    // 0x344e28: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x344e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344e2c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x344e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x344e30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x344e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x344e34: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344e34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344e38: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x344e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x344e3c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x344E3Cu;
    {
        const bool branch_taken_0x344e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x344e3c) {
            ctx->pc = 0x344E78u;
            goto label_344e78;
        }
    }
    ctx->pc = 0x344E44u;
    // 0x344e44: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x344e44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344e48: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x344e48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x344e4c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x344E4Cu;
    {
        const bool branch_taken_0x344e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x344E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E4Cu;
        // 0x344e50: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e4c) {
            ctx->pc = 0x344EA0u;
            goto label_344ea0;
        }
    }
    ctx->pc = 0x344E54u;
    // 0x344e54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344e58: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x344e58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x344e5c: 0x0  nop
    ctx->pc = 0x344e5cu;
    // NOP
    // 0x344e60: 0x0  nop
    ctx->pc = 0x344e60u;
    // NOP
    // 0x344e64: 0x2010  mfhi        $a0
    ctx->pc = 0x344e64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x344e68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344e6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x344E6Cu;
    {
        const bool branch_taken_0x344e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E6Cu;
        // 0x344e70: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e6c) {
            ctx->pc = 0x344EA0u;
            goto label_344ea0;
        }
    }
    ctx->pc = 0x344E74u;
    // 0x344e74: 0x0  nop
    ctx->pc = 0x344e74u;
    // NOP
label_344e78:
    // 0x344e78: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x344e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x344e7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x344e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x344e80: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344E80u;
    {
        const bool branch_taken_0x344e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344e80) {
            ctx->pc = 0x344EA0u;
            goto label_344ea0;
        }
    }
    ctx->pc = 0x344E88u;
    // 0x344e88: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344e88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x344e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344e90: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x344e90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x344e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x344E94u;
    {
        const bool branch_taken_0x344e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E94u;
        // 0x344e98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e94) {
            ctx->pc = 0x344EA8u;
            goto label_344ea8;
        }
    }
    ctx->pc = 0x344E9Cu;
    // 0x344e9c: 0x0  nop
    ctx->pc = 0x344e9cu;
    // NOP
label_344ea0:
    // 0x344ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ea4: 0x0  nop
    ctx->pc = 0x344ea4u;
    // NOP
label_344ea8:
    // 0x344ea8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x344EA8u;
    {
        const bool branch_taken_0x344ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x344EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344EA8u;
        // 0x344eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ea8) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344EB0u;
    // 0x344eb0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344EB0u;
    SET_GPR_U32(ctx, 31, 0x344EB8u);
    ctx->pc = 0x344EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EB0u;
    // 0x344eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344EB0u, 0x344EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344EB8u;
label_344eb8:
    // 0x344eb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x344eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344ebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x344ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344ec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x344ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x344EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344EC4u;
        // 0x344ec8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344ECCu;
}
