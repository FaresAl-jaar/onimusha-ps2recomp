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

// Function: sub_003AA240
// Address: 0x3aa240 - 0x3aa3b8
void sub_003AA240_0x3aa240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA240_0x3aa240");
#endif

    switch (ctx->pc) {
        case 0x3aa284u: goto label_3aa284;
        case 0x3aa2ccu: goto label_3aa2cc;
        case 0x3aa2ecu: goto label_3aa2ec;
        case 0x3aa30cu: goto label_3aa30c;
        case 0x3aa32cu: goto label_3aa32c;
        case 0x3aa394u: goto label_3aa394;
        case 0x3aa3a8u: goto label_3aa3a8;
        default: break;
    }

    ctx->pc = 0x3aa240u;

    // 0x3aa240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aa240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aa244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3aa244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aa248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aa24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aa24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aa250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa254: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x3aa254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3aa258: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3AA258u;
    {
        const bool branch_taken_0x3aa258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aa258) {
            ctx->pc = 0x3AA338u;
            goto label_3aa338;
        }
    }
    ctx->pc = 0x3AA260u;
    // 0x3aa260: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA260u;
    {
        const bool branch_taken_0x3aa260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa260) {
            ctx->pc = 0x3AA270u;
            goto label_3aa270;
        }
    }
    ctx->pc = 0x3AA268u;
    // 0x3aa268: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3AA268u;
    {
        const bool branch_taken_0x3aa268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa268) {
            ctx->pc = 0x3AA3A8u;
            goto label_3aa3a8;
        }
    }
    ctx->pc = 0x3AA270u;
label_3aa270:
    // 0x3aa270: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3aa270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aa274: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3aa274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3aa278: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3aa278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa27c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3AA27Cu;
    SET_GPR_U32(ctx, 31, 0x3AA284u);
    ctx->pc = 0x3AA280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA27Cu;
    // 0x3aa280: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3AA27Cu, 0x3AA284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA284u;
label_3aa284:
    // 0x3aa284: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x3aa284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3aa288: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3aa288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aa28c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3AA28Cu;
    {
        const bool branch_taken_0x3aa28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA28Cu;
        // 0x3aa290: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa28c) {
            ctx->pc = 0x3AA318u;
            goto label_3aa318;
        }
    }
    ctx->pc = 0x3AA294u;
    // 0x3aa294: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AA294u;
    {
        const bool branch_taken_0x3aa294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aa294) {
            ctx->pc = 0x3AA2F8u;
            goto label_3aa2f8;
        }
    }
    ctx->pc = 0x3AA29Cu;
    // 0x3aa29c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aa29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aa2a0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3AA2A0u;
    {
        const bool branch_taken_0x3aa2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2A0u;
        // 0x3aa2a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa2a0) {
            ctx->pc = 0x3AA2D8u;
            goto label_3aa2d8;
        }
    }
    ctx->pc = 0x3AA2A8u;
    // 0x3aa2a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA2A8u;
    {
        const bool branch_taken_0x3aa2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aa2a8) {
            ctx->pc = 0x3AA2B8u;
            goto label_3aa2b8;
        }
    }
    ctx->pc = 0x3AA2B0u;
    // 0x3aa2b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3AA2B0u;
    {
        const bool branch_taken_0x3aa2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa2b0) {
            ctx->pc = 0x3AA330u;
            goto label_3aa330;
        }
    }
    ctx->pc = 0x3AA2B8u;
label_3aa2b8:
    // 0x3aa2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa2bc: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x3aa2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3aa2c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa2c4: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA2C4u;
    SET_GPR_U32(ctx, 31, 0x3AA2CCu);
    ctx->pc = 0x3AA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2C4u;
    // 0x3aa2c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA2C4u, 0x3AA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2CCu;
label_3aa2cc:
    // 0x3aa2cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3AA2CCu;
    {
        const bool branch_taken_0x3aa2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa2cc) {
            ctx->pc = 0x3AA330u;
            goto label_3aa330;
        }
    }
    ctx->pc = 0x3AA2D4u;
    // 0x3aa2d4: 0x0  nop
    ctx->pc = 0x3aa2d4u;
    // NOP
label_3aa2d8:
    // 0x3aa2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa2dc: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x3aa2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3aa2e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa2e4: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA2E4u;
    SET_GPR_U32(ctx, 31, 0x3AA2ECu);
    ctx->pc = 0x3AA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2E4u;
    // 0x3aa2e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA2E4u, 0x3AA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2ECu;
label_3aa2ec:
    // 0x3aa2ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AA2ECu;
    {
        const bool branch_taken_0x3aa2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa2ec) {
            ctx->pc = 0x3AA330u;
            goto label_3aa330;
        }
    }
    ctx->pc = 0x3AA2F4u;
    // 0x3aa2f4: 0x0  nop
    ctx->pc = 0x3aa2f4u;
    // NOP
label_3aa2f8:
    // 0x3aa2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa2fc: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x3aa2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3aa300: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa304: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA304u;
    SET_GPR_U32(ctx, 31, 0x3AA30Cu);
    ctx->pc = 0x3AA308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA304u;
    // 0x3aa308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA304u, 0x3AA30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA30Cu;
label_3aa30c:
    // 0x3aa30c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA30Cu;
    {
        const bool branch_taken_0x3aa30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa30c) {
            ctx->pc = 0x3AA330u;
            goto label_3aa330;
        }
    }
    ctx->pc = 0x3AA314u;
    // 0x3aa314: 0x0  nop
    ctx->pc = 0x3aa314u;
    // NOP
label_3aa318:
    // 0x3aa318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa31c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x3aa31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3aa320: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa324: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA324u;
    SET_GPR_U32(ctx, 31, 0x3AA32Cu);
    ctx->pc = 0x3AA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA324u;
    // 0x3aa328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA324u, 0x3AA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA32Cu;
label_3aa32c:
    // 0x3aa32c: 0x0  nop
    ctx->pc = 0x3aa32cu;
    // NOP
label_3aa330:
    // 0x3aa330: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3AA330u;
    {
        const bool branch_taken_0x3aa330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA330u;
        // 0x3aa334: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa330) {
            ctx->pc = 0x3AA3A8u;
            goto label_3aa3a8;
        }
    }
    ctx->pc = 0x3AA338u;
label_3aa338:
    // 0x3aa338: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3aa338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3aa33c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AA33Cu;
    {
        const bool branch_taken_0x3aa33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa33c) {
            ctx->pc = 0x3AA3A8u;
            goto label_3aa3a8;
        }
    }
    ctx->pc = 0x3AA344u;
    // 0x3aa344: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3aa344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3aa348: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AA348u;
    {
        const bool branch_taken_0x3aa348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa348) {
            ctx->pc = 0x3AA370u;
            goto label_3aa370;
        }
    }
    ctx->pc = 0x3AA350u;
    // 0x3aa350: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3aa350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa354: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3aa354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa358: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3aa358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aa35c: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3aa35cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa360: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aa360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa364: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AA364u;
    {
        const bool branch_taken_0x3aa364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA364u;
        // 0x3aa368: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa364) {
            ctx->pc = 0x3AA3A8u;
            goto label_3aa3a8;
        }
    }
    ctx->pc = 0x3AA36Cu;
    // 0x3aa36c: 0x0  nop
    ctx->pc = 0x3aa36cu;
    // NOP
label_3aa370:
    // 0x3aa370: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3aa370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3aa374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aa378: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3aa378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3aa37c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3aa37cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa380: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3aa380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3aa384: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3aa384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa388: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aa388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa38c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3AA38Cu;
    SET_GPR_U32(ctx, 31, 0x3AA394u);
    ctx->pc = 0x3AA390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA38Cu;
    // 0x3aa390: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3AA38Cu, 0x3AA394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA394u;
label_3aa394:
    // 0x3aa394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa398: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x3aa398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x3aa39c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3aa39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa3a0: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3AA3A0u;
    SET_GPR_U32(ctx, 31, 0x3AA3A8u);
    ctx->pc = 0x3AA3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3A0u;
    // 0x3aa3a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3AA3A0u, 0x3AA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3A8u;
label_3aa3a8:
    // 0x3aa3a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aa3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aa3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3B0u;
        // 0x3aa3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA3B8u;
}
