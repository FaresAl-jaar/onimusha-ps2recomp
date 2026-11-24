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

// Function: sub_003D98F0
// Address: 0x3d98f0 - 0x3d9b38
void sub_003D98F0_0x3d98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D98F0_0x3d98f0");
#endif

    switch (ctx->pc) {
        case 0x3d9930u: goto label_3d9930;
        case 0x3d993cu: goto label_3d993c;
        case 0x3d9984u: goto label_3d9984;
        case 0x3d99b8u: goto label_3d99b8;
        case 0x3d99d0u: goto label_3d99d0;
        case 0x3d9a3cu: goto label_3d9a3c;
        case 0x3d9a4cu: goto label_3d9a4c;
        case 0x3d9a90u: goto label_3d9a90;
        case 0x3d9aa0u: goto label_3d9aa0;
        case 0x3d9ae4u: goto label_3d9ae4;
        case 0x3d9b18u: goto label_3d9b18;
        case 0x3d9b28u: goto label_3d9b28;
        default: break;
    }

    ctx->pc = 0x3d98f0u;

    // 0x3d98f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d98f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d98f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d98f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d98f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d98f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d98fc: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d98fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9900: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3d9900u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d9904: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x3D9904u;
    {
        const bool branch_taken_0x3d9904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9904u;
        // 0x3d9908: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9904) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D990Cu;
    // 0x3d990c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3d990cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3d9910: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d9910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9914: 0x24a54770  addiu       $a1, $a1, 0x4770
    ctx->pc = 0x3d9914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18288));
    // 0x3d9918: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d9918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d991c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d9920: 0x600008  jr          $v1
    ctx->pc = 0x3D9920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D9928u: goto label_3d9928;
            case 0x3D9970u: goto label_3d9970;
            case 0x3D99B0u: goto label_3d99b0;
            case 0x3D9A10u: goto label_3d9a10;
            case 0x3D9AD0u: goto label_3d9ad0;
            case 0x3D9B10u: goto label_3d9b10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9920u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D9928u;
label_3d9928:
    // 0x3d9928: 0xc0f6280  jal         func_3D8A00
    ctx->pc = 0x3D9928u;
    SET_GPR_U32(ctx, 31, 0x3D9930u);
    ctx->pc = 0x3D8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8A00u, 0x3D9928u, 0x3D9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9930u;
label_3d9930:
    // 0x3d9930: 0xa2022bd9  sb          $v0, 0x2BD9($s0)
    ctx->pc = 0x3d9930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11225), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9934: 0xc0f66d0  jal         func_3D9B40
    ctx->pc = 0x3D9934u;
    SET_GPR_U32(ctx, 31, 0x3D993Cu);
    ctx->pc = 0x3D9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9934u;
    // 0x3d9938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9B40u, 0x3D9934u, 0x3D993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D993Cu;
label_3d993c:
    // 0x3d993c: 0xa2022be2  sb          $v0, 0x2BE2($s0)
    ctx->pc = 0x3d993cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11234), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9940: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3d9940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3d9944: 0xa2032be4  sb          $v1, 0x2BE4($s0)
    ctx->pc = 0x3d9944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9948: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d9948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d994c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d994cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9950: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9954: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9954u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9958: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d9958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d995c: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d995cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9960: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9968: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d996c: 0x0  nop
    ctx->pc = 0x3d996cu;
    // NOP
label_3d9970:
    // 0x3d9970: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d9974: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x3D9974u;
    {
        const bool branch_taken_0x3d9974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9974u;
        // 0x3d9978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9974) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D997Cu;
    // 0x3d997c: 0xc0f6dd0  jal         func_3DB740
    ctx->pc = 0x3D997Cu;
    SET_GPR_U32(ctx, 31, 0x3D9984u);
    ctx->pc = 0x3D9980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D997Cu;
    // 0x3d9980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB740u, 0x3D997Cu, 0x3D9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9984u;
label_3d9984:
    // 0x3d9984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9988: 0xa2022be4  sb          $v0, 0x2BE4($s0)
    ctx->pc = 0x3d9988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d998c: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d998cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9990: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3d9990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9994: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9998: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d999c: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d999cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99a0: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d99a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99a4: 0x92022be1  lbu         $v0, 0x2BE1($s0)
    ctx->pc = 0x3d99a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d99a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d99ac: 0xa2022be1  sb          $v0, 0x2BE1($s0)
    ctx->pc = 0x3d99acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 2));
label_3d99b0:
    // 0x3d99b0: 0xc0f6e08  jal         func_3DB820
    ctx->pc = 0x3D99B0u;
    SET_GPR_U32(ctx, 31, 0x3D99B8u);
    ctx->pc = 0x3D99B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D99B0u;
    // 0x3d99b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB820u, 0x3D99B0u, 0x3D99B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D99B8u;
label_3d99b8:
    // 0x3d99b8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3D99B8u;
    {
        const bool branch_taken_0x3d99b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d99b8) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D99C0u;
    // 0x3d99c0: 0xa2002bec  sb          $zero, 0x2BEC($s0)
    ctx->pc = 0x3d99c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11244), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d99c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d99c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d99c8: 0xc0f66f8  jal         func_3D9BE0
    ctx->pc = 0x3D99C8u;
    SET_GPR_U32(ctx, 31, 0x3D99D0u);
    ctx->pc = 0x3D99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D99C8u;
    // 0x3d99cc: 0xa2002bed  sb          $zero, 0x2BED($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11245), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9BE0u, 0x3D99C8u, 0x3D99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D99D0u;
label_3d99d0:
    // 0x3d99d0: 0x92052bec  lbu         $a1, 0x2BEC($s0)
    ctx->pc = 0x3d99d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11244)));
    // 0x3d99d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d99d8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3d99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d99dc: 0xa2052bed  sb          $a1, 0x2BED($s0)
    ctx->pc = 0x3d99dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11245), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d99e0: 0xa2022bec  sb          $v0, 0x2BEC($s0)
    ctx->pc = 0x3d99e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11244), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d99e4: 0xa2022be4  sb          $v0, 0x2BE4($s0)
    ctx->pc = 0x3d99e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d99e8: 0xa2042be5  sb          $a0, 0x2BE5($s0)
    ctx->pc = 0x3d99e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d99ec: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3d99ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d99f0: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d99f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d99f4: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d99f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99f8: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d99f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d99fc: 0xa6032be8  sh          $v1, 0x2BE8($s0)
    ctx->pc = 0x3d99fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9a00: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9a04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9a08: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9a0c: 0x0  nop
    ctx->pc = 0x3d9a0cu;
    // NOP
label_3d9a10:
    // 0x3d9a10: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d9a14: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3D9A14u;
    {
        const bool branch_taken_0x3d9a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9a14) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D9A1Cu;
    // 0x3d9a1c: 0x92022be2  lbu         $v0, 0x2BE2($s0)
    ctx->pc = 0x3d9a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11234)));
    // 0x3d9a20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d9a24: 0xa2022be2  sb          $v0, 0x2BE2($s0)
    ctx->pc = 0x3d9a24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11234), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9a28: 0x92022be2  lbu         $v0, 0x2BE2($s0)
    ctx->pc = 0x3d9a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11234)));
    // 0x3d9a2c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D9A2Cu;
    {
        const bool branch_taken_0x3d9a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A2Cu;
        // 0x3d9a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9a2c) {
            ctx->pc = 0x3D9A80u;
            goto label_3d9a80;
        }
    }
    ctx->pc = 0x3D9A34u;
    // 0x3d9a34: 0xc0f6ea4  jal         func_3DBA90
    ctx->pc = 0x3D9A34u;
    SET_GPR_U32(ctx, 31, 0x3D9A3Cu);
    ctx->pc = 0x3DBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA90u, 0x3D9A34u, 0x3D9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9A3Cu;
label_3d9a3c:
    // 0x3d9a3c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D9A3Cu;
    {
        const bool branch_taken_0x3d9a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A3Cu;
        // 0x3d9a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9a3c) {
            ctx->pc = 0x3D9A80u;
            goto label_3d9a80;
        }
    }
    ctx->pc = 0x3D9A44u;
    // 0x3d9a44: 0xc0f66f8  jal         func_3D9BE0
    ctx->pc = 0x3D9A44u;
    SET_GPR_U32(ctx, 31, 0x3D9A4Cu);
    ctx->pc = 0x3D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9BE0u, 0x3D9A44u, 0x3D9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9A4Cu;
label_3d9a4c:
    // 0x3d9a4c: 0x92052bec  lbu         $a1, 0x2BEC($s0)
    ctx->pc = 0x3d9a4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11244)));
    // 0x3d9a50: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3d9a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3d9a54: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3d9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3d9a58: 0xa2052bed  sb          $a1, 0x2BED($s0)
    ctx->pc = 0x3d9a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11245), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d9a5c: 0xa2022bec  sb          $v0, 0x2BEC($s0)
    ctx->pc = 0x3d9a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11244), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9a60: 0xa2022be4  sb          $v0, 0x2BE4($s0)
    ctx->pc = 0x3d9a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9a64: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d9a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9a68: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3d9a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9a6c: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9a70: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9a74: 0xa6042bea  sh          $a0, 0x2BEA($s0)
    ctx->pc = 0x3d9a74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d9a78: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3D9A78u;
    {
        const bool branch_taken_0x3d9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A78u;
        // 0x3d9a7c: 0xa6032be8  sh          $v1, 0x2BE8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9a78) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D9A80u;
label_3d9a80:
    // 0x3d9a80: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3d9a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3d9a84: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3d9a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3d9a88: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3D9A88u;
    SET_GPR_U32(ctx, 31, 0x3D9A90u);
    ctx->pc = 0x3D9A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9A88u;
    // 0x3d9a8c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3D9A88u, 0x3D9A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9A90u;
label_3d9a90:
    // 0x3d9a90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9A90u;
    {
        const bool branch_taken_0x3d9a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A90u;
        // 0x3d9a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9a90) {
            ctx->pc = 0x3D9AA0u;
            goto label_3d9aa0;
        }
    }
    ctx->pc = 0x3D9A98u;
    // 0x3d9a98: 0xc0f6e60  jal         func_3DB980
    ctx->pc = 0x3D9A98u;
    SET_GPR_U32(ctx, 31, 0x3D9AA0u);
    ctx->pc = 0x3DB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB980u, 0x3D9A98u, 0x3D9AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9AA0u;
label_3d9aa0:
    // 0x3d9aa0: 0x240400f7  addiu       $a0, $zero, 0xF7
    ctx->pc = 0x3d9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x3d9aa4: 0xa2042be4  sb          $a0, 0x2BE4($s0)
    ctx->pc = 0x3d9aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d9aa8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3d9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3d9aac: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d9aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9ab0: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3d9ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d9ab4: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9ab8: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9abc: 0xa6032bea  sh          $v1, 0x2BEA($s0)
    ctx->pc = 0x3d9abcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d9ac0: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9ac4: 0x92032be1  lbu         $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9ac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9acc: 0xa2032be1  sb          $v1, 0x2BE1($s0)
    ctx->pc = 0x3d9accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d9ad0:
    // 0x3d9ad0: 0x92032be3  lbu         $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11235)));
    // 0x3d9ad4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D9AD4u;
    {
        const bool branch_taken_0x3d9ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AD4u;
        // 0x3d9ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ad4) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D9ADCu;
    // 0x3d9adc: 0xc0f6dd0  jal         func_3DB740
    ctx->pc = 0x3D9ADCu;
    SET_GPR_U32(ctx, 31, 0x3D9AE4u);
    ctx->pc = 0x3D9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9ADCu;
    // 0x3d9ae0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB740u, 0x3D9ADCu, 0x3D9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9AE4u;
label_3d9ae4:
    // 0x3d9ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9ae8: 0xa2022be4  sb          $v0, 0x2BE4($s0)
    ctx->pc = 0x3d9ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9aec: 0xa2002be5  sb          $zero, 0x2BE5($s0)
    ctx->pc = 0x3d9aecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9af0: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x3d9af0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9af4: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d9af4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9af8: 0xa6002be6  sh          $zero, 0x2BE6($s0)
    ctx->pc = 0x3d9af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9afc: 0xa6002bea  sh          $zero, 0x2BEA($s0)
    ctx->pc = 0x3d9afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9b00: 0xa6002be8  sh          $zero, 0x2BE8($s0)
    ctx->pc = 0x3d9b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9b04: 0x92022be1  lbu         $v0, 0x2BE1($s0)
    ctx->pc = 0x3d9b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11233)));
    // 0x3d9b08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9b0c: 0xa2022be1  sb          $v0, 0x2BE1($s0)
    ctx->pc = 0x3d9b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11233), (uint8_t)GPR_U32(ctx, 2));
label_3d9b10:
    // 0x3d9b10: 0xc0f6e08  jal         func_3DB820
    ctx->pc = 0x3D9B10u;
    SET_GPR_U32(ctx, 31, 0x3D9B18u);
    ctx->pc = 0x3D9B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9B10u;
    // 0x3d9b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB820u, 0x3D9B10u, 0x3D9B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B18u;
label_3d9b18:
    // 0x3d9b18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9B18u;
    {
        const bool branch_taken_0x3d9b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B18u;
        // 0x3d9b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b18) {
            ctx->pc = 0x3D9B28u;
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D9B20u;
    // 0x3d9b20: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D9B20u;
    SET_GPR_U32(ctx, 31, 0x3D9B28u);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D9B20u, 0x3D9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B28u;
label_3d9b28:
    // 0x3d9b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d9b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9b30: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B30u;
        // 0x3d9b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9B38u;
}
