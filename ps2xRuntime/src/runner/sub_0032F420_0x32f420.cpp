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

// Function: sub_0032F420
// Address: 0x32f420 - 0x32f824
void sub_0032F420_0x32f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F420_0x32f420");
#endif

    switch (ctx->pc) {
        case 0x32f490u: goto label_32f490;
        case 0x32f4a0u: goto label_32f4a0;
        case 0x32f4f4u: goto label_32f4f4;
        case 0x32f504u: goto label_32f504;
        case 0x32f514u: goto label_32f514;
        case 0x32f570u: goto label_32f570;
        case 0x32f580u: goto label_32f580;
        case 0x32f5a8u: goto label_32f5a8;
        case 0x32f5c0u: goto label_32f5c0;
        case 0x32f680u: goto label_32f680;
        case 0x32f694u: goto label_32f694;
        case 0x32f6b0u: goto label_32f6b0;
        case 0x32f6e8u: goto label_32f6e8;
        case 0x32f6f8u: goto label_32f6f8;
        case 0x32f764u: goto label_32f764;
        case 0x32f810u: goto label_32f810;
        default: break;
    }

    ctx->pc = 0x32f420u;

    // 0x32f420: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32f424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32f428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32f42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32f430: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x32f430u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x32f434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32f434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f438: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x32f438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f43c: 0x10c500a6  beq         $a2, $a1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x32F43Cu;
    {
        const bool branch_taken_0x32f43c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x32F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F43Cu;
        // 0x32f440: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f43c) {
            ctx->pc = 0x32F6D8u;
            goto label_32f6d8;
        }
    }
    ctx->pc = 0x32F444u;
    // 0x32f444: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32f444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f448: 0x10c3008f  beq         $a2, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x32F448u;
    {
        const bool branch_taken_0x32f448 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x32F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F448u;
        // 0x32f44c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f448) {
            ctx->pc = 0x32F688u;
            goto label_32f688;
        }
    }
    ctx->pc = 0x32F450u;
    // 0x32f450: 0x10c3001f  beq         $a2, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x32F450u;
    {
        const bool branch_taken_0x32f450 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32f450) {
            ctx->pc = 0x32F4D0u;
            goto label_32f4d0;
        }
    }
    ctx->pc = 0x32F458u;
    // 0x32f458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f45c: 0x10c30014  beq         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32F45Cu;
    {
        const bool branch_taken_0x32f45c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32f45c) {
            ctx->pc = 0x32F4B0u;
            goto label_32f4b0;
        }
    }
    ctx->pc = 0x32F464u;
    // 0x32f464: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F464u;
    {
        const bool branch_taken_0x32f464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f464) {
            ctx->pc = 0x32F478u;
            goto label_32f478;
        }
    }
    ctx->pc = 0x32F46Cu;
    // 0x32f46c: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x32F46Cu;
    {
        const bool branch_taken_0x32f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f46c) {
            ctx->pc = 0x32F810u;
            goto label_32f810;
        }
    }
    ctx->pc = 0x32F474u;
    // 0x32f474: 0x0  nop
    ctx->pc = 0x32f474u;
    // NOP
label_32f478:
    // 0x32f478: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32F478u;
    {
        const bool branch_taken_0x32f478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f478) {
            ctx->pc = 0x32F498u;
            goto label_32f498;
        }
    }
    ctx->pc = 0x32F480u;
    // 0x32f480: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x32f480u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x32f484: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x32f484u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x32f488: 0xc0a9c20  jal         func_2A7080
    ctx->pc = 0x32F488u;
    SET_GPR_U32(ctx, 31, 0x32F490u);
    ctx->pc = 0x32F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F488u;
    // 0x32f48c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7080u, 0x32F488u, 0x32F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F490u;
label_32f490:
    // 0x32f490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F490u;
    {
        const bool branch_taken_0x32f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F490u;
        // 0x32f494: 0xae220560  sw          $v0, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f490) {
            ctx->pc = 0x32F4A0u;
            goto label_32f4a0;
        }
    }
    ctx->pc = 0x32F498u;
label_32f498:
    // 0x32f498: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32F498u;
    SET_GPR_U32(ctx, 31, 0x32F4A0u);
    ctx->pc = 0x32F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F498u;
    // 0x32f49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32F498u, 0x32F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4A0u;
label_32f4a0:
    // 0x32f4a0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x32f4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x32f4a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f4a8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x32F4A8u;
    {
        const bool branch_taken_0x32f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F4A8u;
        // 0x32f4ac: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f4a8) {
            ctx->pc = 0x32F810u;
            goto label_32f810;
        }
    }
    ctx->pc = 0x32F4B0u;
label_32f4b0:
    // 0x32f4b0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x32f4b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x32f4b4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x32f4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x32f4b8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x32f4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x32f4bc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x32f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f4c0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x32f4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f4c4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x32f4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x32f4c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f4cc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x32f4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_32f4d0:
    // 0x32f4d0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x32f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x32f4d4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x32f4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x32f4d8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x32f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32f4dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32f4e0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x32f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x32f4e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32f4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32f4e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x32f4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x32f4ec: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x32F4ECu;
    SET_GPR_U32(ctx, 31, 0x32F4F4u);
    ctx->pc = 0x32F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4ECu;
    // 0x32f4f0: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x32F4ECu, 0x32F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4F4u;
label_32f4f4:
    // 0x32f4f4: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x32f4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x32f4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f4fc: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x32F4FCu;
    SET_GPR_U32(ctx, 31, 0x32F504u);
    ctx->pc = 0x32F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4FCu;
    // 0x32f500: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x32F4FCu, 0x32F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F504u;
label_32f504:
    // 0x32f504: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F504u;
    {
        const bool branch_taken_0x32f504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F504u;
        // 0x32f508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f504) {
            ctx->pc = 0x32F518u;
            goto label_32f518;
        }
    }
    ctx->pc = 0x32F50Cu;
    // 0x32f50c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32F50Cu;
    SET_GPR_U32(ctx, 31, 0x32F514u);
    ctx->pc = 0x32F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F50Cu;
    // 0x32f510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32F50Cu, 0x32F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F514u;
label_32f514:
    // 0x32f514: 0x0  nop
    ctx->pc = 0x32f514u;
    // NOP
label_32f518:
    // 0x32f518: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f51c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x32f51cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x32f520: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x32f520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x32f524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f528: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x32f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32f52c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32f52cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f530: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f534: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x32f534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x32f538: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x32f538u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x32f53c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f540: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x32f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x32f544: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x32f544u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x32f548: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f54c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x32f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x32f550: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x32f550u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x32f554: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x32f554u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x32f558: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x32f558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x32f55c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x32f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x32f560: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x32f560u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x32f564: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x32f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32f568: 0xc0c0900  jal         func_302400
    ctx->pc = 0x32F568u;
    SET_GPR_U32(ctx, 31, 0x32F570u);
    ctx->pc = 0x32F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F568u;
    // 0x32f56c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x32F568u, 0x32F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F570u;
label_32f570:
    // 0x32f570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F570u;
    {
        const bool branch_taken_0x32f570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F570u;
        // 0x32f574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f570) {
            ctx->pc = 0x32F580u;
            goto label_32f580;
        }
    }
    ctx->pc = 0x32F578u;
    // 0x32f578: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32F578u;
    SET_GPR_U32(ctx, 31, 0x32F580u);
    ctx->pc = 0x32F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F578u;
    // 0x32f57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32F578u, 0x32F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F580u;
label_32f580:
    // 0x32f580: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x32f584: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x32f584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x32f588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f58c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x32f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32f590: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x32f590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x32f594: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x32f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32f598: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x32f598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32f59c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x32f59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f5a0: 0xc0c0980  jal         func_302600
    ctx->pc = 0x32F5A0u;
    SET_GPR_U32(ctx, 31, 0x32F5A8u);
    ctx->pc = 0x32F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5A0u;
    // 0x32f5a4: 0x27aa009c  addiu       $t2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x32F5A0u, 0x32F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5A8u;
label_32f5a8:
    // 0x32f5a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32F5A8u;
    {
        const bool branch_taken_0x32f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f5a8) {
            ctx->pc = 0x32F5D8u;
            goto label_32f5d8;
        }
    }
    ctx->pc = 0x32F5B0u;
    // 0x32f5b0: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x32f5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x32f5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f5b8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x32F5B8u;
    SET_GPR_U32(ctx, 31, 0x32F5C0u);
    ctx->pc = 0x32F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F5B8u;
    // 0x32f5bc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x32F5B8u, 0x32F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F5C0u;
label_32f5c0:
    // 0x32f5c0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x32f5c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32f5c4: 0x7e230550  sq          $v1, 0x550($s1)
    ctx->pc = 0x32f5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 3));
    // 0x32f5c8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x32f5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x32f5cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f5d0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x32F5D0u;
    {
        const bool branch_taken_0x32f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5D0u;
        // 0x32f5d4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5d0) {
            ctx->pc = 0x32F810u;
            goto label_32f810;
        }
    }
    ctx->pc = 0x32F5D8u;
label_32f5d8:
    // 0x32f5d8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x32f5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x32f5dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F5DCu;
    {
        const bool branch_taken_0x32f5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F5DCu;
        // 0x32f5e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f5dc) {
            ctx->pc = 0x32F5F0u;
            goto label_32f5f0;
        }
    }
    ctx->pc = 0x32F5E4u;
    // 0x32f5e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x32F5E4u;
    {
        const bool branch_taken_0x32f5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f5e4) {
            ctx->pc = 0x32F670u;
            goto label_32f670;
        }
    }
    ctx->pc = 0x32F5ECu;
    // 0x32f5ec: 0x0  nop
    ctx->pc = 0x32f5ecu;
    // NOP
label_32f5f0:
    // 0x32f5f0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x32f5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x32f5f4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x32f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x32f5f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32f5fc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x32f5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32f600: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x32f600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x32f604: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32F604u;
    {
        const bool branch_taken_0x32f604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32f604) {
            ctx->pc = 0x32F640u;
            goto label_32f640;
        }
    }
    ctx->pc = 0x32F60Cu;
    // 0x32f60c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x32f60cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x32f610: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x32f610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x32f614: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32F614u;
    {
        const bool branch_taken_0x32f614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F614u;
        // 0x32f618: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f614) {
            ctx->pc = 0x32F668u;
            goto label_32f668;
        }
    }
    ctx->pc = 0x32F61Cu;
    // 0x32f61c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f620: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x32f620u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32f624: 0x0  nop
    ctx->pc = 0x32f624u;
    // NOP
    // 0x32f628: 0x0  nop
    ctx->pc = 0x32f628u;
    // NOP
    // 0x32f62c: 0x2010  mfhi        $a0
    ctx->pc = 0x32f62cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32f630: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x32f630u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32f634: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32F634u;
    {
        const bool branch_taken_0x32f634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F634u;
        // 0x32f638: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f634) {
            ctx->pc = 0x32F668u;
            goto label_32f668;
        }
    }
    ctx->pc = 0x32F63Cu;
    // 0x32f63c: 0x0  nop
    ctx->pc = 0x32f63cu;
    // NOP
label_32f640:
    // 0x32f640: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x32f640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x32f644: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32f644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32f648: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32F648u;
    {
        const bool branch_taken_0x32f648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f648) {
            ctx->pc = 0x32F668u;
            goto label_32f668;
        }
    }
    ctx->pc = 0x32F650u;
    // 0x32f650: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x32f650u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32f654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f658: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x32f658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x32f65c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F65Cu;
    {
        const bool branch_taken_0x32f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F65Cu;
        // 0x32f660: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f65c) {
            ctx->pc = 0x32F670u;
            goto label_32f670;
        }
    }
    ctx->pc = 0x32F664u;
    // 0x32f664: 0x0  nop
    ctx->pc = 0x32f664u;
    // NOP
label_32f668:
    // 0x32f668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f66c: 0x0  nop
    ctx->pc = 0x32f66cu;
    // NOP
label_32f670:
    // 0x32f670: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x32F670u;
    {
        const bool branch_taken_0x32f670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F670u;
        // 0x32f674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f670) {
            ctx->pc = 0x32F810u;
            goto label_32f810;
        }
    }
    ctx->pc = 0x32F678u;
    // 0x32f678: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32F678u;
    SET_GPR_U32(ctx, 31, 0x32F680u);
    ctx->pc = 0x32F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F678u;
    // 0x32f67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32F678u, 0x32F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F680u;
label_32f680:
    // 0x32f680: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x32F680u;
    {
        const bool branch_taken_0x32f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f680) {
            ctx->pc = 0x32F810u;
            goto label_32f810;
        }
    }
    ctx->pc = 0x32F688u;
label_32f688:
    // 0x32f688: 0xa2250568  sb          $a1, 0x568($s1)
    ctx->pc = 0x32f688u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1384), (uint8_t)GPR_U32(ctx, 5));
    // 0x32f68c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x32F68Cu;
    SET_GPR_U32(ctx, 31, 0x32F694u);
    ctx->pc = 0x32F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F68Cu;
    // 0x32f690: 0x8e240560  lw          $a0, 0x560($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x32F68Cu, 0x32F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F694u;
label_32f694:
    // 0x32f694: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32F694u;
    {
        const bool branch_taken_0x32f694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F694u;
        // 0x32f698: 0xae200560  sw          $zero, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f694) {
            ctx->pc = 0x32F6B8u;
            goto label_32f6b8;
        }
    }
    ctx->pc = 0x32F69Cu;
    // 0x32f69c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x32f69cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x32f6a0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x32f6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32f6a4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x32f6a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x32f6a8: 0xc0a9c30  jal         func_2A70C0
    ctx->pc = 0x32F6A8u;
    SET_GPR_U32(ctx, 31, 0x32F6B0u);
    ctx->pc = 0x32F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F6A8u;
    // 0x32f6ac: 0x26270550  addiu       $a3, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A70C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A70C0u, 0x32F6A8u, 0x32F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6B0u;
label_32f6b0:
    // 0x32f6b0: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x32f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x32f6b4: 0x0  nop
    ctx->pc = 0x32f6b4u;
    // NOP
label_32f6b8:
    // 0x32f6b8: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x32f6b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x32f6bc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x32f6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x32f6c0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x32f6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x32f6c4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x32f6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f6c8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x32f6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f6cc: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x32f6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x32f6d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f6d4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x32f6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_32f6d8:
    // 0x32f6d8: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x32f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x32f6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6e0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x32F6E0u;
    SET_GPR_U32(ctx, 31, 0x32F6E8u);
    ctx->pc = 0x32F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F6E0u;
    // 0x32f6e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x32F6E0u, 0x32F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6E8u;
label_32f6e8:
    // 0x32f6e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F6E8u;
    {
        const bool branch_taken_0x32f6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6E8u;
        // 0x32f6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6e8) {
            ctx->pc = 0x32F6F8u;
            goto label_32f6f8;
        }
    }
    ctx->pc = 0x32F6F0u;
    // 0x32f6f0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32F6F0u;
    SET_GPR_U32(ctx, 31, 0x32F6F8u);
    ctx->pc = 0x32F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F6F0u;
    // 0x32f6f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32F6F0u, 0x32F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6F8u;
label_32f6f8:
    // 0x32f6f8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x32f6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x32f6fc: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x32F6FCu;
    {
        const bool branch_taken_0x32f6fc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x32F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6FCu;
        // 0x32f700: 0x28610013  slti        $at, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6fc) {
            ctx->pc = 0x32F768u;
            goto label_32f768;
        }
    }
    ctx->pc = 0x32F704u;
    // 0x32f704: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x32F704u;
    {
        const bool branch_taken_0x32f704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f704) {
            ctx->pc = 0x32F768u;
            goto label_32f768;
        }
    }
    ctx->pc = 0x32F70Cu;
    // 0x32f70c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f710: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x32f710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x32f714: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x32f714u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x32f718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f71c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x32f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32f720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32f720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f724: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f728: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x32f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x32f72c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x32f72cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x32f730: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f734: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x32f734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x32f738: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x32f738u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x32f73c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32f73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32f740: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x32f740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x32f744: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x32f744u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x32f748: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x32f748u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x32f74c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x32f74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x32f750: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x32f750u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x32f754: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x32f754u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x32f758: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x32f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32f75c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x32F75Cu;
    SET_GPR_U32(ctx, 31, 0x32F764u);
    ctx->pc = 0x32F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F75Cu;
    // 0x32f760: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x32F75Cu, 0x32F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F764u;
label_32f764:
    // 0x32f764: 0x0  nop
    ctx->pc = 0x32f764u;
    // NOP
label_32f768:
    // 0x32f768: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x32f768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x32f76c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F76Cu;
    {
        const bool branch_taken_0x32f76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F76Cu;
        // 0x32f770: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f76c) {
            ctx->pc = 0x32F780u;
            goto label_32f780;
        }
    }
    ctx->pc = 0x32F774u;
    // 0x32f774: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x32F774u;
    {
        const bool branch_taken_0x32f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f774) {
            ctx->pc = 0x32F800u;
            goto label_32f800;
        }
    }
    ctx->pc = 0x32F77Cu;
    // 0x32f77c: 0x0  nop
    ctx->pc = 0x32f77cu;
    // NOP
label_32f780:
    // 0x32f780: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x32f780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x32f784: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x32f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x32f788: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32f78c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x32f78cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32f790: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x32f790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x32f794: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32F794u;
    {
        const bool branch_taken_0x32f794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32f794) {
            ctx->pc = 0x32F7D0u;
            goto label_32f7d0;
        }
    }
    ctx->pc = 0x32F79Cu;
    // 0x32f79c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x32f79cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x32f7a0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x32f7a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x32f7a4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32F7A4u;
    {
        const bool branch_taken_0x32f7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7A4u;
        // 0x32f7a8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7a4) {
            ctx->pc = 0x32F7F8u;
            goto label_32f7f8;
        }
    }
    ctx->pc = 0x32F7ACu;
    // 0x32f7ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f7b0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x32f7b0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32f7b4: 0x0  nop
    ctx->pc = 0x32f7b4u;
    // NOP
    // 0x32f7b8: 0x0  nop
    ctx->pc = 0x32f7b8u;
    // NOP
    // 0x32f7bc: 0x2010  mfhi        $a0
    ctx->pc = 0x32f7bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32f7c0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x32f7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32f7c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32F7C4u;
    {
        const bool branch_taken_0x32f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7C4u;
        // 0x32f7c8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7c4) {
            ctx->pc = 0x32F7F8u;
            goto label_32f7f8;
        }
    }
    ctx->pc = 0x32F7CCu;
    // 0x32f7cc: 0x0  nop
    ctx->pc = 0x32f7ccu;
    // NOP
label_32f7d0:
    // 0x32f7d0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x32f7d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x32f7d4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32f7d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32f7d8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32F7D8u;
    {
        const bool branch_taken_0x32f7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f7d8) {
            ctx->pc = 0x32F7F8u;
            goto label_32f7f8;
        }
    }
    ctx->pc = 0x32F7E0u;
    // 0x32f7e0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x32f7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32f7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f7e8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x32f7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x32f7ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F7ECu;
    {
        const bool branch_taken_0x32f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7ECu;
        // 0x32f7f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7ec) {
            ctx->pc = 0x32F800u;
            goto label_32f800;
        }
    }
    ctx->pc = 0x32F7F4u;
    // 0x32f7f4: 0x0  nop
    ctx->pc = 0x32f7f4u;
    // NOP
label_32f7f8:
    // 0x32f7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f7fc: 0x0  nop
    ctx->pc = 0x32f7fcu;
    // NOP
label_32f800:
    // 0x32f800: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F800u;
    {
        const bool branch_taken_0x32f800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F800u;
        // 0x32f804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f800) {
            ctx->pc = 0x32F810u;
            goto label_32f810;
        }
    }
    ctx->pc = 0x32F808u;
    // 0x32f808: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32F808u;
    SET_GPR_U32(ctx, 31, 0x32F810u);
    ctx->pc = 0x32F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F808u;
    // 0x32f80c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32F808u, 0x32F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F810u;
label_32f810:
    // 0x32f810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32f810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32f814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32f818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f81c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F81Cu;
        // 0x32f820: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F824u;
}
