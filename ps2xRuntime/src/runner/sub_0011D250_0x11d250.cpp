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

// Function: sub_0011D250
// Address: 0x11d250 - 0x11d420
void sub_0011D250_0x11d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D250_0x11d250");
#endif

    switch (ctx->pc) {
        case 0x11d2a4u: goto label_11d2a4;
        case 0x11d2b8u: goto label_11d2b8;
        case 0x11d2c8u: goto label_11d2c8;
        case 0x11d2dcu: goto label_11d2dc;
        case 0x11d2ecu: goto label_11d2ec;
        case 0x11d2f8u: goto label_11d2f8;
        case 0x11d308u: goto label_11d308;
        case 0x11d314u: goto label_11d314;
        case 0x11d324u: goto label_11d324;
        case 0x11d330u: goto label_11d330;
        case 0x11d340u: goto label_11d340;
        case 0x11d354u: goto label_11d354;
        case 0x11d364u: goto label_11d364;
        case 0x11d370u: goto label_11d370;
        case 0x11d37cu: goto label_11d37c;
        case 0x11d380u: goto label_11d380;
        case 0x11d3b8u: goto label_11d3b8;
        case 0x11d3c8u: goto label_11d3c8;
        case 0x11d3d4u: goto label_11d3d4;
        case 0x11d3e0u: goto label_11d3e0;
        case 0x11d3ecu: goto label_11d3ec;
        case 0x11d400u: goto label_11d400;
        case 0x11d40cu: goto label_11d40c;
        case 0x11d418u: goto label_11d418;
        default: break;
    }

    ctx->pc = 0x11d250u;

    // 0x11d250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d254: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11d254u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11d258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d25c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d25cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d260: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11d264: 0x4703f  dsra32      $t6, $a0, 0
    ctx->pc = 0x11d264u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d268: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11d268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11d26c: 0x3c0d3e3f  lui         $t5, 0x3E3F
    ctx->pc = 0x11d26cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)15935 << 16));
    // 0x11d270: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x11d270u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11d274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d278: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11d278u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11d27c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11d280: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11d284: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11d284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d288: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11d28c: 0x1ae682a  slt         $t5, $t5, $t6
    ctx->pc = 0x11d28cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x11d290: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11d290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d294: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D294u;
    {
        const bool branch_taken_0x11d294 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D294u;
        // 0x11d298: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d294) {
            ctx->pc = 0x11D2ACu;
            goto label_11d2ac;
        }
    }
    ctx->pc = 0x11D29Cu;
    // 0x11d29c: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11D29Cu;
    SET_GPR_U32(ctx, 31, 0x11D2A4u);
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11D29Cu, 0x11D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2A4u;
label_11d2a4:
    // 0x11d2a4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x11D2A4u;
    {
        const bool branch_taken_0x11d2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2A4u;
        // 0x11d2a8: 0x240782d  daddu       $t7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2a4) {
            ctx->pc = 0x11D380u;
            goto label_11d380;
        }
    }
    ctx->pc = 0x11D2ACu;
label_11d2ac:
    // 0x11d2ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2b0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D2B0u;
    SET_GPR_U32(ctx, 31, 0x11D2B8u);
    ctx->pc = 0x11D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2B0u;
    // 0x11d2b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D2B0u, 0x11D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2B8u;
label_11d2b8:
    // 0x11d2b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2c0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D2C0u;
    SET_GPR_U32(ctx, 31, 0x11D2C8u);
    ctx->pc = 0x11D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2C0u;
    // 0x11d2c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D2C0u, 0x11D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2C8u;
label_11d2c8:
    // 0x11d2c8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d2c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2d0: 0xdde53430  ld          $a1, 0x3430($t7)
    ctx->pc = 0x11d2d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x663430u));
    // 0x11d2d4: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D2D4u;
    SET_GPR_U32(ctx, 31, 0x11D2DCu);
    ctx->pc = 0x11D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2D4u;
    // 0x11d2d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D2D4u, 0x11D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2DCu;
label_11d2dc:
    // 0x11d2dc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d2dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d2e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2e4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D2E4u;
    SET_GPR_U32(ctx, 31, 0x11D2ECu);
    ctx->pc = 0x11D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2E4u;
    // 0x11d2e8: 0xdde53438  ld          $a1, 0x3438($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D2E4u, 0x11D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2ECu;
label_11d2ec:
    // 0x11d2ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2f0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D2F0u;
    SET_GPR_U32(ctx, 31, 0x11D2F8u);
    ctx->pc = 0x11D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2F0u;
    // 0x11d2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D2F0u, 0x11D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2F8u;
label_11d2f8:
    // 0x11d2f8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d2f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d2fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d300: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D300u;
    SET_GPR_U32(ctx, 31, 0x11D308u);
    ctx->pc = 0x11D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D300u;
    // 0x11d304: 0xdde53440  ld          $a1, 0x3440($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D300u, 0x11D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D308u;
label_11d308:
    // 0x11d308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d30c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D30Cu;
    SET_GPR_U32(ctx, 31, 0x11D314u);
    ctx->pc = 0x11D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D30Cu;
    // 0x11d310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D30Cu, 0x11D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D314u;
label_11d314:
    // 0x11d314: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d314u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d31c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D31Cu;
    SET_GPR_U32(ctx, 31, 0x11D324u);
    ctx->pc = 0x11D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D31Cu;
    // 0x11d320: 0xdde53448  ld          $a1, 0x3448($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D31Cu, 0x11D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D324u;
label_11d324:
    // 0x11d324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d328: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D328u;
    SET_GPR_U32(ctx, 31, 0x11D330u);
    ctx->pc = 0x11D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D328u;
    // 0x11d32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D328u, 0x11D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D330u;
label_11d330:
    // 0x11d330: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d330u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d338: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D338u;
    SET_GPR_U32(ctx, 31, 0x11D340u);
    ctx->pc = 0x11D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D338u;
    // 0x11d33c: 0xdde53450  ld          $a1, 0x3450($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D338u, 0x11D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D340u;
label_11d340:
    // 0x11d340: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11D340u;
    {
        const bool branch_taken_0x11d340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D340u;
        // 0x11d344: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d340) {
            ctx->pc = 0x11D3A8u;
            goto label_11d3a8;
        }
    }
    ctx->pc = 0x11D348u;
    // 0x11d348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d34c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D34Cu;
    SET_GPR_U32(ctx, 31, 0x11D354u);
    ctx->pc = 0x11D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D34Cu;
    // 0x11d350: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D34Cu, 0x11D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D354u;
label_11d354:
    // 0x11d354: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d354u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d35c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D35Cu;
    SET_GPR_U32(ctx, 31, 0x11D364u);
    ctx->pc = 0x11D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D35Cu;
    // 0x11d360: 0xdde53458  ld          $a1, 0x3458($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D35Cu, 0x11D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D364u;
label_11d364:
    // 0x11d364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d368: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D368u;
    SET_GPR_U32(ctx, 31, 0x11D370u);
    ctx->pc = 0x11D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D368u;
    // 0x11d36c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D368u, 0x11D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D370u;
label_11d370:
    // 0x11d370: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d374: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D374u;
    SET_GPR_U32(ctx, 31, 0x11D37Cu);
    ctx->pc = 0x11D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D374u;
    // 0x11d378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D374u, 0x11D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D37Cu;
label_11d37c:
    // 0x11d37c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x11d37cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d380:
    // 0x11d380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d384: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x11d384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d38c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11d38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d390: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11d390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d394: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11d394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d398: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11d398u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d39c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11d39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11D3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3A0u;
        // 0x11d3a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D3A8u;
label_11d3a8:
    // 0x11d3a8: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x11d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11d3ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3b0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D3B0u;
    SET_GPR_U32(ctx, 31, 0x11D3B8u);
    ctx->pc = 0x11D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3B0u;
    // 0x11d3b4: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D3B0u, 0x11D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3B8u;
label_11d3b8:
    // 0x11d3b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3c0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D3C0u;
    SET_GPR_U32(ctx, 31, 0x11D3C8u);
    ctx->pc = 0x11D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3C0u;
    // 0x11d3c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D3C0u, 0x11D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3C8u;
label_11d3c8:
    // 0x11d3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3cc: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D3CCu;
    SET_GPR_U32(ctx, 31, 0x11D3D4u);
    ctx->pc = 0x11D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3CCu;
    // 0x11d3d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D3CCu, 0x11D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3D4u;
label_11d3d4:
    // 0x11d3d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3d8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D3D8u;
    SET_GPR_U32(ctx, 31, 0x11D3E0u);
    ctx->pc = 0x11D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3D8u;
    // 0x11d3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D3D8u, 0x11D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3E0u;
label_11d3e0:
    // 0x11d3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3e4: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D3E4u;
    SET_GPR_U32(ctx, 31, 0x11D3ECu);
    ctx->pc = 0x11D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3E4u;
    // 0x11d3e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D3E4u, 0x11D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3ECu;
label_11d3ec:
    // 0x11d3ec: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11d3ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11d3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3f4: 0xdde53458  ld          $a1, 0x3458($t7)
    ctx->pc = 0x11d3f4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x663458u));
    // 0x11d3f8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D3F8u;
    SET_GPR_U32(ctx, 31, 0x11D400u);
    ctx->pc = 0x11D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3F8u;
    // 0x11d3fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D3F8u, 0x11D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D400u;
label_11d400:
    // 0x11d400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d404: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D404u;
    SET_GPR_U32(ctx, 31, 0x11D40Cu);
    ctx->pc = 0x11D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D404u;
    // 0x11d408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D404u, 0x11D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D40Cu;
label_11d40c:
    // 0x11d40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d410: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D410u;
    SET_GPR_U32(ctx, 31, 0x11D418u);
    ctx->pc = 0x11D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D410u;
    // 0x11d414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D410u, 0x11D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D418u;
label_11d418:
    // 0x11d418: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x11D418u;
    {
        const bool branch_taken_0x11d418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D418u;
        // 0x11d41c: 0x40782d  daddu       $t7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d418) {
            ctx->pc = 0x11D380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d380;
        }
    }
    ctx->pc = 0x11D420u;
}
