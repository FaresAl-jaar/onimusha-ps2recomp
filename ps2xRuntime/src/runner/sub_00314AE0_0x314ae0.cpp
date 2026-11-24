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

// Function: sub_00314AE0
// Address: 0x314ae0 - 0x315048
void sub_00314AE0_0x314ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314AE0_0x314ae0");
#endif

    switch (ctx->pc) {
        case 0x314b98u: goto label_314b98;
        case 0x314bb4u: goto label_314bb4;
        case 0x314cf0u: goto label_314cf0;
        case 0x314d6cu: goto label_314d6c;
        case 0x314d98u: goto label_314d98;
        case 0x314e98u: goto label_314e98;
        default: break;
    }

    ctx->pc = 0x314ae0u;

    // 0x314ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314ae4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x314ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x314ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x314ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x314aec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x314af4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x314af4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314af8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x314af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x314afc: 0xa53018  mult        $a2, $a1, $a1
    ctx->pc = 0x314afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x314b00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x314b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x314b04: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x314b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x314b08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x314b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x314b0c: 0x55842  srl         $t3, $a1, 1
    ctx->pc = 0x314b0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x314b10: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x314b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x314b14: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x314b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x314b18: 0xaf8c8b28  sw          $t4, -0x74D8($gp)
    ctx->pc = 0x314b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 12));
    // 0x314b1c: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x314b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x314b20: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x314b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x314b24: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314b24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314b28: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x314b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x314b2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x314b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314b30: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x314b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x314b34: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x314b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x314b38: 0xaf828b2c  sw          $v0, -0x74D4($gp)
    ctx->pc = 0x314b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 2));
    // 0x314b3c: 0x622c2  srl         $a0, $a2, 11
    ctx->pc = 0x314b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 11));
    // 0x314b40: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x314b40u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x314b44: 0xb1182  srl         $v0, $t3, 6
    ctx->pc = 0x314b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 6));
    // 0x314b48: 0xfd890008  sd          $t1, 0x8($t4)
    ctx->pc = 0x314b48u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 9));
    // 0x314b4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314b50: 0xaf8c8b30  sw          $t4, -0x74D0($gp)
    ctx->pc = 0x314b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 12));
    // 0x314b54: 0x24840084  addiu       $a0, $a0, 0x84
    ctx->pc = 0x314b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x314b58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314b5c: 0xfd880010  sd          $t0, 0x10($t4)
    ctx->pc = 0x314b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 8));
    // 0x314b60: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x314b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314b64: 0xfd870018  sd          $a3, 0x18($t4)
    ctx->pc = 0x314b64u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 7));
    // 0x314b68: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x314b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x314b6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x314b70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x314b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x314b74: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314b74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314b78: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x314b78u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x314b7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x314b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b80: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x314b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x314b84: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x314b84u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x314b88: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x314b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x314b8c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x314b8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314b90: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x314B90u;
    SET_GPR_U32(ctx, 31, 0x314B98u);
    ctx->pc = 0x314B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B90u;
    // 0x314b94: 0x7383e  dsrl32      $a3, $a3, 0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x314B90u, 0x314B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B98u;
label_314b98:
    // 0x314b98: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x314b98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314b9c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x314b9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x314ba0: 0x713b8  dsll        $v0, $a3, 14
    ctx->pc = 0x314ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 14);
    // 0x314ba4: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x314ba4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x314ba8: 0x34421080  ori         $v0, $v0, 0x1080
    ctx->pc = 0x314ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4224);
    // 0x314bac: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x314BACu;
    SET_GPR_U32(ctx, 31, 0x314BB4u);
    ctx->pc = 0x314BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BACu;
    // 0x314bb0: 0x484025  or          $t0, $v0, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x314BACu, 0x314BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BB4u;
label_314bb4:
    // 0x314bb4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x314bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314bb8: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x314bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x314bbc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x314bc0: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x314bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x314bc4: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x314bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x314bc8: 0x3442a58c  ori         $v0, $v0, 0xA58C
    ctx->pc = 0x314bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42380);
    // 0x314bcc: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x314bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x314bd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314bd4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x314bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x314bd8: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x314bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x314bdc: 0xfd840010  sd          $a0, 0x10($t4)
    ctx->pc = 0x314bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x314be0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x314be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x314be4: 0xfd820018  sd          $v0, 0x18($t4)
    ctx->pc = 0x314be4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x314be8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x314be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314bec: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314becu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314bf4: 0xfd880000  sd          $t0, 0x0($t4)
    ctx->pc = 0x314bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 8));
    // 0x314bf8: 0xb082b  sltu        $at, $zero, $t3
    ctx->pc = 0x314bf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x314bfc: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x314bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314c00: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x314c00u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x314c04: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x314c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x314c08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x314c08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c0c: 0x344400c0  ori         $a0, $v0, 0xC0
    ctx->pc = 0x314c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x314c10: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x314c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x314c14: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x314c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x314c18: 0xfd840010  sd          $a0, 0x10($t4)
    ctx->pc = 0x314c18u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x314c1c: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x314c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x314c20: 0xfd820018  sd          $v0, 0x18($t4)
    ctx->pc = 0x314c20u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x314c24: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x314c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x314c28: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314c28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314c2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x314c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314c30: 0xfd890000  sd          $t1, 0x0($t4)
    ctx->pc = 0x314c30u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 9));
    // 0x314c34: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x314c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x314c38: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x314c38u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x314c3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x314c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x314c40: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x314c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x314c44: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x314c44u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x314c48: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x314c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x314c4c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x314c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x314c50: 0xfd820018  sd          $v0, 0x18($t4)
    ctx->pc = 0x314c50u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x314c54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x314c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x314c58: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314c58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314c5c: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x314c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x314c60: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x314c60u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x314c64: 0xfd840010  sd          $a0, 0x10($t4)
    ctx->pc = 0x314c64u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x314c68: 0xfd800018  sd          $zero, 0x18($t4)
    ctx->pc = 0x314c68u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 0));
    // 0x314c6c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x314C6Cu;
    {
        const bool branch_taken_0x314c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C6Cu;
        // 0x314c70: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c6c) {
            ctx->pc = 0x314D50u;
            goto label_314d50;
        }
    }
    ctx->pc = 0x314C74u;
    // 0x314c74: 0x2568ffff  addiu       $t0, $t3, -0x1
    ctx->pc = 0x314c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x314c78: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x314c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x314c7c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x314c7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x314c80: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x314c80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314c84: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x314c84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x314c88: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x314c88u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x314c8c: 0x84c3c  dsll32      $t1, $t0, 16
    ctx->pc = 0x314c8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 16));
    // 0x314c90: 0xd2438  dsll        $a0, $t5, 16
    ctx->pc = 0x314c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << 16);
    // 0x314c94: 0x1a44025  or          $t0, $t5, $a0
    ctx->pc = 0x314c94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x314c98: 0x25640700  addiu       $a0, $t3, 0x700
    ctx->pc = 0x314c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1792));
    // 0x314c9c: 0x46900  sll         $t5, $a0, 4
    ctx->pc = 0x314c9cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x314ca0: 0x25640790  addiu       $a0, $t3, 0x790
    ctx->pc = 0x314ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1936));
    // 0x314ca4: 0xd703c  dsll32      $t6, $t5, 0
    ctx->pc = 0x314ca4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) << (32 + 0));
    // 0x314ca8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x314ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x314cac: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x314cacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x314cb0: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x314cb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314cb4: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x314cb4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x314cb8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x314cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x314cbc: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x314cbcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x314cc0: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x314cc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314cc4: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x314cc4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x314cc8: 0x700f2389  pcpyld      $a0, $zero, $t7
    ctx->pc = 0x314cc8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x314ccc: 0x1a42025  or          $a0, $t5, $a0
    ctx->pc = 0x314cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x314cd0: 0x3c0d7900  lui         $t5, 0x7900
    ctx->pc = 0x314cd0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)30976 << 16));
    // 0x314cd4: 0x24190040  addiu       $t9, $zero, 0x40
    ctx->pc = 0x314cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314cd8: 0x35ad7000  ori         $t5, $t5, 0x7000
    ctx->pc = 0x314cd8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)28672);
    // 0x314cdc: 0x24180003  addiu       $t8, $zero, 0x3
    ctx->pc = 0x314cdcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x314ce0: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x314ce0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x314ce4: 0x240e000d  addiu       $t6, $zero, 0xD
    ctx->pc = 0x314ce4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x314ce8: 0x700d7b89  pcpyld      $t7, $zero, $t5
    ctx->pc = 0x314ce8u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 13)));
    // 0x314cec: 0x0  nop
    ctx->pc = 0x314cecu;
    // NOP
label_314cf0:
    // 0x314cf0: 0x254d001f  addiu       $t5, $t2, 0x1F
    ctx->pc = 0x314cf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x314cf4: 0xd803c  dsll32      $s0, $t5, 0
    ctx->pc = 0x314cf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) << (32 + 0));
    // 0x314cf8: 0xa683c  dsll32      $t5, $t2, 0
    ctx->pc = 0x314cf8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 0));
    // 0x314cfc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x314cfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x314d00: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x314d00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x314d04: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x314d04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x314d08: 0x1b08025  or          $s0, $t5, $s0
    ctx->pc = 0x314d08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) | GPR_U64(ctx, 16));
    // 0x314d0c: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x314d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x314d10: 0x1308025  or          $s0, $t1, $s0
    ctx->pc = 0x314d10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x314d14: 0x14b682b  sltu        $t5, $t2, $t3
    ctx->pc = 0x314d14u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x314d18: 0xfd900000  sd          $s0, 0x0($t4)
    ctx->pc = 0x314d18u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 16));
    // 0x314d1c: 0xfd990008  sd          $t9, 0x8($t4)
    ctx->pc = 0x314d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 25));
    // 0x314d20: 0xfd800010  sd          $zero, 0x10($t4)
    ctx->pc = 0x314d20u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 0));
    // 0x314d24: 0xfd980018  sd          $t8, 0x18($t4)
    ctx->pc = 0x314d24u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 24));
    // 0x314d28: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314d28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314d2c: 0xfd8f0000  sd          $t7, 0x0($t4)
    ctx->pc = 0x314d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 15));
    // 0x314d30: 0xfd8e0008  sd          $t6, 0x8($t4)
    ctx->pc = 0x314d30u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 14));
    // 0x314d34: 0xfd880010  sd          $t0, 0x10($t4)
    ctx->pc = 0x314d34u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 8));
    // 0x314d38: 0xfd980018  sd          $t8, 0x18($t4)
    ctx->pc = 0x314d38u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 24));
    // 0x314d3c: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314d3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314d40: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x314d40u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x314d44: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x314d44u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x314d48: 0x15a0ffe9  bnez        $t5, . + 4 + (-0x17 << 2)
    ctx->pc = 0x314D48u;
    {
        const bool branch_taken_0x314d48 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x314D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D48u;
        // 0x314d4c: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d48) {
            ctx->pc = 0x314CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314cf0;
        }
    }
    ctx->pc = 0x314D50u;
label_314d50:
    // 0x314d50: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x314d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x314d54: 0x34440084  ori         $a0, $v0, 0x84
    ctx->pc = 0x314d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
    // 0x314d58: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x314d58u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x314d5c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x314d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x314d60: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x314d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d64: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x314D64u;
    SET_GPR_U32(ctx, 31, 0x314D6Cu);
    ctx->pc = 0x314D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D64u;
    // 0x314d68: 0xfd820008  sd          $v0, 0x8($t4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x314D64u, 0x314D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D6Cu;
label_314d6c:
    // 0x314d6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314d70: 0x63182  srl         $a2, $a2, 6
    ctx->pc = 0x314d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x314d74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x314d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x314d78: 0x24c61080  addiu       $a2, $a2, 0x1080
    ctx->pc = 0x314d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4224));
    // 0x314d7c: 0x23eb8  dsll        $a3, $v0, 26
    ctx->pc = 0x314d7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 26);
    // 0x314d80: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x314d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x314d84: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x314d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x314d88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x314d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x314d8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x314d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x314d90: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x314D90u;
    SET_GPR_U32(ctx, 31, 0x314D98u);
    ctx->pc = 0x314D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D90u;
    // 0x314d94: 0x473025  or          $a2, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x314D90u, 0x314D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D98u;
label_314d98:
    // 0x314d98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314d9c: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x314d9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x314da0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314da4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x314da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x314da8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x314da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x314dac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314db0: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x314db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x314db4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x314db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x314db8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x314db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x314dbc: 0xfd840010  sd          $a0, 0x10($t4)
    ctx->pc = 0x314dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x314dc0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x314dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x314dc4: 0xfd830018  sd          $v1, 0x18($t4)
    ctx->pc = 0x314dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 3));
    // 0x314dc8: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x314dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x314dcc: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314dccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314dd0: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x314dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x314dd4: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x314dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x314dd8: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x314dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x314ddc: 0xfd860008  sd          $a2, 0x8($t4)
    ctx->pc = 0x314ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 6));
    // 0x314de0: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x314de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x314de4: 0xfd840010  sd          $a0, 0x10($t4)
    ctx->pc = 0x314de4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x314de8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x314dec: 0xfd830018  sd          $v1, 0x18($t4)
    ctx->pc = 0x314decu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 3));
    // 0x314df0: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x314df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x314df4: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314df4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314dfc: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x314dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x314e00: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x314e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x314e04: 0xfd830008  sd          $v1, 0x8($t4)
    ctx->pc = 0x314e04u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x314e08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x314e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e0c: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x314e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x314e10: 0xfd800018  sd          $zero, 0x18($t4)
    ctx->pc = 0x314e10u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 0));
    // 0x314e14: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x314E14u;
    {
        const bool branch_taken_0x314e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E14u;
        // 0x314e18: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e14) {
            ctx->pc = 0x314EF8u;
            goto label_314ef8;
        }
    }
    ctx->pc = 0x314E1Cu;
    // 0x314e1c: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x314e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x314e20: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x314e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x314e24: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x314e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314e28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x314e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x314e2c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x314e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x314e30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314e34: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x314e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x314e38: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x314e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x314e3c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x314e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x314e40: 0x24a606ff  addiu       $a2, $a1, 0x6FF
    ctx->pc = 0x314e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1791));
    // 0x314e44: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x314e44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x314e48: 0x24a6078f  addiu       $a2, $a1, 0x78F
    ctx->pc = 0x314e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1935));
    // 0x314e4c: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x314e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x314e50: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x314e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x314e54: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x314e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x314e58: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x314e58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x314e5c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x314e5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x314e60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x314e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x314e64: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x314e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x314e68: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x314e68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x314e6c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x314e6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x314e70: 0x70093389  pcpyld      $a2, $zero, $t1
    ctx->pc = 0x314e70u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x314e74: 0xe67025  or          $t6, $a3, $a2
    ctx->pc = 0x314e74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x314e78: 0x3c0678f0  lui         $a2, 0x78F0
    ctx->pc = 0x314e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30960 << 16));
    // 0x314e7c: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x314e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314e80: 0x34c66ff0  ori         $a2, $a2, 0x6FF0
    ctx->pc = 0x314e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28656);
    // 0x314e84: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x314e84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x314e88: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x314e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x314e8c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x314e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x314e90: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x314e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x314e94: 0x70064b89  pcpyld      $t1, $zero, $a2
    ctx->pc = 0x314e94u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
label_314e98:
    // 0x314e98: 0x2486001f  addiu       $a2, $a0, 0x1F
    ctx->pc = 0x314e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x314e9c: 0x6683c  dsll32      $t5, $a2, 0
    ctx->pc = 0x314e9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) << (32 + 0));
    // 0x314ea0: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x314ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314ea4: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x314ea4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x314ea8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x314ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x314eac: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x314eacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x314eb0: 0xcd6825  or          $t5, $a2, $t5
    ctx->pc = 0x314eb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x314eb4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x314eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x314eb8: 0x6d6825  or          $t5, $v1, $t5
    ctx->pc = 0x314eb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x314ebc: 0x85302b  sltu        $a2, $a0, $a1
    ctx->pc = 0x314ebcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x314ec0: 0xfd8d0000  sd          $t5, 0x0($t4)
    ctx->pc = 0x314ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 13));
    // 0x314ec4: 0xfd8b0008  sd          $t3, 0x8($t4)
    ctx->pc = 0x314ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 11));
    // 0x314ec8: 0xfd800010  sd          $zero, 0x10($t4)
    ctx->pc = 0x314ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 0));
    // 0x314ecc: 0xfd8a0018  sd          $t2, 0x18($t4)
    ctx->pc = 0x314eccu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 10));
    // 0x314ed0: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314ed0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314ed4: 0xfd890000  sd          $t1, 0x0($t4)
    ctx->pc = 0x314ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 9));
    // 0x314ed8: 0xfd880008  sd          $t0, 0x8($t4)
    ctx->pc = 0x314ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 8));
    // 0x314edc: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x314edcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x314ee0: 0xfd8a0018  sd          $t2, 0x18($t4)
    ctx->pc = 0x314ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 10));
    // 0x314ee4: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314ee4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314ee8: 0xfd8e0000  sd          $t6, 0x0($t4)
    ctx->pc = 0x314ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 14));
    // 0x314eec: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x314eecu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x314ef0: 0x14c0ffe9  bnez        $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x314EF0u;
    {
        const bool branch_taken_0x314ef0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x314EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EF0u;
        // 0x314ef4: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ef0) {
            ctx->pc = 0x314E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314e98;
        }
    }
    ctx->pc = 0x314EF8u;
label_314ef8:
    // 0x314ef8: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x314ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x314efc: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x314efcu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x314f00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x314f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x314f04: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x314f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314f08: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x314f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x314f0c: 0xfd820008  sd          $v0, 0x8($t4)
    ctx->pc = 0x314f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x314f10: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x314f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x314f14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314f18: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x314f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x314f1c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x314f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x314f20: 0xfd830010  sd          $v1, 0x10($t4)
    ctx->pc = 0x314f20u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
    // 0x314f24: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x314f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314f28: 0xfd820018  sd          $v0, 0x18($t4)
    ctx->pc = 0x314f28u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x314f2c: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x314f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x314f30: 0x8c26f014  lw          $a2, -0xFEC($at)
    ctx->pc = 0x314f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x314f34: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314f3c: 0xdcc60020  ld          $a2, 0x20($a2)
    ctx->pc = 0x314f3cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x314f40: 0xfd860000  sd          $a2, 0x0($t4)
    ctx->pc = 0x314f40u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 6));
    // 0x314f44: 0xfd840008  sd          $a0, 0x8($t4)
    ctx->pc = 0x314f44u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 4));
    // 0x314f48: 0xfd800010  sd          $zero, 0x10($t4)
    ctx->pc = 0x314f48u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 0));
    // 0x314f4c: 0xfd830018  sd          $v1, 0x18($t4)
    ctx->pc = 0x314f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 3));
    // 0x314f50: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x314f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x314f54: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x314f54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x314f58: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x314f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x314f5c: 0x32702  srl         $a0, $v1, 28
    ctx->pc = 0x314f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x314f60: 0x31e82  srl         $v1, $v1, 26
    ctx->pc = 0x314f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x314f64: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x314f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x314f68: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x314F68u;
    {
        const bool branch_taken_0x314f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F68u;
        // 0x314f6c: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f68) {
            ctx->pc = 0x314FB0u;
            goto label_314fb0;
        }
    }
    ctx->pc = 0x314F70u;
    // 0x314f70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x314f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x314f74: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x314F74u;
    {
        const bool branch_taken_0x314f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x314f74) {
            ctx->pc = 0x314F90u;
            goto label_314f90;
        }
    }
    ctx->pc = 0x314F7Cu;
    // 0x314f7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314F7Cu;
    {
        const bool branch_taken_0x314f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x314f7c) {
            ctx->pc = 0x314F90u;
            goto label_314f90;
        }
    }
    ctx->pc = 0x314F84u;
    // 0x314f84: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x314F84u;
    {
        const bool branch_taken_0x314f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314f84) {
            ctx->pc = 0x314FE0u;
            goto label_314fe0;
        }
    }
    ctx->pc = 0x314F8Cu;
    // 0x314f8c: 0x0  nop
    ctx->pc = 0x314f8cu;
    // NOP
label_314f90:
    // 0x314f90: 0x1861823  subu        $v1, $t4, $a2
    ctx->pc = 0x314f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x314f94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314F94u;
    {
        const bool branch_taken_0x314f94 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x314F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F94u;
        // 0x314f98: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f94) {
            ctx->pc = 0x314FA4u;
            goto label_314fa4;
        }
    }
    ctx->pc = 0x314F9Cu;
    // 0x314f9c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x314f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x314fa0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x314fa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_314fa4:
    // 0x314fa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x314fa8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x314FA8u;
    {
        const bool branch_taken_0x314fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FA8u;
        // 0x314fac: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fa8) {
            ctx->pc = 0x314FE0u;
            goto label_314fe0;
        }
    }
    ctx->pc = 0x314FB0u;
label_314fb0:
    // 0x314fb0: 0x1861823  subu        $v1, $t4, $a2
    ctx->pc = 0x314fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x314fb4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314FB4u;
    {
        const bool branch_taken_0x314fb4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x314FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FB4u;
        // 0x314fb8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fb4) {
            ctx->pc = 0x314FC4u;
            goto label_314fc4;
        }
    }
    ctx->pc = 0x314FBCu;
    // 0x314fbc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x314fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x314fc0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x314fc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_314fc4:
    // 0x314fc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x314fc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x314fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x314fcc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x314fccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x314fd0: 0x0  nop
    ctx->pc = 0x314fd0u;
    // NOP
    // 0x314fd4: 0x0  nop
    ctx->pc = 0x314fd4u;
    // NOP
    // 0x314fd8: 0x1012  mflo        $v0
    ctx->pc = 0x314fd8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x314fdc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x314fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_314fe0:
    // 0x314fe0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x314fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x314fe4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x314fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x314fe8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x314fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x314fec: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x314fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x314ff0: 0x1841823  subu        $v1, $t4, $a0
    ctx->pc = 0x314ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x314ff4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314FF4u;
    {
        const bool branch_taken_0x314ff4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x314FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FF4u;
        // 0x314ff8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ff4) {
            ctx->pc = 0x315004u;
            goto label_315004;
        }
    }
    ctx->pc = 0x314FFCu;
    // 0x314ffc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x314ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315000: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x315000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_315004:
    // 0x315004: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x315004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315008: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x315008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31500c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x315010: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x315010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x315014: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x315014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x315018: 0x1841823  subu        $v1, $t4, $a0
    ctx->pc = 0x315018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x31501c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31501Cu;
    {
        const bool branch_taken_0x31501c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x315020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31501Cu;
        // 0x315020: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31501c) {
            ctx->pc = 0x31502Cu;
            goto label_31502c;
        }
    }
    ctx->pc = 0x315024u;
    // 0x315024: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x315024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315028: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x315028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31502c:
    // 0x31502c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315030: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x315030u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x315034: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x315034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x315038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31503c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31503cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315040: 0x3e00008  jr          $ra
    ctx->pc = 0x315040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315040u;
        // 0x315044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315048u;
}
