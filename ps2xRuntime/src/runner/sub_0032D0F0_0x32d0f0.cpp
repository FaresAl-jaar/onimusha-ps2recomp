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

// Function: sub_0032D0F0
// Address: 0x32d0f0 - 0x32d330
void sub_0032D0F0_0x32d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D0F0_0x32d0f0");
#endif

    switch (ctx->pc) {
        case 0x32d164u: goto label_32d164;
        case 0x32d184u: goto label_32d184;
        case 0x32d194u: goto label_32d194;
        case 0x32d1c8u: goto label_32d1c8;
        case 0x32d1e4u: goto label_32d1e4;
        case 0x32d238u: goto label_32d238;
        case 0x32d254u: goto label_32d254;
        case 0x32d2a8u: goto label_32d2a8;
        case 0x32d2b8u: goto label_32d2b8;
        case 0x32d2c8u: goto label_32d2c8;
        case 0x32d31cu: goto label_32d31c;
        default: break;
    }

    ctx->pc = 0x32d0f0u;

    // 0x32d0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d0f4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x32d0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x32d0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32d0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32d0fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32d100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32d104: 0x8083000e  lb          $v1, 0xE($a0)
    ctx->pc = 0x32d104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x32d108: 0x8c26ea24  lw          $a2, -0x15DC($at)
    ctx->pc = 0x32d108u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x32d10c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d110: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x32d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x32d114: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x32d114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d118: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x32d118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32d11c: 0x10650020  beq         $v1, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x32D11Cu;
    {
        const bool branch_taken_0x32d11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x32D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D11Cu;
        // 0x32d120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d11c) {
            ctx->pc = 0x32D1A0u;
            goto label_32d1a0;
        }
    }
    ctx->pc = 0x32D124u;
    // 0x32d124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D124u;
    {
        const bool branch_taken_0x32d124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d124) {
            ctx->pc = 0x32D138u;
            goto label_32d138;
        }
    }
    ctx->pc = 0x32D12Cu;
    // 0x32d12c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x32D12Cu;
    {
        const bool branch_taken_0x32d12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d12c) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D134u;
    // 0x32d134: 0x0  nop
    ctx->pc = 0x32d134u;
    // NOP
label_32d138:
    // 0x32d138: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x32d138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32d13c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32D13Cu;
    {
        const bool branch_taken_0x32d13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D13Cu;
        // 0x32d140: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d13c) {
            ctx->pc = 0x32D178u;
            goto label_32d178;
        }
    }
    ctx->pc = 0x32D144u;
    // 0x32d144: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32d144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32d148: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32d14c: 0x34450020  ori         $a1, $v0, 0x20
    ctx->pc = 0x32d14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32d150: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32d150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d154: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32d154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32d158: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32d158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d15c: 0xc09565c  jal         func_255970
    ctx->pc = 0x32D15Cu;
    SET_GPR_U32(ctx, 31, 0x32D164u);
    ctx->pc = 0x32D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D15Cu;
    // 0x32d160: 0x260900a6  addiu       $t1, $s0, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32D15Cu, 0x32D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D164u;
label_32d164:
    // 0x32d164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d168: 0xa203000f  sb          $v1, 0xF($s0)
    ctx->pc = 0x32d168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d16c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x32D16Cu;
    {
        const bool branch_taken_0x32d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D16Cu;
        // 0x32d170: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d16c) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D174u;
    // 0x32d174: 0x0  nop
    ctx->pc = 0x32d174u;
    // NOP
label_32d178:
    // 0x32d178: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d17c: 0xc095150  jal         func_254540
    ctx->pc = 0x32D17Cu;
    SET_GPR_U32(ctx, 31, 0x32D184u);
    ctx->pc = 0x32D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D17Cu;
    // 0x32d180: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32D17Cu, 0x32D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D184u;
label_32d184:
    // 0x32d184: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x32D184u;
    {
        const bool branch_taken_0x32d184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D184u;
        // 0x32d188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d184) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D18Cu;
    // 0x32d18c: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32D18Cu;
    SET_GPR_U32(ctx, 31, 0x32D194u);
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32D18Cu, 0x32D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D194u;
label_32d194:
    // 0x32d194: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x32D194u;
    {
        const bool branch_taken_0x32d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d194) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D19Cu;
    // 0x32d19c: 0x0  nop
    ctx->pc = 0x32d19cu;
    // NOP
label_32d1a0:
    // 0x32d1a0: 0x30c24008  andi        $v0, $a2, 0x4008
    ctx->pc = 0x32d1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16392);
    // 0x32d1a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32D1A4u;
    {
        const bool branch_taken_0x32d1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D1A4u;
        // 0x32d1a8: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d1a4) {
            ctx->pc = 0x32D1D0u;
            goto label_32d1d0;
        }
    }
    ctx->pc = 0x32D1ACu;
    // 0x32d1ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D1ACu;
    {
        const bool branch_taken_0x32d1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d1ac) {
            ctx->pc = 0x32D1C0u;
            goto label_32d1c0;
        }
    }
    ctx->pc = 0x32D1B4u;
    // 0x32d1b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d1b8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x32d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x32d1bc: 0x0  nop
    ctx->pc = 0x32d1bcu;
    // NOP
label_32d1c0:
    // 0x32d1c0: 0xc0cb5ec  jal         func_32D7B0
    ctx->pc = 0x32D1C0u;
    SET_GPR_U32(ctx, 31, 0x32D1C8u);
    ctx->pc = 0x32D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D1C0u;
    // 0x32d1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7B0u, 0x32D1C0u, 0x32D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1C8u;
label_32d1c8:
    // 0x32d1c8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x32D1C8u;
    {
        const bool branch_taken_0x32d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d1c8) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D1D0u;
label_32d1d0:
    // 0x32d1d0: 0x30c20400  andi        $v0, $a2, 0x400
    ctx->pc = 0x32d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
    // 0x32d1d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32D1D4u;
    {
        const bool branch_taken_0x32d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d1d4) {
            ctx->pc = 0x32D240u;
            goto label_32d240;
        }
    }
    ctx->pc = 0x32D1DCu;
    // 0x32d1dc: 0xc0cb5f8  jal         func_32D7E0
    ctx->pc = 0x32D1DCu;
    SET_GPR_U32(ctx, 31, 0x32D1E4u);
    ctx->pc = 0x32D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D1DCu;
    // 0x32d1e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7E0u, 0x32D1DCu, 0x32D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1E4u;
label_32d1e4:
    // 0x32d1e4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32d1e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d1ec: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32d1f0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32d1f4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32d1f8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32d1fc: 0x8203000b  lb          $v1, 0xB($s0)
    ctx->pc = 0x32d1fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x32d200: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32d204: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x32d204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32d208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d20c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32d20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d210: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32d210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32d214: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32d214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32d218: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32d218u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d21c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32d220: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32d224: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x32d224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32d228: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d22c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32d22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32d230: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32D230u;
    SET_GPR_U32(ctx, 31, 0x32D238u);
    ctx->pc = 0x32D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D230u;
    // 0x32d234: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32D230u, 0x32D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D238u;
label_32d238:
    // 0x32d238: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x32D238u;
    {
        const bool branch_taken_0x32d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d238) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D240u;
label_32d240:
    // 0x32d240: 0x30c20900  andi        $v0, $a2, 0x900
    ctx->pc = 0x32d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2304);
    // 0x32d244: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32D244u;
    {
        const bool branch_taken_0x32d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d244) {
            ctx->pc = 0x32D2B0u;
            goto label_32d2b0;
        }
    }
    ctx->pc = 0x32D24Cu;
    // 0x32d24c: 0xc0cb5f8  jal         func_32D7E0
    ctx->pc = 0x32D24Cu;
    SET_GPR_U32(ctx, 31, 0x32D254u);
    ctx->pc = 0x32D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7E0u, 0x32D24Cu, 0x32D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D254u;
label_32d254:
    // 0x32d254: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32d254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32d258: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d25c: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32d260: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32d260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32d264: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32d268: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32d26c: 0x8203000b  lb          $v1, 0xB($s0)
    ctx->pc = 0x32d26cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x32d270: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32d270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32d274: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x32d274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32d278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d27c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32d27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d280: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32d280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32d284: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32d284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32d288: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32d288u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d28c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32d290: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32d294: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x32d294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32d298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d29c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32d2a0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32D2A0u;
    SET_GPR_U32(ctx, 31, 0x32D2A8u);
    ctx->pc = 0x32D2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D2A0u;
    // 0x32d2a4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32D2A0u, 0x32D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2A8u;
label_32d2a8:
    // 0x32d2a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x32D2A8u;
    {
        const bool branch_taken_0x32d2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d2a8) {
            ctx->pc = 0x32D320u;
            goto label_32d320;
        }
    }
    ctx->pc = 0x32D2B0u;
label_32d2b0:
    // 0x32d2b0: 0xc0cb704  jal         func_32DC10
    ctx->pc = 0x32D2B0u;
    SET_GPR_U32(ctx, 31, 0x32D2B8u);
    ctx->pc = 0x32DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC10u, 0x32D2B0u, 0x32D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2B8u;
label_32d2b8:
    // 0x32d2b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D2B8u;
    {
        const bool branch_taken_0x32d2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D2B8u;
        // 0x32d2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2b8) {
            ctx->pc = 0x32D2C8u;
            goto label_32d2c8;
        }
    }
    ctx->pc = 0x32D2C0u;
    // 0x32d2c0: 0xc0cb738  jal         func_32DCE0
    ctx->pc = 0x32D2C0u;
    SET_GPR_U32(ctx, 31, 0x32D2C8u);
    ctx->pc = 0x32DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCE0u, 0x32D2C0u, 0x32D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2C8u;
label_32d2c8:
    // 0x32d2c8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32d2cc: 0x2442cd70  addiu       $v0, $v0, -0x3290
    ctx->pc = 0x32d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
    // 0x32d2d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d2d4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32d2d8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32d2dc: 0x8203000b  lb          $v1, 0xB($s0)
    ctx->pc = 0x32d2dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x32d2e0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32d2e4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32d2e8: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x32d2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32d2ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2f0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32d2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d2f4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32d2f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32d2f8: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32d2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32d2fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32d2fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d300: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32d300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32d304: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32d308: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x32d308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32d30c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d310: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32d310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32d314: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32D314u;
    SET_GPR_U32(ctx, 31, 0x32D31Cu);
    ctx->pc = 0x32D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D314u;
    // 0x32d318: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32D314u, 0x32D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D31Cu;
label_32d31c:
    // 0x32d31c: 0x0  nop
    ctx->pc = 0x32d31cu;
    // NOP
label_32d320:
    // 0x32d320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32d320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d324: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32d324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d328: 0x3e00008  jr          $ra
    ctx->pc = 0x32D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D328u;
        // 0x32d32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D330u;
}
